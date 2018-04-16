{% include "license.txt" %}
#include "{{ClassName|lower}}.h"
#include "{{ClassName|lower}}_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace {{NameSpaceName}} {

/*!
 * \class QtAws::{{NameSpaceName}}::{{ClassName}}
 *
 * \brief The {{ClassName}} class provides an interace for {{ServiceName}} {{OperationName}} responses.
 *
 * \ingroup {{NameSpaceName}}
 *
{% for line in ClassDocumentation %}
 * {% if line %} {{ line }}{% endif %}
{% endfor %}
 *
 * \sa {{ServiceName}}Client::{{OperationName|slice:"0:1"|lower}}{{OperationName|slice:"01:-1"}}
 */

/*!
 * @brief  Constructs a new {{ClassName}} object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
{{ClassName}}::{{ClassName}}(
        const {{OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : {{ServiceName}}Response(new {{ClassName}}Private(this), parent)
{
    setRequest(new {{OperationName}}Request(request));
    setReply(reply);
}

const {{OperationName}}Request * {{ClassName}}::request() const
{
    Q_D(const {{ClassName}});
    return static_cast<const {{OperationName}}Request *>(d->request);
}

/*!
 * @brief  Parse a {{ServiceName}} {{OperationName}} response.
 *
 * @param  response  Response to parse.
 */
void {{ClassName}}::parseSuccess(QIODevice &response)
{
    Q_D({{ClassName}});
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class {{ClassName}}Private
 *
 * \brief Private implementation for {{ClassName}}.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new {{ClassName}}Private object.
 *
 * @param  q  Pointer to this object's public {{ClassName}} instance.
 */
{{ClassName}}Private::{{ClassName}}Private(
    {{ClassName}} * const q) : {{ServiceName}}ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an {{ServiceName}} {{ClassName}} element.
 *
 * @param  xml  XML stream to parse.
 */
void {{ClassName}}Private::parse{{ClassName}}(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("{{ClassName}}"));
    /// @todo
}

} // namespace {{NameSpaceName}}
} // namespace QtAws
