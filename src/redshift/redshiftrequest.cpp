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

#include "redshiftrequest.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/*!
 * \class QtAws::Redshift::RedshiftRequest
 * \brief The RedshiftRequest class provides an interface for Redshift requests.
 *
 * \inmodule QtAwsRedshift
 */

/*!
 * \enum RedshiftRequest::Action
 *
 * This enum describes the actions that can be performed as Redshift
 * requests.
 *
 * \value AcceptReservedNodeExchangeAction Redshift AcceptReservedNodeExchange action.
 * \value AddPartnerAction Redshift AddPartner action.
 * \value AssociateDataShareConsumerAction Redshift AssociateDataShareConsumer action.
 * \value AuthorizeClusterSecurityGroupIngressAction Redshift AuthorizeClusterSecurityGroupIngress action.
 * \value AuthorizeDataShareAction Redshift AuthorizeDataShare action.
 * \value AuthorizeEndpointAccessAction Redshift AuthorizeEndpointAccess action.
 * \value AuthorizeSnapshotAccessAction Redshift AuthorizeSnapshotAccess action.
 * \value BatchDeleteClusterSnapshotsAction Redshift BatchDeleteClusterSnapshots action.
 * \value BatchModifyClusterSnapshotsAction Redshift BatchModifyClusterSnapshots action.
 * \value CancelResizeAction Redshift CancelResize action.
 * \value CopyClusterSnapshotAction Redshift CopyClusterSnapshot action.
 * \value CreateAuthenticationProfileAction Redshift CreateAuthenticationProfile action.
 * \value CreateClusterAction Redshift CreateCluster action.
 * \value CreateClusterParameterGroupAction Redshift CreateClusterParameterGroup action.
 * \value CreateClusterSecurityGroupAction Redshift CreateClusterSecurityGroup action.
 * \value CreateClusterSnapshotAction Redshift CreateClusterSnapshot action.
 * \value CreateClusterSubnetGroupAction Redshift CreateClusterSubnetGroup action.
 * \value CreateEndpointAccessAction Redshift CreateEndpointAccess action.
 * \value CreateEventSubscriptionAction Redshift CreateEventSubscription action.
 * \value CreateHsmClientCertificateAction Redshift CreateHsmClientCertificate action.
 * \value CreateHsmConfigurationAction Redshift CreateHsmConfiguration action.
 * \value CreateScheduledActionAction Redshift CreateScheduledAction action.
 * \value CreateSnapshotCopyGrantAction Redshift CreateSnapshotCopyGrant action.
 * \value CreateSnapshotScheduleAction Redshift CreateSnapshotSchedule action.
 * \value CreateTagsAction Redshift CreateTags action.
 * \value CreateUsageLimitAction Redshift CreateUsageLimit action.
 * \value DeauthorizeDataShareAction Redshift DeauthorizeDataShare action.
 * \value DeleteAuthenticationProfileAction Redshift DeleteAuthenticationProfile action.
 * \value DeleteClusterAction Redshift DeleteCluster action.
 * \value DeleteClusterParameterGroupAction Redshift DeleteClusterParameterGroup action.
 * \value DeleteClusterSecurityGroupAction Redshift DeleteClusterSecurityGroup action.
 * \value DeleteClusterSnapshotAction Redshift DeleteClusterSnapshot action.
 * \value DeleteClusterSubnetGroupAction Redshift DeleteClusterSubnetGroup action.
 * \value DeleteEndpointAccessAction Redshift DeleteEndpointAccess action.
 * \value DeleteEventSubscriptionAction Redshift DeleteEventSubscription action.
 * \value DeleteHsmClientCertificateAction Redshift DeleteHsmClientCertificate action.
 * \value DeleteHsmConfigurationAction Redshift DeleteHsmConfiguration action.
 * \value DeletePartnerAction Redshift DeletePartner action.
 * \value DeleteScheduledActionAction Redshift DeleteScheduledAction action.
 * \value DeleteSnapshotCopyGrantAction Redshift DeleteSnapshotCopyGrant action.
 * \value DeleteSnapshotScheduleAction Redshift DeleteSnapshotSchedule action.
 * \value DeleteTagsAction Redshift DeleteTags action.
 * \value DeleteUsageLimitAction Redshift DeleteUsageLimit action.
 * \value DescribeAccountAttributesAction Redshift DescribeAccountAttributes action.
 * \value DescribeAuthenticationProfilesAction Redshift DescribeAuthenticationProfiles action.
 * \value DescribeClusterDbRevisionsAction Redshift DescribeClusterDbRevisions action.
 * \value DescribeClusterParameterGroupsAction Redshift DescribeClusterParameterGroups action.
 * \value DescribeClusterParametersAction Redshift DescribeClusterParameters action.
 * \value DescribeClusterSecurityGroupsAction Redshift DescribeClusterSecurityGroups action.
 * \value DescribeClusterSnapshotsAction Redshift DescribeClusterSnapshots action.
 * \value DescribeClusterSubnetGroupsAction Redshift DescribeClusterSubnetGroups action.
 * \value DescribeClusterTracksAction Redshift DescribeClusterTracks action.
 * \value DescribeClusterVersionsAction Redshift DescribeClusterVersions action.
 * \value DescribeClustersAction Redshift DescribeClusters action.
 * \value DescribeDataSharesAction Redshift DescribeDataShares action.
 * \value DescribeDataSharesForConsumerAction Redshift DescribeDataSharesForConsumer action.
 * \value DescribeDataSharesForProducerAction Redshift DescribeDataSharesForProducer action.
 * \value DescribeDefaultClusterParametersAction Redshift DescribeDefaultClusterParameters action.
 * \value DescribeEndpointAccessAction Redshift DescribeEndpointAccess action.
 * \value DescribeEndpointAuthorizationAction Redshift DescribeEndpointAuthorization action.
 * \value DescribeEventCategoriesAction Redshift DescribeEventCategories action.
 * \value DescribeEventSubscriptionsAction Redshift DescribeEventSubscriptions action.
 * \value DescribeEventsAction Redshift DescribeEvents action.
 * \value DescribeHsmClientCertificatesAction Redshift DescribeHsmClientCertificates action.
 * \value DescribeHsmConfigurationsAction Redshift DescribeHsmConfigurations action.
 * \value DescribeLoggingStatusAction Redshift DescribeLoggingStatus action.
 * \value DescribeNodeConfigurationOptionsAction Redshift DescribeNodeConfigurationOptions action.
 * \value DescribeOrderableClusterOptionsAction Redshift DescribeOrderableClusterOptions action.
 * \value DescribePartnersAction Redshift DescribePartners action.
 * \value DescribeReservedNodeExchangeStatusAction Redshift DescribeReservedNodeExchangeStatus action.
 * \value DescribeReservedNodeOfferingsAction Redshift DescribeReservedNodeOfferings action.
 * \value DescribeReservedNodesAction Redshift DescribeReservedNodes action.
 * \value DescribeResizeAction Redshift DescribeResize action.
 * \value DescribeScheduledActionsAction Redshift DescribeScheduledActions action.
 * \value DescribeSnapshotCopyGrantsAction Redshift DescribeSnapshotCopyGrants action.
 * \value DescribeSnapshotSchedulesAction Redshift DescribeSnapshotSchedules action.
 * \value DescribeStorageAction Redshift DescribeStorage action.
 * \value DescribeTableRestoreStatusAction Redshift DescribeTableRestoreStatus action.
 * \value DescribeTagsAction Redshift DescribeTags action.
 * \value DescribeUsageLimitsAction Redshift DescribeUsageLimits action.
 * \value DisableLoggingAction Redshift DisableLogging action.
 * \value DisableSnapshotCopyAction Redshift DisableSnapshotCopy action.
 * \value DisassociateDataShareConsumerAction Redshift DisassociateDataShareConsumer action.
 * \value EnableLoggingAction Redshift EnableLogging action.
 * \value EnableSnapshotCopyAction Redshift EnableSnapshotCopy action.
 * \value GetClusterCredentialsAction Redshift GetClusterCredentials action.
 * \value GetClusterCredentialsWithIAMAction Redshift GetClusterCredentialsWithIAM action.
 * \value GetReservedNodeExchangeConfigurationOptionsAction Redshift GetReservedNodeExchangeConfigurationOptions action.
 * \value GetReservedNodeExchangeOfferingsAction Redshift GetReservedNodeExchangeOfferings action.
 * \value ModifyAquaConfigurationAction Redshift ModifyAquaConfiguration action.
 * \value ModifyAuthenticationProfileAction Redshift ModifyAuthenticationProfile action.
 * \value ModifyClusterAction Redshift ModifyCluster action.
 * \value ModifyClusterDbRevisionAction Redshift ModifyClusterDbRevision action.
 * \value ModifyClusterIamRolesAction Redshift ModifyClusterIamRoles action.
 * \value ModifyClusterMaintenanceAction Redshift ModifyClusterMaintenance action.
 * \value ModifyClusterParameterGroupAction Redshift ModifyClusterParameterGroup action.
 * \value ModifyClusterSnapshotAction Redshift ModifyClusterSnapshot action.
 * \value ModifyClusterSnapshotScheduleAction Redshift ModifyClusterSnapshotSchedule action.
 * \value ModifyClusterSubnetGroupAction Redshift ModifyClusterSubnetGroup action.
 * \value ModifyEndpointAccessAction Redshift ModifyEndpointAccess action.
 * \value ModifyEventSubscriptionAction Redshift ModifyEventSubscription action.
 * \value ModifyScheduledActionAction Redshift ModifyScheduledAction action.
 * \value ModifySnapshotCopyRetentionPeriodAction Redshift ModifySnapshotCopyRetentionPeriod action.
 * \value ModifySnapshotScheduleAction Redshift ModifySnapshotSchedule action.
 * \value ModifyUsageLimitAction Redshift ModifyUsageLimit action.
 * \value PauseClusterAction Redshift PauseCluster action.
 * \value PurchaseReservedNodeOfferingAction Redshift PurchaseReservedNodeOffering action.
 * \value RebootClusterAction Redshift RebootCluster action.
 * \value RejectDataShareAction Redshift RejectDataShare action.
 * \value ResetClusterParameterGroupAction Redshift ResetClusterParameterGroup action.
 * \value ResizeClusterAction Redshift ResizeCluster action.
 * \value RestoreFromClusterSnapshotAction Redshift RestoreFromClusterSnapshot action.
 * \value RestoreTableFromClusterSnapshotAction Redshift RestoreTableFromClusterSnapshot action.
 * \value ResumeClusterAction Redshift ResumeCluster action.
 * \value RevokeClusterSecurityGroupIngressAction Redshift RevokeClusterSecurityGroupIngress action.
 * \value RevokeEndpointAccessAction Redshift RevokeEndpointAccess action.
 * \value RevokeSnapshotAccessAction Redshift RevokeSnapshotAccess action.
 * \value RotateEncryptionKeyAction Redshift RotateEncryptionKey action.
 * \value UpdatePartnerStatusAction Redshift UpdatePartnerStatus action.
 */

