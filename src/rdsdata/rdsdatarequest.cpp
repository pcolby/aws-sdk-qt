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

#include "rdsdatarequest.h"
#include "rdsdatarequest_p.h"

namespace QtAws {
namespace RdsData {

/*!
 * \class QtAws::RdsData::RdsDataRequest
 * \brief The RdsDataRequest class provides an interface for RdsData requests.
 *
 * \inmodule QtAwsRdsData
 */

/*!
 * \enum RdsDataRequest::Action
 *
 * This enum describes the actions that can be performed as RdsData
 * requests.
 *
 * \value BatchExecuteStatementAction RdsData BatchExecuteStatement action.
 * \value BeginTransactionAction RdsData BeginTransaction action.
 * \value CommitTransactionAction RdsData CommitTransaction action.
 * \value ExecuteSqlAction RdsData ExecuteSql action.
 * \value ExecuteStatementAction RdsData ExecuteStatement action.
 * \value RollbackTransactionAction RdsData RollbackTransaction action.
 */

/*!
 * Constructs a RdsDataRequest object for RdsData \a action.
 */
RdsDataRequest::RdsDataRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new RdsDataRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
RdsDataRequest::RdsDataRequest(const RdsDataRequest &other)
    : QtAws::Core::AwsAbstractRequest(new RdsDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the RdsDataRequest object to be equal to \a other.
 */
RdsDataRequest& RdsDataRequest::operator=(const RdsDataRequest &other)
{
    Q_D(RdsDataRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa RdsDataRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RdsDataRequestPrivate.
 */
RdsDataRequest::RdsDataRequest(RdsDataRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the RdsData action to be performed by this request.
 */
RdsDataRequest::Action RdsDataRequest::action() const
{
    Q_D(const RdsDataRequest);
    return d->action;
}

/*!
 * Returns the name of the RdsData action to be performed by this request.
 */
QString RdsDataRequest::actionString() const
{
    return RdsDataRequestPrivate::toString(action());
}

/*!
 * Returns the RdsData API version implemented by this request.
 */
QString RdsDataRequest::apiVersion() const
{
    Q_D(const RdsDataRequest);
    return d->apiVersion;
}

/*!
 * Sets the RdsData action to be performed by this request to \a action.
 */
void RdsDataRequest::setAction(const Action action)
{
    Q_D(RdsDataRequest);
    d->action = action;
}

/*!
 * Sets the RdsData API version to include in this request to \a version.
 */
void RdsDataRequest::setApiVersion(const QString &version)
{
    Q_D(RdsDataRequest);
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
bool RdsDataRequest::operator==(const RdsDataRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid RdsData queue name.
 *
 * @par From RdsData FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid RdsData queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool RdsDataRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int RdsDataRequest::clearParameter(const QString &name)
{
    Q_D(RdsDataRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void RdsDataRequest::clearParameters()
{
    Q_D(RdsDataRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant RdsDataRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const RdsDataRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &RdsDataRequest::parameters() const
{
    Q_D(const RdsDataRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void RdsDataRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(RdsDataRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void RdsDataRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(RdsDataRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the RdsData request using the given
 * \a endpoint.
 *
 * This RdsData implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest RdsDataRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const RdsDataRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::RdsData::RdsDataRequestPrivate
 * \brief The RdsDataRequestPrivate class provides private implementation for RdsDataRequest.
 * \internal
 *
 * \inmodule QtAwsRdsData
 */

/*!
 * Constructs a RdsDataRequestPrivate object for RdsData \a action,
 * with public implementation \a q.
 */
RdsDataRequestPrivate::RdsDataRequestPrivate(const RdsDataRequest::Action action, RdsDataRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-08-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the RdsDataRequest class's copy constructor.
 */
RdsDataRequestPrivate::RdsDataRequestPrivate(const RdsDataRequestPrivate &other,
                                     RdsDataRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts RdsDataRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the RdsData service's Action
 * query parameters.
 */
QString RdsDataRequestPrivate::toString(const RdsDataRequest::Action &action)
{
    #define ActionToString(action) \
        case RdsDataRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(BatchExecuteStatement);
        ActionToString(BeginTransaction);
        ActionToString(CommitTransaction);
        ActionToString(ExecuteSql);
        ActionToString(ExecuteStatement);
        ActionToString(RollbackTransaction);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace RdsData
} // namespace QtAws
