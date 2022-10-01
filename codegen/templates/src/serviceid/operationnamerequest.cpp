// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

{% with service.canonicalId as ServiceName %}
{% with operation.name|add:"Request" as ClassName %}
#include "{{ClassName|lower}}.h"
#include "{{ClassName|lower}}_p.h"
#include "{{operation.name|lower}}response.h"
#include "{{ServiceName|lower}}request_p.h"

namespace QtAws {
namespace {{ServiceName}} {

/*!
 * \class QtAws::{{ServiceName}}::{{ClassName}}
 * \brief The {{ClassName}} class provides an interface for {{ServiceName}} {{operation.name}} requests.
 *
 * \inmodule QtAws{{ServiceName}}
 *
{# \todo This should be some sort of operation doc, not service doc. #}
{% for line in service.documentation %}
 * {% if line %} {{ line }}{% endif %}
{% endfor %}
 *
 * \sa {{ServiceName}}Client::{{operation.name|slice:"0:1"|lower}}{{operation.name|slice:"01:-1"}}
 */

/*!
 * Constructs a copy of \a other.
 */
{{ClassName}}::{{ClassName}}(const {{ClassName}} &other)
    : {{ServiceName}}Request(new {{ClassName}}Private(*other.d_func(), this))
{

}

/*!
 * Constructs a {{ClassName}} object.
 */
{{ClassName}}::{{ClassName}}()
    : {{ServiceName}}Request(new {{ClassName}}Private({{ServiceName}}Request::{{operation.name}}Action, this))
{

}

/*!
 * \reimp
 */
bool {{ClassName}}::isValid() const
{
    return false;{# @todo #}
}

{# @todo Accessor methods #}

/*!
 * Returns a {{operation.name}}Response object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * {{ClassName}}::response(QNetworkReply * const reply) const
{
    return new {{operation.name}}Response(*this, reply);
}

/*!
 * \class QtAws::{{ServiceName}}::{{ClassName}}Private
 * \brief The {{ClassName}}Private class provides private implementation for {{ClassName}}.
 * \internal
 *
 * \inmodule QtAws{{ServiceName}}
 */

/*!
 * Constructs a {{ClassName}}Private object for {{ServiceName}} \a action,
 * with public implementation \a q.
 */
{{ClassName}}Private::{{ClassName}}Private(
    const {{ServiceName}}Request::Action action, {{ClassName}} * const q)
    : {{ServiceName}}RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the {{ClassName}}
 * class' copy constructor.
 */
{{ClassName}}Private::{{ClassName}}Private(
    const {{ClassName}}Private &other, {{ClassName}} * const q)
    : {{ServiceName}}RequestPrivate(other, q)
{

}

} // namespace {{ServiceName}}
} // namespace QtAws
{% endwith %}
{% endwith %}
