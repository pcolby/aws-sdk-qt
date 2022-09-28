{% include "license.txt" %}
{% with service.traits.awsApi_service.sdkId|cut:" " as ServiceName %}
{% with operation.name|add:"Response" as ClassName %}
#include "{{ClassName|lower}}.h"
#include "{{ClassName|lower}}_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace {{ServiceName}} {

/*!
 * \class QtAws::{{ServiceName}}::{{ClassName}}
 * \brief The {{ClassName}} class provides an interace for {{ServiceName}} {{OperationName}} responses.
 *
 * \inmodule QtAws{{ServiceName}}
 *
{% for line in ClassDocumentation %}
 * {% if line %} {{ line }}{% endif %}
{% endfor %}
 *
 * \sa {{ClientClassName}}::{{OperationName|slice:"0:1"|lower}}{{OperationName|slice:"01:-1"}}
 */

/*!
 * Constructs a {{ClassName}} object for \a reply to \a request, with parent \a parent.
 */
{{ClassName}}::{{ClassName}}(
        const {{OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : {{ServiceClass}}Response(new {{ClassName}}Private(this), parent)
{
    setRequest(new {{OperationName}}Request(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const {{OperationName}}Request * {{ClassName}}::request() const
{
    Q_D(const {{ClassName}});
    return static_cast<const {{OperationName}}Request *>(d->request);
}

/*!
 * \reimp
 * Parses a successful {{ServiceName}} {{OperationName}} \a response.
 */
void {{ClassName}}::parseSuccess(QIODevice &response)
{
    //Q_D({{ClassName}});
    QXmlStreamReader xml(&response);
    /// @todo
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
    {{ClassName}} * const q) : {{ServiceClass}}ResponsePrivate(q)
{

}

/*!
 * Parses a {{ServiceName}} {{OperationName}} response element from \a xml.
 */
void {{ClassName}}Private::parse{{ClassName}}(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("{{ClassName}}"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace {{ServiceName}}
} // namespace QtAws
{% endwith %}
{% endwith %}
