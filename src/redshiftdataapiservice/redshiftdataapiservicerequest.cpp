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

#include "redshiftdataapiservicerequest.h"
#include "redshiftdataapiservicerequest_p.h"

namespace QtAws {
namespace RedshiftDataAPIService {

/*!
 * \class QtAws::RedshiftDataAPIService::RedshiftDataAPIServiceRequest
 * \brief The RedshiftDataAPIServiceRequest class provides an interface for RedshiftDataAPIService requests.
 *
 * \inmodule QtAwsRedshiftDataAPIService
 */

/*!
 * \enum RedshiftDataAPIServiceRequest::Action
 *
 * This enum describes the actions that can be performed as RedshiftDataAPIService
 * requests.
 *
 * \value CancelStatementAction RedshiftDataAPIService CancelStatement action.
 * \value DescribeStatementAction RedshiftDataAPIService DescribeStatement action.
 * \value DescribeTableAction RedshiftDataAPIService DescribeTable action.
 * \value ExecuteStatementAction RedshiftDataAPIService ExecuteStatement action.
 * \value GetStatementResultAction RedshiftDataAPIService GetStatementResult action.
 * \value ListDatabasesAction RedshiftDataAPIService ListDatabases action.
 * \value ListSchemasAction RedshiftDataAPIService ListSchemas action.
 * \value ListStatementsAction RedshiftDataAPIService ListStatements action.
 * \value ListTablesAction RedshiftDataAPIService ListTables action.
 */

/*!
 * Constructs a RedshiftDataAPIServiceRequest object for RedshiftDataAPIService \a action.
 */
RedshiftDataAPIServiceRequest::RedshiftDataAPIServiceRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new RedshiftDataAPIServiceRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
RedshiftDataAPIServiceRequest::RedshiftDataAPIServiceRequest(const RedshiftDataAPIServiceRequest &other)
    : QtAws::Core::AwsAbstractRequest(new RedshiftDataAPIServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the RedshiftDataAPIServiceRequest object to be equal to \a other.
 */
RedshiftDataAPIServiceRequest& RedshiftDataAPIServiceRequest::operator=(const RedshiftDataAPIServiceRequest &other)
{
    Q_D(RedshiftDataAPIServiceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa RedshiftDataAPIServiceRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RedshiftDataAPIServiceRequestPrivate.
 */
RedshiftDataAPIServiceRequest::RedshiftDataAPIServiceRequest(RedshiftDataAPIServiceRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the RedshiftDataAPIService action to be performed by this request.
 */
RedshiftDataAPIServiceRequest::Action RedshiftDataAPIServiceRequest::action() const
{
    Q_D(const RedshiftDataAPIServiceRequest);
    return d->action;
}

/*!
 * Returns the name of the RedshiftDataAPIService action to be performed by this request.
 */
QString RedshiftDataAPIServiceRequest::actionString() const
{
    return RedshiftDataAPIServiceRequestPrivate::toString(action());
}

/*!
 * Returns the RedshiftDataAPIService API version implemented by this request.
 */
QString RedshiftDataAPIServiceRequest::apiVersion() const
{
    Q_D(const RedshiftDataAPIServiceRequest);
    return d->apiVersion;
}

/*!
 * Sets the RedshiftDataAPIService action to be performed by this request to \a action.
 */
void RedshiftDataAPIServiceRequest::setAction(const Action action)
{
    Q_D(RedshiftDataAPIServiceRequest);
    d->action = action;
}

/*!
 * Sets the RedshiftDataAPIService API version to include in this request to \a version.
 */
void RedshiftDataAPIServiceRequest::setApiVersion(const QString &version)
{
    Q_D(RedshiftDataAPIServiceRequest);
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
bool RedshiftDataAPIServiceRequest::operator==(const RedshiftDataAPIServiceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid RedshiftDataAPIService queue name.
 *
 * @par From RedshiftDataAPIService FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid RedshiftDataAPIService queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool RedshiftDataAPIServiceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int RedshiftDataAPIServiceRequest::clearParameter(const QString &name)
{
    Q_D(RedshiftDataAPIServiceRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void RedshiftDataAPIServiceRequest::clearParameters()
{
    Q_D(RedshiftDataAPIServiceRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant RedshiftDataAPIServiceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const RedshiftDataAPIServiceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &RedshiftDataAPIServiceRequest::parameters() const
{
    Q_D(const RedshiftDataAPIServiceRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void RedshiftDataAPIServiceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(RedshiftDataAPIServiceRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void RedshiftDataAPIServiceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(RedshiftDataAPIServiceRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the RedshiftDataAPIService request using the given
 * \a endpoint.
 *
 * This RedshiftDataAPIService implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest RedshiftDataAPIServiceRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const RedshiftDataAPIServiceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::RedshiftDataAPIService::RedshiftDataAPIServiceRequestPrivate
 * \brief The RedshiftDataAPIServiceRequestPrivate class provides private implementation for RedshiftDataAPIServiceRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftDataAPIService
 */

/*!
 * Constructs a RedshiftDataAPIServiceRequestPrivate object for RedshiftDataAPIService \a action,
 * with public implementation \a q.
 */
RedshiftDataAPIServiceRequestPrivate::RedshiftDataAPIServiceRequestPrivate(const RedshiftDataAPIServiceRequest::Action action, RedshiftDataAPIServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the RedshiftDataAPIServiceRequest class's copy constructor.
 */
RedshiftDataAPIServiceRequestPrivate::RedshiftDataAPIServiceRequestPrivate(const RedshiftDataAPIServiceRequestPrivate &other,
                                     RedshiftDataAPIServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts RedshiftDataAPIServiceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the RedshiftDataAPIService service's Action
 * query parameters.
 */
QString RedshiftDataAPIServiceRequestPrivate::toString(const RedshiftDataAPIServiceRequest::Action &action)
{
    #define ActionToString(action) \
        case RedshiftDataAPIServiceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CancelStatement);
        ActionToString(DescribeStatement);
        ActionToString(DescribeTable);
        ActionToString(ExecuteStatement);
        ActionToString(GetStatementResult);
        ActionToString(ListDatabases);
        ActionToString(ListSchemas);
        ActionToString(ListStatements);
        ActionToString(ListTables);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace RedshiftDataAPIService
} // namespace QtAws