/*!
 * Constructs a RedshiftRequest object for Redshift \a action.
 */
RedshiftRequest::RedshiftRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new RedshiftRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
RedshiftRequest::RedshiftRequest(const RedshiftRequest &other)
    : QtAws::Core::AwsAbstractRequest(new RedshiftRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the RedshiftRequest object to be equal to \a other.
 */
RedshiftRequest& RedshiftRequest::operator=(const RedshiftRequest &other)
{
    Q_D(RedshiftRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa RedshiftRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RedshiftRequestPrivate.
 */
RedshiftRequest::RedshiftRequest(RedshiftRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Redshift action to be performed by this request.
 */
RedshiftRequest::Action RedshiftRequest::action() const
{
    Q_D(const RedshiftRequest);
    return d->action;
}

/*!
 * Returns the name of the Redshift action to be performed by this request.
 */
QString RedshiftRequest::actionString() const
{
    return RedshiftRequestPrivate::toString(action());
}

/*!
 * Returns the Redshift API version implemented by this request.
 */
QString RedshiftRequest::apiVersion() const
{
    Q_D(const RedshiftRequest);
    return d->apiVersion;
}

/*!
 * Sets the Redshift action to be performed by this request to \a action.
 */
void RedshiftRequest::setAction(const Action action)
{
    Q_D(RedshiftRequest);
    d->action = action;
}

/*!
 * Sets the Redshift API version to include in this request to \a version.
 */
void RedshiftRequest::setApiVersion(const QString &version)
{
    Q_D(RedshiftRequest);
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
bool RedshiftRequest::operator==(const RedshiftRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Redshift queue name.
 *
 * @par From Redshift FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Redshift queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool RedshiftRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int RedshiftRequest::clearParameter(const QString &name)
{
    Q_D(RedshiftRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void RedshiftRequest::clearParameters()
{
    Q_D(RedshiftRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant RedshiftRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const RedshiftRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &RedshiftRequest::parameters() const
{
    Q_D(const RedshiftRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void RedshiftRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(RedshiftRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void RedshiftRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(RedshiftRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Redshift request using the given
 * \a endpoint.
 *
 * This Redshift implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest RedshiftRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const RedshiftRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Redshift::RedshiftRequestPrivate
 * \brief The RedshiftRequestPrivate class provides private implementation for RedshiftRequest.
 * \internal
 *
 * \inmodule QtAwsRedshift
 */

/*!
 * Constructs a RedshiftRequestPrivate object for Redshift \a action,
 * with public implementation \a q.
 */
RedshiftRequestPrivate::RedshiftRequestPrivate(const RedshiftRequest::Action action, RedshiftRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-12-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the RedshiftRequest class's copy constructor.
 */
RedshiftRequestPrivate::RedshiftRequestPrivate(const RedshiftRequestPrivate &other,
                                     RedshiftRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts RedshiftRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Redshift service's Action
 * query parameters.
 */
QString RedshiftRequestPrivate::toString(const RedshiftRequest::Action &action)
{
    #define ActionToString(action) \
        case RedshiftRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AcceptReservedNodeExchange);
        ActionToString(AddPartner);
        ActionToString(AssociateDataShareConsumer);
        ActionToString(AuthorizeClusterSecurityGroupIngress);
        ActionToString(AuthorizeDataShare);
        ActionToString(AuthorizeEndpointAccess);
        ActionToString(AuthorizeSnapshotAccess);
        ActionToString(BatchDeleteClusterSnapshots);
        ActionToString(BatchModifyClusterSnapshots);
        ActionToString(CancelResize);
        ActionToString(CopyClusterSnapshot);
        ActionToString(CreateAuthenticationProfile);
        ActionToString(CreateCluster);
        ActionToString(CreateClusterParameterGroup);
        ActionToString(CreateClusterSecurityGroup);
        ActionToString(CreateClusterSnapshot);
        ActionToString(CreateClusterSubnetGroup);
        ActionToString(CreateEndpointAccess);
        ActionToString(CreateEventSubscription);
        ActionToString(CreateHsmClientCertificate);
        ActionToString(CreateHsmConfiguration);
        ActionToString(CreateScheduledAction);
        ActionToString(CreateSnapshotCopyGrant);
        ActionToString(CreateSnapshotSchedule);
        ActionToString(CreateTags);
        ActionToString(CreateUsageLimit);
        ActionToString(DeauthorizeDataShare);
        ActionToString(DeleteAuthenticationProfile);
        ActionToString(DeleteCluster);
        ActionToString(DeleteClusterParameterGroup);
        ActionToString(DeleteClusterSecurityGroup);
        ActionToString(DeleteClusterSnapshot);
        ActionToString(DeleteClusterSubnetGroup);
        ActionToString(DeleteEndpointAccess);
        ActionToString(DeleteEventSubscription);
        ActionToString(DeleteHsmClientCertificate);
        ActionToString(DeleteHsmConfiguration);
        ActionToString(DeletePartner);
        ActionToString(DeleteScheduledAction);
        ActionToString(DeleteSnapshotCopyGrant);
        ActionToString(DeleteSnapshotSchedule);
        ActionToString(DeleteTags);
        ActionToString(DeleteUsageLimit);
        ActionToString(DescribeAccountAttributes);
        ActionToString(DescribeAuthenticationProfiles);
        ActionToString(DescribeClusterDbRevisions);
        ActionToString(DescribeClusterParameterGroups);
        ActionToString(DescribeClusterParameters);
        ActionToString(DescribeClusterSecurityGroups);
        ActionToString(DescribeClusterSnapshots);
        ActionToString(DescribeClusterSubnetGroups);
        ActionToString(DescribeClusterTracks);
        ActionToString(DescribeClusterVersions);
        ActionToString(DescribeClusters);
        ActionToString(DescribeDataShares);
        ActionToString(DescribeDataSharesForConsumer);
        ActionToString(DescribeDataSharesForProducer);
        ActionToString(DescribeDefaultClusterParameters);
        ActionToString(DescribeEndpointAccess);
        ActionToString(DescribeEndpointAuthorization);
        ActionToString(DescribeEventCategories);
        ActionToString(DescribeEventSubscriptions);
        ActionToString(DescribeEvents);
        ActionToString(DescribeHsmClientCertificates);
        ActionToString(DescribeHsmConfigurations);
        ActionToString(DescribeLoggingStatus);
        ActionToString(DescribeNodeConfigurationOptions);
        ActionToString(DescribeOrderableClusterOptions);
        ActionToString(DescribePartners);
        ActionToString(DescribeReservedNodeExchangeStatus);
        ActionToString(DescribeReservedNodeOfferings);
        ActionToString(DescribeReservedNodes);
        ActionToString(DescribeResize);
        ActionToString(DescribeScheduledActions);
        ActionToString(DescribeSnapshotCopyGrants);
        ActionToString(DescribeSnapshotSchedules);
        ActionToString(DescribeStorage);
        ActionToString(DescribeTableRestoreStatus);
        ActionToString(DescribeTags);
        ActionToString(DescribeUsageLimits);
        ActionToString(DisableLogging);
        ActionToString(DisableSnapshotCopy);
        ActionToString(DisassociateDataShareConsumer);
        ActionToString(EnableLogging);
        ActionToString(EnableSnapshotCopy);
        ActionToString(GetClusterCredentials);
        ActionToString(GetClusterCredentialsWithIAM);
        ActionToString(GetReservedNodeExchangeConfigurationOptions);
        ActionToString(GetReservedNodeExchangeOfferings);
        ActionToString(ModifyAquaConfiguration);
        ActionToString(ModifyAuthenticationProfile);
        ActionToString(ModifyCluster);
        ActionToString(ModifyClusterDbRevision);
        ActionToString(ModifyClusterIamRoles);
        ActionToString(ModifyClusterMaintenance);
        ActionToString(ModifyClusterParameterGroup);
        ActionToString(ModifyClusterSnapshot);
        ActionToString(ModifyClusterSnapshotSchedule);
        ActionToString(ModifyClusterSubnetGroup);
        ActionToString(ModifyEndpointAccess);
        ActionToString(ModifyEventSubscription);
        ActionToString(ModifyScheduledAction);
        ActionToString(ModifySnapshotCopyRetentionPeriod);
        ActionToString(ModifySnapshotSchedule);
        ActionToString(ModifyUsageLimit);
        ActionToString(PauseCluster);
        ActionToString(PurchaseReservedNodeOffering);
        ActionToString(RebootCluster);
        ActionToString(RejectDataShare);
        ActionToString(ResetClusterParameterGroup);
        ActionToString(ResizeCluster);
        ActionToString(RestoreFromClusterSnapshot);
        ActionToString(RestoreTableFromClusterSnapshot);
        ActionToString(ResumeCluster);
        ActionToString(RevokeClusterSecurityGroupIngress);
        ActionToString(RevokeEndpointAccess);
        ActionToString(RevokeSnapshotAccess);
        ActionToString(RotateEncryptionKey);
        ActionToString(UpdatePartnerStatus);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Redshift
} // namespace QtAws
