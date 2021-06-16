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

#include "kinesisrequest.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::KinesisRequest
 * \brief The KinesisRequest class provides an interface for Kinesis requests.
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * \enum KinesisRequest::Action
 *
 * This enum describes the actions that can be performed as Kinesis
 * requests.
 *
 * \value AddTagsToStreamAction Kinesis AddTagsToStream action.
 * \value CreateStreamAction Kinesis CreateStream action.
 * \value DecreaseStreamRetentionPeriodAction Kinesis DecreaseStreamRetentionPeriod action.
 * \value DeleteStreamAction Kinesis DeleteStream action.
 * \value DeregisterStreamConsumerAction Kinesis DeregisterStreamConsumer action.
 * \value DescribeLimitsAction Kinesis DescribeLimits action.
 * \value DescribeStreamAction Kinesis DescribeStream action.
 * \value DescribeStreamConsumerAction Kinesis DescribeStreamConsumer action.
 * \value DescribeStreamSummaryAction Kinesis DescribeStreamSummary action.
 * \value DisableEnhancedMonitoringAction Kinesis DisableEnhancedMonitoring action.
 * \value EnableEnhancedMonitoringAction Kinesis EnableEnhancedMonitoring action.
 * \value GetRecordsAction Kinesis GetRecords action.
 * \value GetShardIteratorAction Kinesis GetShardIterator action.
 * \value IncreaseStreamRetentionPeriodAction Kinesis IncreaseStreamRetentionPeriod action.
 * \value ListShardsAction Kinesis ListShards action.
 * \value ListStreamConsumersAction Kinesis ListStreamConsumers action.
 * \value ListStreamsAction Kinesis ListStreams action.
 * \value ListTagsForStreamAction Kinesis ListTagsForStream action.
 * \value MergeShardsAction Kinesis MergeShards action.
 * \value PutRecordAction Kinesis PutRecord action.
 * \value PutRecordsAction Kinesis PutRecords action.
 * \value RegisterStreamConsumerAction Kinesis RegisterStreamConsumer action.
 * \value RemoveTagsFromStreamAction Kinesis RemoveTagsFromStream action.
 * \value SplitShardAction Kinesis SplitShard action.
 * \value StartStreamEncryptionAction Kinesis StartStreamEncryption action.
 * \value StopStreamEncryptionAction Kinesis StopStreamEncryption action.
 * \value SubscribeToShardAction Kinesis SubscribeToShard action.
 * \value UpdateShardCountAction Kinesis UpdateShardCount action.
 */

/*!
 * Constructs a KinesisRequest object for Kinesis \a action.
 */
KinesisRequest::KinesisRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new KinesisRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
KinesisRequest::KinesisRequest(const KinesisRequest &other)
    : QtAws::Core::AwsAbstractRequest(new KinesisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the KinesisRequest object to be equal to \a other.
 */
KinesisRequest& KinesisRequest::operator=(const KinesisRequest &other)
{
    Q_D(KinesisRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa KinesisRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KinesisRequestPrivate.
 */
KinesisRequest::KinesisRequest(KinesisRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Kinesis action to be performed by this request.
 */
KinesisRequest::Action KinesisRequest::action() const
{
    Q_D(const KinesisRequest);
    return d->action;
}

/*!
 * Returns the name of the Kinesis action to be performed by this request.
 */
QString KinesisRequest::actionString() const
{
    return KinesisRequestPrivate::toString(action());
}

/*!
 * Returns the Kinesis API version implemented by this request.
 */
QString KinesisRequest::apiVersion() const
{
    Q_D(const KinesisRequest);
    return d->apiVersion;
}

/*!
 * Sets the Kinesis action to be performed by this request to \a action.
 */
void KinesisRequest::setAction(const Action action)
{
    Q_D(KinesisRequest);
    d->action = action;
}

/*!
 * Sets the Kinesis API version to include in this request to \a version.
 */
void KinesisRequest::setApiVersion(const QString &version)
{
    Q_D(KinesisRequest);
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
bool KinesisRequest::operator==(const KinesisRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Kinesis queue name.
 *
 * @par From Kinesis FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Kinesis queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool KinesisRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int KinesisRequest::clearParameter(const QString &name)
{
    Q_D(KinesisRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void KinesisRequest::clearParameters()
{
    Q_D(KinesisRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant KinesisRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const KinesisRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &KinesisRequest::parameters() const
{
    Q_D(const KinesisRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void KinesisRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(KinesisRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void KinesisRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(KinesisRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Kinesis request using the given
 * \a endpoint.
 *
 * This Kinesis implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest KinesisRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const KinesisRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Kinesis::KinesisRequestPrivate
 * \brief The KinesisRequestPrivate class provides private implementation for KinesisRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a KinesisRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
KinesisRequestPrivate::KinesisRequestPrivate(const KinesisRequest::Action action, KinesisRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the KinesisRequest class's copy constructor.
 */
KinesisRequestPrivate::KinesisRequestPrivate(const KinesisRequestPrivate &other,
                                     KinesisRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts KinesisRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Kinesis service's Action
 * query parameters.
 */
QString KinesisRequestPrivate::toString(const KinesisRequest::Action &action)
{
    #define ActionToString(action) \
        case KinesisRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Kinesis
} // namespace QtAws
