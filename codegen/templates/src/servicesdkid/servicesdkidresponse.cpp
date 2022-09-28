{% include "license.txt" %}
{% with service.traits.awsApi_service.sdkId|cut:" " as ServiceName %}
{% with ServiceName|add:"Response" as ClassName %}
#include "{{ClassName|lower}}.h"
#include "{{ClassName|lower}}_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace {{ServiceName}} {

/*!
 * \class QtAws::{{ServiceName}}::{{ClassName}}
 * \brief The {{ClassName}} class provides an interface for {{ServiceName}} responses.
 *
 * \inmodule QtAws{{ServiceName}}
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
 * \class QtAws::{{ServiceName}}::{{ClassName}}Private
 * \brief The {{ClassName}}Private class provides private implementation for {{ClassName}}.
 * \internal
 *
 * \inmodule QtAws{{ServiceName}}
 */

/*!
 * Constructs a {{ClassName}}Private object with public implementation \a q.
 */
{{ClassName}}Private::{{ClassName}}Private(
    {{ClassName}} * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace {{ServiceName}}
} // namespace QtAws
{% endwith %}
{% endwith %}
