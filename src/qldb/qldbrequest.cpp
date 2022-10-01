// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "qldbrequest.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::QldbRequest
 * \brief The QldbRequest class provides an interface for Qldb requests.
 *
 * \inmodule QtAwsQldb
 */

/*!
 * \enum QldbRequest::Action
 *
 * This enum describes the actions that can be performed as Qldb
 * requests.
 *
 * \value CancelJournalKinesisStreamAction Qldb CancelJournalKinesisStream action.
 * \value CreateLedgerAction Qldb CreateLedger action.
 * \value DeleteLedgerAction Qldb DeleteLedger action.
 * \value DescribeJournalKinesisStreamAction Qldb DescribeJournalKinesisStream action.
 * \value DescribeJournalS3ExportAction Qldb DescribeJournalS3Export action.
 * \value DescribeLedgerAction Qldb DescribeLedger action.
 * \value ExportJournalToS3Action Qldb ExportJournalToS3 action.
 * \value GetBlockAction Qldb GetBlock action.
 * \value GetDigestAction Qldb GetDigest action.
 * \value GetRevisionAction Qldb GetRevision action.
 * \value ListJournalKinesisStreamsForLedgerAction Qldb ListJournalKinesisStreamsForLedger action.
 * \value ListJournalS3ExportsAction Qldb ListJournalS3Exports action.
 * \value ListJournalS3ExportsForLedgerAction Qldb ListJournalS3ExportsForLedger action.
 * \value ListLedgersAction Qldb ListLedgers action.
 * \value ListTagsForResourceAction Qldb ListTagsForResource action.
 * \value StreamJournalToKinesisAction Qldb StreamJournalToKinesis action.
 * \value TagResourceAction Qldb TagResource action.
 * \value UntagResourceAction Qldb UntagResource action.
 * \value UpdateLedgerAction Qldb UpdateLedger action.
 * \value UpdateLedgerPermissionsModeAction Qldb UpdateLedgerPermissionsMode action.
 */

/*!
 * Constructs a QldbRequest object for Qldb \a action.
 */
QldbRequest::QldbRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new QldbRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
QldbRequest::QldbRequest(const QldbRequest &other)
    : QtAws::Core::AwsAbstractRequest(new QldbRequestPrivate(*other.d_func(), this))
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
QldbRequest::QldbRequest(QldbRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Qldb action to be performed by this request.
 */
QldbRequest::Action QldbRequest::action() const
{
    Q_D(const QldbRequest);
    return d->action;
}

/*!
 * Returns the name of the Qldb action to be performed by this request.
 */
QString QldbRequest::actionString() const
{
    return QldbRequestPrivate::toString(action());
}

/*!
 * Returns the Qldb API version implemented by this request.
 */
QString QldbRequest::apiVersion() const
{
    Q_D(const QldbRequest);
    return d->apiVersion;
}

/*!
 * Sets the Qldb action to be performed by this request to \a action.
 */
void QldbRequest::setAction(const Action action)
{
    Q_D(QldbRequest);
    d->action = action;
}

/*!
 * Sets the Qldb API version to include in this request to \a version.
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
 * Returns \c tue if \a queueName is a valid Qldb queue name.
 *
 * @par From Qldb FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Qldb queue name, \c false otherwise.
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
 * Returns a network request for the Qldb request using the given
 * \a endpoint.
 *
 * This Qldb implementation builds request URLs by combining the
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
 * \class QtAws::Qldb::QldbRequestPrivate
 * \brief The QldbRequestPrivate class provides private implementation for QldbRequest.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a QldbRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
QldbRequestPrivate::QldbRequestPrivate(const QldbRequest::Action action, QldbRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2019-01-02"))
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
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts QldbRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Qldb service's Action
 * query parameters.
 */
QString QldbRequestPrivate::toString(const QldbRequest::Action &action)
{
    #define ActionToString(action) \
        case QldbRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CancelJournalKinesisStream);
        ActionToString(CreateLedger);
        ActionToString(DeleteLedger);
        ActionToString(DescribeJournalKinesisStream);
        ActionToString(DescribeJournalS3Export);
        ActionToString(DescribeLedger);
        ActionToString(ExportJournalToS3);
        ActionToString(GetBlock);
        ActionToString(GetDigest);
        ActionToString(GetRevision);
        ActionToString(ListJournalKinesisStreamsForLedger);
        ActionToString(ListJournalS3Exports);
        ActionToString(ListJournalS3ExportsForLedger);
        ActionToString(ListLedgers);
        ActionToString(ListTagsForResource);
        ActionToString(StreamJournalToKinesis);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateLedger);
        ActionToString(UpdateLedgerPermissionsMode);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Qldb
} // namespace QtAws
