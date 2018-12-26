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

#include "rdsdataservicerequest.h"
#include "rdsdataservicerequest_p.h"

namespace QtAws {
namespace RDSDataService {

/*!
 * \class QtAws::RDSDataService::RDSDataServiceRequest
 * \brief The RDSDataServiceRequest class provides an interface for RDSDataService requests.
 *
 * \inmodule QtAwsRDSDataService
 */

/*!
 * \enum RDSDataServiceRequest::Action
 *
 * This enum describes the actions that can be performed as RDSDataService
 * requests.
 *
 * \value ExecuteSqlAction RDSDataService ExecuteSql action.
 */

/*!
 * Constructs a RDSDataServiceRequest object for RDSDataService \a action.
 */
RDSDataServiceRequest::RDSDataServiceRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new RDSDataServiceRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
RDSDataServiceRequest::RDSDataServiceRequest(const RDSDataServiceRequest &other)
    : QtAws::Core::AwsAbstractRequest(new RDSDataServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the RDSDataServiceRequest object to be equal to \a other.
 */
RDSDataServiceRequest& RDSDataServiceRequest::operator=(const RDSDataServiceRequest &other)
{
    Q_D(RDSDataServiceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa RDSDataServiceRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RDSDataServiceRequestPrivate.
 */
RDSDataServiceRequest::RDSDataServiceRequest(RDSDataServiceRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the RDSDataService action to be performed by this request.
 */
RDSDataServiceRequest::Action RDSDataServiceRequest::action() const
{
    Q_D(const RDSDataServiceRequest);
    return d->action;
}

/*!
 * Returns the name of the RDSDataService action to be performed by this request.
 */
QString RDSDataServiceRequest::actionString() const
{
    return RDSDataServiceRequestPrivate::toString(action());
}

/*!
 * Returns the RDSDataService API version implemented by this request.
 */
QString RDSDataServiceRequest::apiVersion() const
{
    Q_D(const RDSDataServiceRequest);
    return d->apiVersion;
}

/*!
 * Sets the RDSDataService action to be performed by this request to \a action.
 */
void RDSDataServiceRequest::setAction(const Action action)
{
    Q_D(RDSDataServiceRequest);
    d->action = action;
}

/*!
 * Sets the RDSDataService API version to include in this request to \a version.
 */
void RDSDataServiceRequest::setApiVersion(const QString &version)
{
    Q_D(RDSDataServiceRequest);
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
bool RDSDataServiceRequest::operator==(const RDSDataServiceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid RDSDataService queue name.
 *
 * @par From RDSDataService FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid RDSDataService queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool RDSDataServiceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int RDSDataServiceRequest::clearParameter(const QString &name)
{
    Q_D(RDSDataServiceRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void RDSDataServiceRequest::clearParameters()
{
    Q_D(RDSDataServiceRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant RDSDataServiceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const RDSDataServiceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &RDSDataServiceRequest::parameters() const
{
    Q_D(const RDSDataServiceRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void RDSDataServiceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(RDSDataServiceRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void RDSDataServiceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(RDSDataServiceRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the RDSDataService request using the given
 * \a endpoint.
 *
 * This RDSDataService implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest RDSDataServiceRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const RDSDataServiceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::RDSDataService::RDSDataServiceRequestPrivate
 * \brief The RDSDataServiceRequestPrivate class provides private implementation for RDSDataServiceRequest.
 * \internal
 *
 * \inmodule QtAwsRDSDataService
 */

/*!
 * Constructs a RDSDataServiceRequestPrivate object for RDSDataService \a action,
 * with public implementation \a q.
 */
RDSDataServiceRequestPrivate::RDSDataServiceRequestPrivate(const RDSDataServiceRequest::Action action, RDSDataServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the RDSDataServiceRequest class's copy constructor.
 */
RDSDataServiceRequestPrivate::RDSDataServiceRequestPrivate(const RDSDataServiceRequestPrivate &other,
                                     RDSDataServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts RDSDataServiceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the RDSDataService service's Action
 * query parameters.
 */
QString RDSDataServiceRequestPrivate::toString(const RDSDataServiceRequest::Action &action)
{
    #define ActionToString(action) \
        case RDSDataServiceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace RDSDataService
} // namespace QtAws
