/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "cloud9request.h"
#include "cloud9request_p.h"

namespace QtAws {
namespace Cloud9 {

/*!
 * \class QtAws::Cloud9::Cloud9Request
 * \brief The Cloud9Request class provides an interface for Cloud9 requests.
 *
 * \inmodule QtAwsCloud9
 */

/*!
 * \enum Cloud9Request::Action
 *
 * This enum describes the actions that can be performed as Cloud9
 * requests.
 *
 * \value CreateEnvironmentEC2Action Cloud9 CreateEnvironmentEC2 action.
 * \value CreateEnvironmentMembershipAction Cloud9 CreateEnvironmentMembership action.
 * \value DeleteEnvironmentAction Cloud9 DeleteEnvironment action.
 * \value DeleteEnvironmentMembershipAction Cloud9 DeleteEnvironmentMembership action.
 * \value DescribeEnvironmentMembershipsAction Cloud9 DescribeEnvironmentMemberships action.
 * \value DescribeEnvironmentStatusAction Cloud9 DescribeEnvironmentStatus action.
 * \value DescribeEnvironmentsAction Cloud9 DescribeEnvironments action.
 * \value ListEnvironmentsAction Cloud9 ListEnvironments action.
 * \value UpdateEnvironmentAction Cloud9 UpdateEnvironment action.
 * \value UpdateEnvironmentMembershipAction Cloud9 UpdateEnvironmentMembership action.
 */

/*!
 * Constructs a Cloud9Request object for Cloud9 \a action.
 */
Cloud9Request::Cloud9Request(const Action action)
    : QtAws::Core::AwsAbstractRequest(new Cloud9RequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
Cloud9Request::Cloud9Request(const Cloud9Request &other)
    : QtAws::Core::AwsAbstractRequest(new Cloud9RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the Cloud9Request object to be equal to \a other.
 */
Cloud9Request& Cloud9Request::operator=(const Cloud9Request &other)
{
    Q_D(Cloud9Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa Cloud9Request object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Cloud9RequestPrivate.
 */
Cloud9Request::Cloud9Request(Cloud9RequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Cloud9 action to be performed by this request.
 */
Cloud9Request::Action Cloud9Request::action() const
{
    Q_D(const Cloud9Request);
    return d->action;
}

/*!
 * Returns the name of the Cloud9 action to be performed by this request.
 */
QString Cloud9Request::actionString() const
{
    return Cloud9RequestPrivate::toString(action());
}

/*!
 * Returns the Cloud9 API version implemented by this request.
 */
QString Cloud9Request::apiVersion() const
{
    Q_D(const Cloud9Request);
    return d->apiVersion;
}

/*!
 * Sets the Cloud9 action to be performed by this request to \a action.
 */
void Cloud9Request::setAction(const Action action)
{
    Q_D(Cloud9Request);
    d->action = action;
}

/*!
 * Sets the Cloud9 API version to include in this request to \a version.
 */
void Cloud9Request::setApiVersion(const QString &version)
{
    Q_D(Cloud9Request);
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
bool Cloud9Request::operator==(const Cloud9Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Cloud9 queue name.
 *
 * @par From Cloud9 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Cloud9 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool Cloud9Request::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int Cloud9Request::clearParameter(const QString &name)
{
    Q_D(Cloud9Request);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void Cloud9Request::clearParameters()
{
    Q_D(Cloud9Request);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant Cloud9Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const Cloud9Request);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &Cloud9Request::parameters() const
{
    Q_D(const Cloud9Request);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void Cloud9Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(Cloud9Request);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void Cloud9Request::setParameters(const QVariantMap &parameters)
{
    Q_D(Cloud9Request);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Cloud9 request using the given
 * \a endpoint.
 *
 * This Cloud9 implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest Cloud9Request::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const Cloud9Request);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Cloud9::Cloud9RequestPrivate
 * \brief The Cloud9RequestPrivate class provides private implementation for Cloud9Request.
 * \internal
 *
 * \inmodule QtAwsCloud9
 */

/*!
 * Constructs a Cloud9RequestPrivate object for Cloud9 \a action,
 * with public implementation \a q.
 */
Cloud9RequestPrivate::Cloud9RequestPrivate(const Cloud9Request::Action action, Cloud9Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the Cloud9Request class's copy constructor.
 */
Cloud9RequestPrivate::Cloud9RequestPrivate(const Cloud9RequestPrivate &other,
                                     Cloud9Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts Cloud9Request::Action enumerator values to their respective
 * string representations, appropriate for use with the Cloud9 service's Action
 * query parameters.
 */
QString Cloud9RequestPrivate::toString(const Cloud9Request::Action &action)
{
    #define ActionToString(action) \
        case Cloud9Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Cloud9
} // namespace QtAws
