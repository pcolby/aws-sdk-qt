/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "lightsailrequest.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::LightsailRequest
 * \brief The LightsailRequest class provides an interface for Lightsail requests.
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * \enum LightsailRequest::Action
 *
 * This enum describes the actions that can be performed as Lightsail
 * requests.
 *
 * \value AllocateStaticIpAction Lightsail AllocateStaticIp action.
 * \value AttachDiskAction Lightsail AttachDisk action.
 * \value AttachInstancesToLoadBalancerAction Lightsail AttachInstancesToLoadBalancer action.
 * \value AttachLoadBalancerTlsCertificateAction Lightsail AttachLoadBalancerTlsCertificate action.
 * \value AttachStaticIpAction Lightsail AttachStaticIp action.
 * \value CloseInstancePublicPortsAction Lightsail CloseInstancePublicPorts action.
 * \value CreateDiskAction Lightsail CreateDisk action.
 * \value CreateDiskFromSnapshotAction Lightsail CreateDiskFromSnapshot action.
 * \value CreateDiskSnapshotAction Lightsail CreateDiskSnapshot action.
 * \value CreateDomainAction Lightsail CreateDomain action.
 * \value CreateDomainEntryAction Lightsail CreateDomainEntry action.
 * \value CreateInstanceSnapshotAction Lightsail CreateInstanceSnapshot action.
 * \value CreateInstancesAction Lightsail CreateInstances action.
 * \value CreateInstancesFromSnapshotAction Lightsail CreateInstancesFromSnapshot action.
 * \value CreateKeyPairAction Lightsail CreateKeyPair action.
 * \value CreateLoadBalancerAction Lightsail CreateLoadBalancer action.
 * \value CreateLoadBalancerTlsCertificateAction Lightsail CreateLoadBalancerTlsCertificate action.
 * \value DeleteDiskAction Lightsail DeleteDisk action.
 * \value DeleteDiskSnapshotAction Lightsail DeleteDiskSnapshot action.
 * \value DeleteDomainAction Lightsail DeleteDomain action.
 * \value DeleteDomainEntryAction Lightsail DeleteDomainEntry action.
 * \value DeleteInstanceAction Lightsail DeleteInstance action.
 * \value DeleteInstanceSnapshotAction Lightsail DeleteInstanceSnapshot action.
 * \value DeleteKeyPairAction Lightsail DeleteKeyPair action.
 * \value DeleteLoadBalancerAction Lightsail DeleteLoadBalancer action.
 * \value DeleteLoadBalancerTlsCertificateAction Lightsail DeleteLoadBalancerTlsCertificate action.
 * \value DetachDiskAction Lightsail DetachDisk action.
 * \value DetachInstancesFromLoadBalancerAction Lightsail DetachInstancesFromLoadBalancer action.
 * \value DetachStaticIpAction Lightsail DetachStaticIp action.
 * \value DownloadDefaultKeyPairAction Lightsail DownloadDefaultKeyPair action.
 * \value GetActiveNamesAction Lightsail GetActiveNames action.
 * \value GetBlueprintsAction Lightsail GetBlueprints action.
 * \value GetBundlesAction Lightsail GetBundles action.
 * \value GetDiskAction Lightsail GetDisk action.
 * \value GetDiskSnapshotAction Lightsail GetDiskSnapshot action.
 * \value GetDiskSnapshotsAction Lightsail GetDiskSnapshots action.
 * \value GetDisksAction Lightsail GetDisks action.
 * \value GetDomainAction Lightsail GetDomain action.
 * \value GetDomainsAction Lightsail GetDomains action.
 * \value GetInstanceAction Lightsail GetInstance action.
 * \value GetInstanceAccessDetailsAction Lightsail GetInstanceAccessDetails action.
 * \value GetInstanceMetricDataAction Lightsail GetInstanceMetricData action.
 * \value GetInstancePortStatesAction Lightsail GetInstancePortStates action.
 * \value GetInstanceSnapshotAction Lightsail GetInstanceSnapshot action.
 * \value GetInstanceSnapshotsAction Lightsail GetInstanceSnapshots action.
 * \value GetInstanceStateAction Lightsail GetInstanceState action.
 * \value GetInstancesAction Lightsail GetInstances action.
 * \value GetKeyPairAction Lightsail GetKeyPair action.
 * \value GetKeyPairsAction Lightsail GetKeyPairs action.
 * \value GetLoadBalancerAction Lightsail GetLoadBalancer action.
 * \value GetLoadBalancerMetricDataAction Lightsail GetLoadBalancerMetricData action.
 * \value GetLoadBalancerTlsCertificatesAction Lightsail GetLoadBalancerTlsCertificates action.
 * \value GetLoadBalancersAction Lightsail GetLoadBalancers action.
 * \value GetOperationAction Lightsail GetOperation action.
 * \value GetOperationsAction Lightsail GetOperations action.
 * \value GetOperationsForResourceAction Lightsail GetOperationsForResource action.
 * \value GetRegionsAction Lightsail GetRegions action.
 * \value GetStaticIpAction Lightsail GetStaticIp action.
 * \value GetStaticIpsAction Lightsail GetStaticIps action.
 * \value ImportKeyPairAction Lightsail ImportKeyPair action.
 * \value IsVpcPeeredAction Lightsail IsVpcPeered action.
 * \value OpenInstancePublicPortsAction Lightsail OpenInstancePublicPorts action.
 * \value PeerVpcAction Lightsail PeerVpc action.
 * \value PutInstancePublicPortsAction Lightsail PutInstancePublicPorts action.
 * \value RebootInstanceAction Lightsail RebootInstance action.
 * \value ReleaseStaticIpAction Lightsail ReleaseStaticIp action.
 * \value StartInstanceAction Lightsail StartInstance action.
 * \value StopInstanceAction Lightsail StopInstance action.
 * \value UnpeerVpcAction Lightsail UnpeerVpc action.
 * \value UpdateDomainEntryAction Lightsail UpdateDomainEntry action.
 * \value UpdateLoadBalancerAttributeAction Lightsail UpdateLoadBalancerAttribute action.
 */

