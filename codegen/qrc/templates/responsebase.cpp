{% include "license.txt" %}
#include "{{ClassName|lower}}.h"
#include "{{ClassName|lower}}_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace {{NameSpaceName}} {

/*!
 * \class QtAws::{{NameSpaceName}}::{{ClassName}}
 *
 * \brief The {{ClassName}} class is the base class for all {{ServiceName}} responses.
 *
 * \ingroup {{NameSpaceName}}
 */

/*!
 * @brief  Constructs a new {{ClassName}} object.
 *
 * @param  parent   This object's parent.
 */
{{ClassName}}::{{ClassName}}(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new {{ClassName}}Private(this), parent)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new {{ClassName}} object.
 *
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from {{ClassName}}Private.
 *
 * @param  d       Pointer to private data (aka D-Pointer).
 * @param  parent  This object's parent.
 */
{{ClassName}}::{{ClassName}}({{ClassName}}Private * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void {{ClassName}}::parseFailure(QIODevice &response)
{
    Q_D({{ClassName}});
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

/*!
 * @internal
 *
 * @class  {{ClassName}}Private
 *
 * @brief  Private implementation for {{ClassName}}.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new {{ClassName}}Private object.
 *
 * @param  q  Pointer to this object's public {{ClassName}} instance.
 */
{{ClassName}}Private::{{ClassName}}Private(
    {{ClassName}} * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace {{NameSpaceName}}
} // namespace QtAws
