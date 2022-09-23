{% include "license.txt" %}
#include "{{ClassName|lower}}.h"
#include "{{ClassName|lower}}_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace {{NameSpaceName}} {

/*!
 * \class QtAws::{{NameSpaceName}}::{{ClassName}}
 * \brief The {{ClassName}} class provides an interface for {{ServiceName}} responses.
 *
 * \inmodule QtAws{{NameSpaceName}}
 */

/*!
 * Constructs a {{ClassName}} object with parent \a parent.
 */
{{ClassName}}::{{ClassName}}(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new {{ClassName}}Private(this), parent)
{

}

/*!
 * \internal
 * Constructs a {{ClassName}} object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from {{ClassName}}Private.
 */
{{ClassName}}::{{ClassName}}({{ClassName}}Private * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void {{ClassName}}::parseFailure(QIODevice &response)
{
    //Q_D({{ClassName}});
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
 * \class QtAws::{{NameSpaceName}}::{{ClassName}}Private
 * \brief The {{ClassName}}Private class provides private implementation for {{ClassName}}.
 * \internal
 *
 * \inmodule QtAws{{NameSpaceName}}
 */

/*!
 * Constructs a {{ClassName}}Private object with public implementation \a q.
 */
{{ClassName}}Private::{{ClassName}}Private(
    {{ClassName}} * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace {{NameSpaceName}}
} // namespace QtAws
