#ifndef SHADER_H_
#define SHADER_H_

#include <glm/glm.hpp>
#include <string>
#include <unordered_map>

struct ShaderProgramSource;

class Shader
{
public:
    Shader(const std::string& filepath);
    ~Shader();

    void bind() const;
    void unbind() const;

    void setUniform1i(const std::string& name, int value);
    /* TODO: Use vector 4 */
    void setUniform4f(const std::string& name, float v0, float v1, float v2, float v3);
    void setUniformMat4f(const std::string& name, const glm::mat4& matrix);

private:
    unsigned int m_id;
    std::string m_filepath;
    std::unordered_map<std::string, int> m_uniformLocationCache;

    ShaderProgramSource parse(const std::string& filepath);
    unsigned int compile(unsigned int type, const std::string& source);
    unsigned int create(const std::string& vertexShader, const std::string& fragmentShader);
    int getUniformLocation(const std::string& name);
};
#endif /* SHADER_H_ */
