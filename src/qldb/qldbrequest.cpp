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

#include "qldbrequest.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace QLDB {

/*!
 * \class QtAws::QLDB::QldbRequest
 * \brief The QldbRequest class provides an interface for QLDB requests.
 *
 * \inmodule QtAwsQLDB
 */

/*!
 * \enum QldbRequest::Action
 *
 * This enum describes the actions that can be performed as QLDB
 * requests.
 *
 * \value CancelJournalKinesisStreamAction QLDB CancelJournalKinesisStream action.
 * \value CreateLedgerAction QLDB CreateLedger action.
 * \value DeleteLedgerAction QLDB DeleteLedger action.
 * \value DescribeJournalKinesisStreamAction QLDB DescribeJournalKinesisStream action.
 * \value DescribeJournalS3ExportAction QLDB DescribeJournalS3Export action.
 * \value DescribeLedgerAction QLDB DescribeLedger action.
 * \value ExportJournalToS3Action QLDB ExportJournalToS3 action.
 * \value GetBlockAction QLDB GetBlock action.
 * \value GetDigestAction QLDB GetDigest action.
 * \value GetRevisionAction QLDB GetRevision action.
 * \value ListJournalKinesisStreamsForLedgerAction QLDB ListJournalKinesisStreamsForLedger action.
 * \value ListJournalS3ExportsAction QLDB ListJournalS3Exports action.
 * \value ListJournalS3ExportsForLedgerAction QLDB ListJournalS3ExportsForLedger action.
 * \value ListLedgersAction QLDB ListLedgers action.
 * \value ListTagsForResourceAction QLDB ListTagsForResource action.
 * \value StreamJournalToKinesisAction QLDB StreamJournalToKinesis action.
 * \value TagResourceAction QLDB TagResource action.
 * \value UntagResourceAction QLDB UntagResource action.
 * \value UpdateLedgerAction QLDB UpdateLedger action.
 * \value UpdateLedgerPermissionsModeAction QLDB UpdateLedgerPermissionsMode action.
 */

/*!
 * Constructs a QldbRequest object for QLDB \a action.
 */
QldbRequest::QldbRequest(const Action action)
    : d_ptr(new QldbRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
QldbRequest::QldbRequest(const QldbRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new QldbRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the QldbRequest object to be equal to \a other.
 */
QldbRequest& QldbRequest::operator=(const QldbRequest &other)
{
    Q_D(QldbRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa QldbRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from QldbRequestPrivate.
 */
QldbRequest::QldbRequest(QldbRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the QLDB action to be performed by this request.
 */
QldbRequest::Action QldbRequest::action() const
{
    Q_D(const QldbRequest);
    return d->action;
}

/*!
 * Returns the name of the QLDB action to be performed by this request.
 */
QString QldbRequest::actionString() const
{
    return QldbRequestPrivate::toString(action());
}

/*!
 * Returns the QLDB API version implemented by this request.
 */
QString QldbRequest::apiVersion() const
{
    Q_D(const QldbRequest);
    return d->apiVersion;
}

/*!
 * Sets the QLDB action to be performed by this request to \a action.
 */
void QldbRequest::setAction(const Action action)
{
    Q_D(QldbRequest);
    d->action = action;
}

/*!
 * Sets the QLDB API version to include in this request to \a version.
 */
void QldbRequest::setApiVersion(const QString &version)
{
    Q_D(QldbRequest);
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
bool QldbRequest::operator==(const QldbRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid QLDB queue name.
 *
 * @par From QLDB FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid QLDB queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool QldbRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int QldbRequest::clearParameter(const QString &name)
{
    Q_D(QldbRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void QldbRequest::clearParameters()
{
    Q_D(QldbRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant QldbRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const QldbRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &QldbRequest::parameters() const
{
    Q_D(const QldbRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void QldbRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(QldbRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void QldbRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(QldbRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the QLDB request using the given
 * \a endpoint.
 *
 * This QLDB implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest QldbRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const QldbRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::QLDB::QldbRequestPrivate
 * \brief The QldbRequestPrivate class provides private implementation for QldbRequest.
 * \internal
 *
 * \inmodule QtAwsQLDB
 */

/*!
 * Constructs a QldbRequestPrivate object for QLDB \a action,
 * with public implementation \a q.
 */
QldbRequestPrivate::QldbRequestPrivate(const QldbRequest::Action action, QldbRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the QldbRequest class's copy constructor.
 */
QldbRequestPrivate::QldbRequestPrivate(const QldbRequestPrivate &other,
                                     QldbRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts QldbRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the QLDB service's Action
 * query parameters.
 */
QString QldbRequestPrivate::toString(const QldbRequest::Action &action)
{
    #define ActionToString(action) \
        case QldbRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace QLDB
} // namespace QtAws
