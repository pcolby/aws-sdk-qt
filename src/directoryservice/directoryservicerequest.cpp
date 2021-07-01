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

#include "directoryservicerequest.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::DirectoryServiceRequest
 * \brief The DirectoryServiceRequest class provides an interface for DirectoryService requests.
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * \enum DirectoryServiceRequest::Action
 *
 * This enum describes the actions that can be performed as DirectoryService
 * requests.
 *
 * \value AcceptSharedDirectoryAction DirectoryService AcceptSharedDirectory action.
 * \value AddIpRoutesAction DirectoryService AddIpRoutes action.
 * \value AddRegionAction DirectoryService AddRegion action.
 * \value AddTagsToResourceAction DirectoryService AddTagsToResource action.
 * \value CancelSchemaExtensionAction DirectoryService CancelSchemaExtension action.
 * \value ConnectDirectoryAction DirectoryService ConnectDirectory action.
 * \value CreateAliasAction DirectoryService CreateAlias action.
 * \value CreateComputerAction DirectoryService CreateComputer action.
 * \value CreateConditionalForwarderAction DirectoryService CreateConditionalForwarder action.
 * \value CreateDirectoryAction DirectoryService CreateDirectory action.
 * \value CreateLogSubscriptionAction DirectoryService CreateLogSubscription action.
 * \value CreateMicrosoftADAction DirectoryService CreateMicrosoftAD action.
 * \value CreateSnapshotAction DirectoryService CreateSnapshot action.
 * \value CreateTrustAction DirectoryService CreateTrust action.
 * \value DeleteConditionalForwarderAction DirectoryService DeleteConditionalForwarder action.
 * \value DeleteDirectoryAction DirectoryService DeleteDirectory action.
 * \value DeleteLogSubscriptionAction DirectoryService DeleteLogSubscription action.
 * \value DeleteSnapshotAction DirectoryService DeleteSnapshot action.
 * \value DeleteTrustAction DirectoryService DeleteTrust action.
 * \value DeregisterCertificateAction DirectoryService DeregisterCertificate action.
 * \value DeregisterEventTopicAction DirectoryService DeregisterEventTopic action.
 * \value DescribeCertificateAction DirectoryService DescribeCertificate action.
 * \value DescribeConditionalForwardersAction DirectoryService DescribeConditionalForwarders action.
 * \value DescribeDirectoriesAction DirectoryService DescribeDirectories action.
 * \value DescribeDomainControllersAction DirectoryService DescribeDomainControllers action.
 * \value DescribeEventTopicsAction DirectoryService DescribeEventTopics action.
 * \value DescribeLDAPSSettingsAction DirectoryService DescribeLDAPSSettings action.
 * \value DescribeRegionsAction DirectoryService DescribeRegions action.
 * \value DescribeSharedDirectoriesAction DirectoryService DescribeSharedDirectories action.
 * \value DescribeSnapshotsAction DirectoryService DescribeSnapshots action.
 * \value DescribeTrustsAction DirectoryService DescribeTrusts action.
 * \value DisableClientAuthenticationAction DirectoryService DisableClientAuthentication action.
 * \value DisableLDAPSAction DirectoryService DisableLDAPS action.
 * \value DisableRadiusAction DirectoryService DisableRadius action.
 * \value DisableSsoAction DirectoryService DisableSso action.
 * \value EnableClientAuthenticationAction DirectoryService EnableClientAuthentication action.
 * \value EnableLDAPSAction DirectoryService EnableLDAPS action.
 * \value EnableRadiusAction DirectoryService EnableRadius action.
 * \value EnableSsoAction DirectoryService EnableSso action.
 * \value GetDirectoryLimitsAction DirectoryService GetDirectoryLimits action.
 * \value GetSnapshotLimitsAction DirectoryService GetSnapshotLimits action.
 * \value ListCertificatesAction DirectoryService ListCertificates action.
 * \value ListIpRoutesAction DirectoryService ListIpRoutes action.
 * \value ListLogSubscriptionsAction DirectoryService ListLogSubscriptions action.
 * \value ListSchemaExtensionsAction DirectoryService ListSchemaExtensions action.
 * \value ListTagsForResourceAction DirectoryService ListTagsForResource action.
 * \value RegisterCertificateAction DirectoryService RegisterCertificate action.
 * \value RegisterEventTopicAction DirectoryService RegisterEventTopic action.
 * \value RejectSharedDirectoryAction DirectoryService RejectSharedDirectory action.
 * \value RemoveIpRoutesAction DirectoryService RemoveIpRoutes action.
 * \value RemoveRegionAction DirectoryService RemoveRegion action.
 * \value RemoveTagsFromResourceAction DirectoryService RemoveTagsFromResource action.
 * \value ResetUserPasswordAction DirectoryService ResetUserPassword action.
 * \value RestoreFromSnapshotAction DirectoryService RestoreFromSnapshot action.
 * \value ShareDirectoryAction DirectoryService ShareDirectory action.
 * \value StartSchemaExtensionAction DirectoryService StartSchemaExtension action.
 * \value UnshareDirectoryAction DirectoryService UnshareDirectory action.
 * \value UpdateConditionalForwarderAction DirectoryService UpdateConditionalForwarder action.
 * \value UpdateNumberOfDomainControllersAction DirectoryService UpdateNumberOfDomainControllers action.
 * \value UpdateRadiusAction DirectoryService UpdateRadius action.
 * \value UpdateTrustAction DirectoryService UpdateTrust action.
 * \value VerifyTrustAction DirectoryService VerifyTrust action.
 */

