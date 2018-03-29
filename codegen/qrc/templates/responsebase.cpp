{% include "license.txt" %}
#include "{{ClassName|lower}}.h"
#include "{{ClassName|lower}}_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace {{NameSpaceName}} {

/**
 * @class  {{ClassName}}
 *
 * @brief  Handles {{ServiceName}} {{ClassName|cut:"Response"}} responses.
 *
 * @see    {{ServiceName}}Client::{{ClassName|slice:"0:1"|lower}}{{ClassName|slice:"01:-1"|cut:"Response"}}
 */

/**
 * @brief  Constructs a new {{ClassName}} object.
 *
 * @param  parent   This object's parent.
 */
{{ClassName}}::{{ClassName}}(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new {{ClassName}}Private(this), parent)
{

}

/**
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void {{ClassName}}::parseFailure(QIODevice &response)
{
    Q_D(SqsResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/**
 * @internal
 *
 * @class  {{ClassName}}Private
 *
 * @brief  Private implementation for {{ClassName}}.
 */

/**
 * @internal
 *
 * @brief  Constructs a new {{ClassName}}Private object.
 *
 * @param  q  Pointer to this object's public {{ClassName}} instance.
 */
{{ClassName}}Private::{{ClassName}}Private(
    {{ClassName|cut:"Response"}}QueueResponse * const q) : {{ClassName|cut:"Response"}}Private(q)
{

}

} // namespace {{NameSpaceName}}
} // namespace QtAws