/*!
 * Constructs a[n] LightsailRequest object for Lightsail \a action.
 */
LightsailRequest::LightsailRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new LightsailRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
LightsailRequest::LightsailRequest(const LightsailRequest &other)
    : QtAws::Core::AwsAbstractRequest(new LightsailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the LightsailRequest object to be equal to \a other.
 */
LightsailRequest& LightsailRequest::operator=(const LightsailRequest &other)
{
    Q_D(LightsailRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa LightsailRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LightsailRequestPrivate.
 */
LightsailRequest::LightsailRequest(LightsailRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Lightsail action to be performed by this request.
 */
LightsailRequest::Action LightsailRequest::action() const
{
    Q_D(const LightsailRequest);
    return d->action;
}

/*!
 * Returns the name of the Lightsail action to be performed by this request.
 */
QString LightsailRequest::actionString() const
{
    return LightsailRequestPrivate::toString(action());
}

/*!
 * Returns the Lightsail API version implemented by this request.
 */
QString LightsailRequest::apiVersion() const
{
    Q_D(const LightsailRequest);
    return d->apiVersion;
}

/*!
 * Sets the Lightsail action to be performed by this request to \a action.
 */
void LightsailRequest::setAction(const Action action)
{
    Q_D(LightsailRequest);
    d->action = action;
}

/*!
 * Sets the Lightsail API version to include in this request to \a version.
 */
void LightsailRequest::setApiVersion(const QString &version)
{
    Q_D(LightsailRequest);
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
bool LightsailRequest::operator==(const LightsailRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Lightsail queue name.
 *
 * @par From Lightsail FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Lightsail queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool LightsailRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int LightsailRequest::clearParameter(const QString &name)
{
    Q_D(LightsailRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void LightsailRequest::clearParameters()
{
    Q_D(LightsailRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant LightsailRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const LightsailRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &LightsailRequest::parameters() const
{
    Q_D(const LightsailRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void LightsailRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(LightsailRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void LightsailRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(LightsailRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Lightsail request using the given
 * \a endpoint.
 *
 * This Lightsail implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest LightsailRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const LightsailRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Lightsail::LightsailRequestPrivate
 * \brief The LightsailRequestPrivate class provides private implementation for LightsailRequest.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a LightsailRequestPrivate object for Lightsail \a action with,
 * public implementation \a q.
 */
LightsailRequestPrivate::LightsailRequestPrivate(const LightsailRequest::Action action, LightsailRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the LightsailRequest class's copy constructor.
 */
LightsailRequestPrivate::LightsailRequestPrivate(const LightsailRequestPrivate &other,
                                     LightsailRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts LightsailRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Lightsail service's Action
 * query parameters.
 */
QString LightsailRequestPrivate::toString(const LightsailRequest::Action &action)
{
    #define ActionToString(action) \
        case LightsailRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Lightsail
} // namespace QtAws