/*!
 * Constructs a DirectoryServiceRequest object for DirectoryService \a action.
 */
DirectoryServiceRequest::DirectoryServiceRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new DirectoryServiceRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
DirectoryServiceRequest::DirectoryServiceRequest(const DirectoryServiceRequest &other)
    : QtAws::Core::AwsAbstractRequest(new DirectoryServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the DirectoryServiceRequest object to be equal to \a other.
 */
DirectoryServiceRequest& DirectoryServiceRequest::operator=(const DirectoryServiceRequest &other)
{
    Q_D(DirectoryServiceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa DirectoryServiceRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DirectoryServiceRequestPrivate.
 */
DirectoryServiceRequest::DirectoryServiceRequest(DirectoryServiceRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the DirectoryService action to be performed by this request.
 */
DirectoryServiceRequest::Action DirectoryServiceRequest::action() const
{
    Q_D(const DirectoryServiceRequest);
    return d->action;
}

/*!
 * Returns the name of the DirectoryService action to be performed by this request.
 */
QString DirectoryServiceRequest::actionString() const
{
    return DirectoryServiceRequestPrivate::toString(action());
}

/*!
 * Returns the DirectoryService API version implemented by this request.
 */
QString DirectoryServiceRequest::apiVersion() const
{
    Q_D(const DirectoryServiceRequest);
    return d->apiVersion;
}

/*!
 * Sets the DirectoryService action to be performed by this request to \a action.
 */
void DirectoryServiceRequest::setAction(const Action action)
{
    Q_D(DirectoryServiceRequest);
    d->action = action;
}

/*!
 * Sets the DirectoryService API version to include in this request to \a version.
 */
void DirectoryServiceRequest::setApiVersion(const QString &version)
{
    Q_D(DirectoryServiceRequest);
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
bool DirectoryServiceRequest::operator==(const DirectoryServiceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid DirectoryService queue name.
 *
 * @par From DirectoryService FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid DirectoryService queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool DirectoryServiceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int DirectoryServiceRequest::clearParameter(const QString &name)
{
    Q_D(DirectoryServiceRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void DirectoryServiceRequest::clearParameters()
{
    Q_D(DirectoryServiceRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant DirectoryServiceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const DirectoryServiceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &DirectoryServiceRequest::parameters() const
{
    Q_D(const DirectoryServiceRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void DirectoryServiceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(DirectoryServiceRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void DirectoryServiceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(DirectoryServiceRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the DirectoryService request using the given
 * \a endpoint.
 *
 * This DirectoryService implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest DirectoryServiceRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const DirectoryServiceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::DirectoryService::DirectoryServiceRequestPrivate
 * \brief The DirectoryServiceRequestPrivate class provides private implementation for DirectoryServiceRequest.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a DirectoryServiceRequestPrivate object for DirectoryService \a action,
 * with public implementation \a q.
 */
DirectoryServiceRequestPrivate::DirectoryServiceRequestPrivate(const DirectoryServiceRequest::Action action, DirectoryServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the DirectoryServiceRequest class's copy constructor.
 */
DirectoryServiceRequestPrivate::DirectoryServiceRequestPrivate(const DirectoryServiceRequestPrivate &other,
                                     DirectoryServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts DirectoryServiceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the DirectoryService service's Action
 * query parameters.
 */
QString DirectoryServiceRequestPrivate::toString(const DirectoryServiceRequest::Action &action)
{
    #define ActionToString(action) \
        case DirectoryServiceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AcceptSharedDirectory);
        ActionToString(AddIpRoutes);
        ActionToString(AddRegion);
        ActionToString(AddTagsToResource);
        ActionToString(CancelSchemaExtension);
        ActionToString(ConnectDirectory);
        ActionToString(CreateAlias);
        ActionToString(CreateComputer);
        ActionToString(CreateConditionalForwarder);
        ActionToString(CreateDirectory);
        ActionToString(CreateLogSubscription);
        ActionToString(CreateMicrosoftAD);
        ActionToString(CreateSnapshot);
        ActionToString(CreateTrust);
        ActionToString(DeleteConditionalForwarder);
        ActionToString(DeleteDirectory);
        ActionToString(DeleteLogSubscription);
        ActionToString(DeleteSnapshot);
        ActionToString(DeleteTrust);
        ActionToString(DeregisterCertificate);
        ActionToString(DeregisterEventTopic);
        ActionToString(DescribeCertificate);
        ActionToString(DescribeConditionalForwarders);
        ActionToString(DescribeDirectories);
        ActionToString(DescribeDomainControllers);
        ActionToString(DescribeEventTopics);
        ActionToString(DescribeLDAPSSettings);
        ActionToString(DescribeRegions);
        ActionToString(DescribeSharedDirectories);
        ActionToString(DescribeSnapshots);
        ActionToString(DescribeTrusts);
        ActionToString(DisableClientAuthentication);
        ActionToString(DisableLDAPS);
        ActionToString(DisableRadius);
        ActionToString(DisableSso);
        ActionToString(EnableClientAuthentication);
        ActionToString(EnableLDAPS);
        ActionToString(EnableRadius);
        ActionToString(EnableSso);
        ActionToString(GetDirectoryLimits);
        ActionToString(GetSnapshotLimits);
        ActionToString(ListCertificates);
        ActionToString(ListIpRoutes);
        ActionToString(ListLogSubscriptions);
        ActionToString(ListSchemaExtensions);
        ActionToString(ListTagsForResource);
        ActionToString(RegisterCertificate);
        ActionToString(RegisterEventTopic);
        ActionToString(RejectSharedDirectory);
        ActionToString(RemoveIpRoutes);
        ActionToString(RemoveRegion);
        ActionToString(RemoveTagsFromResource);
        ActionToString(ResetUserPassword);
        ActionToString(RestoreFromSnapshot);
        ActionToString(ShareDirectory);
        ActionToString(StartSchemaExtension);
        ActionToString(UnshareDirectory);
        ActionToString(UpdateConditionalForwarder);
        ActionToString(UpdateNumberOfDomainControllers);
        ActionToString(UpdateRadius);
        ActionToString(UpdateTrust);
        ActionToString(VerifyTrust);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace DirectoryService
} // namespace QtAws
