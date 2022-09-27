{% include "license.txt" %}
#include "{{ClassName|lower}}.h"
#include "{{ClassName|lower}}_p.h"

namespace QtAws {
namespace {{ServiceName}} {

/*!
 * \class QtAws::{{ServiceName}}::{{ClassName}}
 * \brief The {{ClassName}} class provides an interface for {{ServiceName}} requests.
 *
 * \inmodule QtAws{{ServiceName}}
 */

/*!
 * \enum {{ClassName}}::Action
 *
 * This enum describes the actions that can be performed as {{ServiceName}}
 * requests.
 *
    {% for name in operations.keys %}
 * \value {{name}}Action {{ServiceName}} {{name}} action.
    {% endfor %}
 */

/*!
 * Constructs a {{ClassName}} object for {{ServiceName}} \a action.
 */
{{ClassName}}::{{ClassName}}(const Action action)
    : QtAws::Core::AwsAbstractRequest(new {{ClassName}}Private(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
{{ClassName}}::{{ClassName}}(const {{ClassName}} &other)
    : QtAws::Core::AwsAbstractRequest(new {{ClassName}}Private(*other.d_func(), this))
{

}

/*!
 * Sets the {{ClassName}} object to be equal to \a other.
 */
{{ClassName}}& {{ClassName}}::operator=(const {{ClassName}} &other)
{
    Q_D({{ClassName}});
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa {{ClassName}} object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from {{ClassName}}Private.
 */
{{ClassName}}::{{ClassName}}({{ClassName}}Private * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the {{ServiceName}} action to be performed by this request.
 */
{{ClassName}}::Action {{ClassName}}::action() const
{
    Q_D(const {{ClassName}});
    return d->action;
}

/*!
 * Returns the name of the {{ServiceName}} action to be performed by this request.
 */
QString {{ClassName}}::actionString() const
{
    return {{ClassName}}Private::toString(action());
}

/*!
 * Returns the {{ServiceName}} API version implemented by this request.
 */
QString {{ClassName}}::apiVersion() const
{
    Q_D(const {{ClassName}});
    return d->apiVersion;
}

/*!
 * Sets the {{ServiceName}} action to be performed by this request to \a action.
 */
void {{ClassName}}::setAction(const Action action)
{
    Q_D({{ClassName}});
    d->action = action;
}

/*!
 * Sets the {{ServiceName}} API version to include in this request to \a version.
 */
void {{ClassName}}::setApiVersion(const QString &version)
{
    Q_D({{ClassName}});
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool {{ClassName}}::operator==(const {{ClassName}} &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid {{ServiceName}} queue name.
 *
 * @par From {{ServiceName}} FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid {{ServiceName}} queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool {{ClassName}}::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int {{ClassName}}::clearParameter(const QString &name)
{
    Q_D({{ClassName}});
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void {{ClassName}}::clearParameters()
{
    Q_D({{ClassName}});
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant {{ClassName}}::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const {{ClassName}});
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &{{ClassName}}::parameters() const
{
    Q_D(const {{ClassName}});
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void {{ClassName}}::setParameter(const QString &name, const QVariant &value)
{
    Q_D({{ClassName}});
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void {{ClassName}}::setParameters(const QVariantMap &parameters)
{
    Q_D({{ClassName}});
    d->parameters = parameters;
}

/*!
 * Returns a network request for the {{ServiceName}} request using the given
 * \a endpoint.
 *
 * This {{ServiceName}} implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest {{ClassName}}::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const {{ClassName}});
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
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
{{ClassName}}Private::{{ClassName}}Private(const {{ClassName}}::Action action, {{ClassName}} * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("{{version}}"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the {{ClassName}} class's copy constructor.
 */
{{ClassName}}Private::{{ClassName}}Private(const {{ClassName}}Private &other,
                                     {{ClassName}} * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts {{ClassName}}::Action enumerator values to their respective
 * string representations, appropriate for use with the {{ServiceName}} service's Action
 * query parameters.
 */
QString {{ClassName}}Private::toString(const {{ClassName}}::Action &action)
{
    #define ActionToString(action) \
        case {{ClassName}}::action##Action: return QStringLiteral(#action)
    switch (action) {
        {% for name in operations.keys %}
        ActionToString({{name}});
        {% endfor %}
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace {{ServiceName}}
} // namespace QtAws
