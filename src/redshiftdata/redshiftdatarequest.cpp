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

#include "redshiftdatarequest.h"
#include "redshiftdatarequest_p.h"

namespace QtAws {
namespace RedshiftData {

/*!
 * \class QtAws::RedshiftData::RedshiftDataRequest
 * \brief The RedshiftDataRequest class provides an interface for RedshiftData requests.
 *
 * \inmodule QtAwsRedshiftData
 */

/*!
 * \enum RedshiftDataRequest::Action
 *
 * This enum describes the actions that can be performed as RedshiftData
 * requests.
 *
 * \value BatchExecuteStatementAction RedshiftData BatchExecuteStatement action.
 * \value CancelStatementAction RedshiftData CancelStatement action.
 * \value DescribeStatementAction RedshiftData DescribeStatement action.
 * \value DescribeTableAction RedshiftData DescribeTable action.
 * \value ExecuteStatementAction RedshiftData ExecuteStatement action.
 * \value GetStatementResultAction RedshiftData GetStatementResult action.
 * \value ListDatabasesAction RedshiftData ListDatabases action.
 * \value ListSchemasAction RedshiftData ListSchemas action.
 * \value ListStatementsAction RedshiftData ListStatements action.
 * \value ListTablesAction RedshiftData ListTables action.
 */

/*!
 * Constructs a RedshiftDataRequest object for RedshiftData \a action.
 */
RedshiftDataRequest::RedshiftDataRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new RedshiftDataRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
RedshiftDataRequest::RedshiftDataRequest(const RedshiftDataRequest &other)
    : QtAws::Core::AwsAbstractRequest(new RedshiftDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the RedshiftDataRequest object to be equal to \a other.
 */
RedshiftDataRequest& RedshiftDataRequest::operator=(const RedshiftDataRequest &other)
{
    Q_D(RedshiftDataRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa RedshiftDataRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RedshiftDataRequestPrivate.
 */
RedshiftDataRequest::RedshiftDataRequest(RedshiftDataRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the RedshiftData action to be performed by this request.
 */
RedshiftDataRequest::Action RedshiftDataRequest::action() const
{
    Q_D(const RedshiftDataRequest);
    return d->action;
}

/*!
 * Returns the name of the RedshiftData action to be performed by this request.
 */
QString RedshiftDataRequest::actionString() const
{
    return RedshiftDataRequestPrivate::toString(action());
}

/*!
 * Returns the RedshiftData API version implemented by this request.
 */
QString RedshiftDataRequest::apiVersion() const
{
    Q_D(const RedshiftDataRequest);
    return d->apiVersion;
}

/*!
 * Sets the RedshiftData action to be performed by this request to \a action.
 */
void RedshiftDataRequest::setAction(const Action action)
{
    Q_D(RedshiftDataRequest);
    d->action = action;
}

/*!
 * Sets the RedshiftData API version to include in this request to \a version.
 */
void RedshiftDataRequest::setApiVersion(const QString &version)
{
    Q_D(RedshiftDataRequest);
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
bool RedshiftDataRequest::operator==(const RedshiftDataRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid RedshiftData queue name.
 *
 * @par From RedshiftData FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid RedshiftData queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool RedshiftDataRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int RedshiftDataRequest::clearParameter(const QString &name)
{
    Q_D(RedshiftDataRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void RedshiftDataRequest::clearParameters()
{
    Q_D(RedshiftDataRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant RedshiftDataRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const RedshiftDataRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &RedshiftDataRequest::parameters() const
{
    Q_D(const RedshiftDataRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void RedshiftDataRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(RedshiftDataRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void RedshiftDataRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(RedshiftDataRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the RedshiftData request using the given
 * \a endpoint.
 *
 * This RedshiftData implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest RedshiftDataRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const RedshiftDataRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::RedshiftData::RedshiftDataRequestPrivate
 * \brief The RedshiftDataRequestPrivate class provides private implementation for RedshiftDataRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftData
 */

/*!
 * Constructs a RedshiftDataRequestPrivate object for RedshiftData \a action,
 * with public implementation \a q.
 */
RedshiftDataRequestPrivate::RedshiftDataRequestPrivate(const RedshiftDataRequest::Action action, RedshiftDataRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2019-12-20"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the RedshiftDataRequest class's copy constructor.
 */
RedshiftDataRequestPrivate::RedshiftDataRequestPrivate(const RedshiftDataRequestPrivate &other,
                                     RedshiftDataRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts RedshiftDataRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the RedshiftData service's Action
 * query parameters.
 */
QString RedshiftDataRequestPrivate::toString(const RedshiftDataRequest::Action &action)
{
    #define ActionToString(action) \
        case RedshiftDataRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(BatchExecuteStatement);
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

} // namespace RedshiftData
} // namespace QtAws
