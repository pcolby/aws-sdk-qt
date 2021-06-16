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

#include "kafkarequest.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::KafkaRequest
 * \brief The KafkaRequest class provides an interface for Kafka requests.
 *
 * \inmodule QtAwsKafka
 */

/*!
 * \enum KafkaRequest::Action
 *
 * This enum describes the actions that can be performed as Kafka
 * requests.
 *
 * \value CreateClusterAction Kafka CreateCluster action.
 * \value CreateConfigurationAction Kafka CreateConfiguration action.
 * \value DeleteClusterAction Kafka DeleteCluster action.
 * \value DescribeClusterAction Kafka DescribeCluster action.
 * \value DescribeClusterOperationAction Kafka DescribeClusterOperation action.
 * \value DescribeConfigurationAction Kafka DescribeConfiguration action.
 * \value DescribeConfigurationRevisionAction Kafka DescribeConfigurationRevision action.
 * \value GetBootstrapBrokersAction Kafka GetBootstrapBrokers action.
 * \value ListClusterOperationsAction Kafka ListClusterOperations action.
 * \value ListClustersAction Kafka ListClusters action.
 * \value ListConfigurationRevisionsAction Kafka ListConfigurationRevisions action.
 * \value ListConfigurationsAction Kafka ListConfigurations action.
 * \value ListNodesAction Kafka ListNodes action.
 * \value ListTagsForResourceAction Kafka ListTagsForResource action.
 * \value TagResourceAction Kafka TagResource action.
 * \value UntagResourceAction Kafka UntagResource action.
 * \value UpdateBrokerStorageAction Kafka UpdateBrokerStorage action.
 * \value UpdateClusterConfigurationAction Kafka UpdateClusterConfiguration action.
 */

/*!
 * Constructs a KafkaRequest object for Kafka \a action.
 */
KafkaRequest::KafkaRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new KafkaRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
KafkaRequest::KafkaRequest(const KafkaRequest &other)
    : QtAws::Core::AwsAbstractRequest(new KafkaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the KafkaRequest object to be equal to \a other.
 */
KafkaRequest& KafkaRequest::operator=(const KafkaRequest &other)
{
    Q_D(KafkaRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa KafkaRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KafkaRequestPrivate.
 */
KafkaRequest::KafkaRequest(KafkaRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Kafka action to be performed by this request.
 */
KafkaRequest::Action KafkaRequest::action() const
{
    Q_D(const KafkaRequest);
    return d->action;
}

/*!
 * Returns the name of the Kafka action to be performed by this request.
 */
QString KafkaRequest::actionString() const
{
    return KafkaRequestPrivate::toString(action());
}

/*!
 * Returns the Kafka API version implemented by this request.
 */
QString KafkaRequest::apiVersion() const
{
    Q_D(const KafkaRequest);
    return d->apiVersion;
}

/*!
 * Sets the Kafka action to be performed by this request to \a action.
 */
void KafkaRequest::setAction(const Action action)
{
    Q_D(KafkaRequest);
    d->action = action;
}

/*!
 * Sets the Kafka API version to include in this request to \a version.
 */
void KafkaRequest::setApiVersion(const QString &version)
{
    Q_D(KafkaRequest);
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
bool KafkaRequest::operator==(const KafkaRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Kafka queue name.
 *
 * @par From Kafka FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Kafka queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool KafkaRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int KafkaRequest::clearParameter(const QString &name)
{
    Q_D(KafkaRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void KafkaRequest::clearParameters()
{
    Q_D(KafkaRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant KafkaRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const KafkaRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &KafkaRequest::parameters() const
{
    Q_D(const KafkaRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void KafkaRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(KafkaRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void KafkaRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(KafkaRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Kafka request using the given
 * \a endpoint.
 *
 * This Kafka implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest KafkaRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const KafkaRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Kafka::KafkaRequestPrivate
 * \brief The KafkaRequestPrivate class provides private implementation for KafkaRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a KafkaRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
KafkaRequestPrivate::KafkaRequestPrivate(const KafkaRequest::Action action, KafkaRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the KafkaRequest class's copy constructor.
 */
KafkaRequestPrivate::KafkaRequestPrivate(const KafkaRequestPrivate &other,
                                     KafkaRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts KafkaRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Kafka service's Action
 * query parameters.
 */
QString KafkaRequestPrivate::toString(const KafkaRequest::Action &action)
{
    #define ActionToString(action) \
        case KafkaRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Kafka
} // namespace QtAws
