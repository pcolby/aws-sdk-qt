/*
    Copyright 2013-2021 Paul Colby

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

#include "healthrequest.h"
#include "healthrequest_p.h"

namespace QtAws {
namespace Health {

/*!
 * \class QtAws::Health::HealthRequest
 * \brief The HealthRequest class provides an interface for Health requests.
 *
 * \inmodule QtAwsHealth
 */

/*!
 * \enum HealthRequest::Action
 *
 * This enum describes the actions that can be performed as Health
 * requests.
 *
 * \value DescribeAffectedAccountsForOrganizationAction Health DescribeAffectedAccountsForOrganization action.
 * \value DescribeAffectedEntitiesAction Health DescribeAffectedEntities action.
 * \value DescribeAffectedEntitiesForOrganizationAction Health DescribeAffectedEntitiesForOrganization action.
 * \value DescribeEntityAggregatesAction Health DescribeEntityAggregates action.
 * \value DescribeEventAggregatesAction Health DescribeEventAggregates action.
 * \value DescribeEventDetailsAction Health DescribeEventDetails action.
 * \value DescribeEventDetailsForOrganizationAction Health DescribeEventDetailsForOrganization action.
 * \value DescribeEventTypesAction Health DescribeEventTypes action.
 * \value DescribeEventsAction Health DescribeEvents action.
 * \value DescribeEventsForOrganizationAction Health DescribeEventsForOrganization action.
 * \value DescribeHealthServiceStatusForOrganizationAction Health DescribeHealthServiceStatusForOrganization action.
 * \value DisableHealthServiceAccessForOrganizationAction Health DisableHealthServiceAccessForOrganization action.
 * \value EnableHealthServiceAccessForOrganizationAction Health EnableHealthServiceAccessForOrganization action.
 */

/*!
 * Constructs a HealthRequest object for Health \a action.
 */
HealthRequest::HealthRequest(const Action action)
    : d_ptr(new HealthRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
HealthRequest::HealthRequest(const HealthRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new HealthRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the HealthRequest object to be equal to \a other.
 */
HealthRequest& HealthRequest::operator=(const HealthRequest &other)
{
    Q_D(HealthRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa HealthRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from HealthRequestPrivate.
 */
HealthRequest::HealthRequest(HealthRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the Health action to be performed by this request.
 */
HealthRequest::Action HealthRequest::action() const
{
    Q_D(const HealthRequest);
    return d->action;
}

/*!
 * Returns the name of the Health action to be performed by this request.
 */
QString HealthRequest::actionString() const
{
    return HealthRequestPrivate::toString(action());
}

/*!
 * Returns the Health API version implemented by this request.
 */
QString HealthRequest::apiVersion() const
{
    Q_D(const HealthRequest);
    return d->apiVersion;
}

/*!
 * Sets the Health action to be performed by this request to \a action.
 */
void HealthRequest::setAction(const Action action)
{
    Q_D(HealthRequest);
    d->action = action;
}

/*!
 * Sets the Health API version to include in this request to \a version.
 */
void HealthRequest::setApiVersion(const QString &version)
{
    Q_D(HealthRequest);
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
bool HealthRequest::operator==(const HealthRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Health queue name.
 *
 * @par From Health FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Health queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool HealthRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int HealthRequest::clearParameter(const QString &name)
{
    Q_D(HealthRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void HealthRequest::clearParameters()
{
    Q_D(HealthRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant HealthRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const HealthRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &HealthRequest::parameters() const
{
    Q_D(const HealthRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void HealthRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(HealthRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void HealthRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(HealthRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Health request using the given
 * \a endpoint.
 *
 * This Health implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest HealthRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const HealthRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Health::HealthRequestPrivate
 * \brief The HealthRequestPrivate class provides private implementation for HealthRequest.
 * \internal
 *
 * \inmodule QtAwsHealth
 */

/*!
 * Constructs a HealthRequestPrivate object for Health \a action,
 * with public implementation \a q.
 */
HealthRequestPrivate::HealthRequestPrivate(const HealthRequest::Action action, HealthRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the HealthRequest class's copy constructor.
 */
HealthRequestPrivate::HealthRequestPrivate(const HealthRequestPrivate &other,
                                     HealthRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts HealthRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Health service's Action
 * query parameters.
 */
QString HealthRequestPrivate::toString(const HealthRequest::Action &action)
{
    #define ActionToString(action) \
        case HealthRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Health
} // namespace QtAws
