// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "timestreamwriterequest.h"
#include "timestreamwriterequest_p.h"

namespace QtAws {
namespace TimestreamWrite {

/*!
 * \class QtAws::TimestreamWrite::TimestreamWriteRequest
 * \brief The TimestreamWriteRequest class provides an interface for TimestreamWrite requests.
 *
 * \inmodule QtAwsTimestreamWrite
 */

/*!
 * \enum TimestreamWriteRequest::Action
 *
 * This enum describes the actions that can be performed as TimestreamWrite
 * requests.
 *
 * \value CreateDatabaseAction TimestreamWrite CreateDatabase action.
 * \value CreateTableAction TimestreamWrite CreateTable action.
 * \value DeleteDatabaseAction TimestreamWrite DeleteDatabase action.
 * \value DeleteTableAction TimestreamWrite DeleteTable action.
 * \value DescribeDatabaseAction TimestreamWrite DescribeDatabase action.
 * \value DescribeEndpointsAction TimestreamWrite DescribeEndpoints action.
 * \value DescribeTableAction TimestreamWrite DescribeTable action.
 * \value ListDatabasesAction TimestreamWrite ListDatabases action.
 * \value ListTablesAction TimestreamWrite ListTables action.
 * \value ListTagsForResourceAction TimestreamWrite ListTagsForResource action.
 * \value TagResourceAction TimestreamWrite TagResource action.
 * \value UntagResourceAction TimestreamWrite UntagResource action.
 * \value UpdateDatabaseAction TimestreamWrite UpdateDatabase action.
 * \value UpdateTableAction TimestreamWrite UpdateTable action.
 * \value WriteRecordsAction TimestreamWrite WriteRecords action.
 */

/*!
 * Constructs a TimestreamWriteRequest object for TimestreamWrite \a action.
 */
TimestreamWriteRequest::TimestreamWriteRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new TimestreamWriteRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
TimestreamWriteRequest::TimestreamWriteRequest(const TimestreamWriteRequest &other)
    : QtAws::Core::AwsAbstractRequest(new TimestreamWriteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the TimestreamWriteRequest object to be equal to \a other.
 */
TimestreamWriteRequest& TimestreamWriteRequest::operator=(const TimestreamWriteRequest &other)
{
    Q_D(TimestreamWriteRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa TimestreamWriteRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from TimestreamWriteRequestPrivate.
 */
TimestreamWriteRequest::TimestreamWriteRequest(TimestreamWriteRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the TimestreamWrite action to be performed by this request.
 */
TimestreamWriteRequest::Action TimestreamWriteRequest::action() const
{
    Q_D(const TimestreamWriteRequest);
    return d->action;
}

/*!
 * Returns the name of the TimestreamWrite action to be performed by this request.
 */
QString TimestreamWriteRequest::actionString() const
{
    return TimestreamWriteRequestPrivate::toString(action());
}

/*!
 * Returns the TimestreamWrite API version implemented by this request.
 */
QString TimestreamWriteRequest::apiVersion() const
{
    Q_D(const TimestreamWriteRequest);
    return d->apiVersion;
}

/*!
 * Sets the TimestreamWrite action to be performed by this request to \a action.
 */
void TimestreamWriteRequest::setAction(const Action action)
{
    Q_D(TimestreamWriteRequest);
    d->action = action;
}

/*!
 * Sets the TimestreamWrite API version to include in this request to \a version.
 */
void TimestreamWriteRequest::setApiVersion(const QString &version)
{
    Q_D(TimestreamWriteRequest);
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
bool TimestreamWriteRequest::operator==(const TimestreamWriteRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid TimestreamWrite queue name.
 *
 * @par From TimestreamWrite FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid TimestreamWrite queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool TimestreamWriteRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int TimestreamWriteRequest::clearParameter(const QString &name)
{
    Q_D(TimestreamWriteRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void TimestreamWriteRequest::clearParameters()
{
    Q_D(TimestreamWriteRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant TimestreamWriteRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const TimestreamWriteRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &TimestreamWriteRequest::parameters() const
{
    Q_D(const TimestreamWriteRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void TimestreamWriteRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(TimestreamWriteRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void TimestreamWriteRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(TimestreamWriteRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the TimestreamWrite request using the given
 * \a endpoint.
 *
 * This TimestreamWrite implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest TimestreamWriteRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const TimestreamWriteRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::TimestreamWrite::TimestreamWriteRequestPrivate
 * \brief The TimestreamWriteRequestPrivate class provides private implementation for TimestreamWriteRequest.
 * \internal
 *
 * \inmodule QtAwsTimestreamWrite
 */

/*!
 * Constructs a TimestreamWriteRequestPrivate object for TimestreamWrite \a action,
 * with public implementation \a q.
 */
TimestreamWriteRequestPrivate::TimestreamWriteRequestPrivate(const TimestreamWriteRequest::Action action, TimestreamWriteRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-11-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the TimestreamWriteRequest class's copy constructor.
 */
TimestreamWriteRequestPrivate::TimestreamWriteRequestPrivate(const TimestreamWriteRequestPrivate &other,
                                     TimestreamWriteRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts TimestreamWriteRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the TimestreamWrite service's Action
 * query parameters.
 */
QString TimestreamWriteRequestPrivate::toString(const TimestreamWriteRequest::Action &action)
{
    #define ActionToString(action) \
        case TimestreamWriteRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateDatabase);
        ActionToString(CreateTable);
        ActionToString(DeleteDatabase);
        ActionToString(DeleteTable);
        ActionToString(DescribeDatabase);
        ActionToString(DescribeEndpoints);
        ActionToString(DescribeTable);
        ActionToString(ListDatabases);
        ActionToString(ListTables);
        ActionToString(ListTagsForResource);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateDatabase);
        ActionToString(UpdateTable);
        ActionToString(WriteRecords);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace TimestreamWrite
} // namespace QtAws
