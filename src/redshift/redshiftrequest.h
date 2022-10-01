// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDSHIFTREQUEST_H
#define QTAWS_REDSHIFTREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsredshiftglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Redshift {

class RedshiftRequestPrivate;

class QTAWSREDSHIFT_EXPORT RedshiftRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Redshift.
    enum Action {
        AcceptReservedNodeExchangeAction,
        AddPartnerAction,
        AssociateDataShareConsumerAction,
        AuthorizeClusterSecurityGroupIngressAction,
        AuthorizeDataShareAction,
        AuthorizeEndpointAccessAction,
        AuthorizeSnapshotAccessAction,
        BatchDeleteClusterSnapshotsAction,
        BatchModifyClusterSnapshotsAction,
        CancelResizeAction,
        CopyClusterSnapshotAction,
        CreateAuthenticationProfileAction,
        CreateClusterAction,
        CreateClusterParameterGroupAction,
        CreateClusterSecurityGroupAction,
        CreateClusterSnapshotAction,
        CreateClusterSubnetGroupAction,
        CreateEndpointAccessAction,
        CreateEventSubscriptionAction,
        CreateHsmClientCertificateAction,
        CreateHsmConfigurationAction,
        CreateScheduledActionAction,
        CreateSnapshotCopyGrantAction,
        CreateSnapshotScheduleAction,
        CreateTagsAction,
        CreateUsageLimitAction,
        DeauthorizeDataShareAction,
        DeleteAuthenticationProfileAction,
        DeleteClusterAction,
        DeleteClusterParameterGroupAction,
        DeleteClusterSecurityGroupAction,
        DeleteClusterSnapshotAction,
        DeleteClusterSubnetGroupAction,
        DeleteEndpointAccessAction,
        DeleteEventSubscriptionAction,
        DeleteHsmClientCertificateAction,
        DeleteHsmConfigurationAction,
        DeletePartnerAction,
        DeleteScheduledActionAction,
        DeleteSnapshotCopyGrantAction,
        DeleteSnapshotScheduleAction,
        DeleteTagsAction,
        DeleteUsageLimitAction,
        DescribeAccountAttributesAction,
        DescribeAuthenticationProfilesAction,
        DescribeClusterDbRevisionsAction,
        DescribeClusterParameterGroupsAction,
        DescribeClusterParametersAction,
        DescribeClusterSecurityGroupsAction,
        DescribeClusterSnapshotsAction,
        DescribeClusterSubnetGroupsAction,
        DescribeClusterTracksAction,
        DescribeClusterVersionsAction,
        DescribeClustersAction,
        DescribeDataSharesAction,
        DescribeDataSharesForConsumerAction,
        DescribeDataSharesForProducerAction,
        DescribeDefaultClusterParametersAction,
        DescribeEndpointAccessAction,
        DescribeEndpointAuthorizationAction,
        DescribeEventCategoriesAction,
        DescribeEventSubscriptionsAction,
        DescribeEventsAction,
        DescribeHsmClientCertificatesAction,
        DescribeHsmConfigurationsAction,
        DescribeLoggingStatusAction,
        DescribeNodeConfigurationOptionsAction,
        DescribeOrderableClusterOptionsAction,
        DescribePartnersAction,
        DescribeReservedNodeExchangeStatusAction,
        DescribeReservedNodeOfferingsAction,
        DescribeReservedNodesAction,
        DescribeResizeAction,
        DescribeScheduledActionsAction,
        DescribeSnapshotCopyGrantsAction,
        DescribeSnapshotSchedulesAction,
        DescribeStorageAction,
        DescribeTableRestoreStatusAction,
        DescribeTagsAction,
        DescribeUsageLimitsAction,
        DisableLoggingAction,
        DisableSnapshotCopyAction,
        DisassociateDataShareConsumerAction,
        EnableLoggingAction,
        EnableSnapshotCopyAction,
        GetClusterCredentialsAction,
        GetClusterCredentialsWithIAMAction,
        GetReservedNodeExchangeConfigurationOptionsAction,
        GetReservedNodeExchangeOfferingsAction,
        ModifyAquaConfigurationAction,
        ModifyAuthenticationProfileAction,
        ModifyClusterAction,
        ModifyClusterDbRevisionAction,
        ModifyClusterIamRolesAction,
        ModifyClusterMaintenanceAction,
        ModifyClusterParameterGroupAction,
        ModifyClusterSnapshotAction,
        ModifyClusterSnapshotScheduleAction,
        ModifyClusterSubnetGroupAction,
        ModifyEndpointAccessAction,
        ModifyEventSubscriptionAction,
        ModifyScheduledActionAction,
        ModifySnapshotCopyRetentionPeriodAction,
        ModifySnapshotScheduleAction,
        ModifyUsageLimitAction,
        PauseClusterAction,
        PurchaseReservedNodeOfferingAction,
        RebootClusterAction,
        RejectDataShareAction,
        ResetClusterParameterGroupAction,
        ResizeClusterAction,
        RestoreFromClusterSnapshotAction,
        RestoreTableFromClusterSnapshotAction,
        ResumeClusterAction,
        RevokeClusterSecurityGroupIngressAction,
        RevokeEndpointAccessAction,
        RevokeSnapshotAccessAction,
        RotateEncryptionKeyAction,
        UpdatePartnerStatusAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    RedshiftRequest(const Action action);
    RedshiftRequest(const RedshiftRequest &other);
    RedshiftRequest &operator=(const RedshiftRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const RedshiftRequest &other) const;


protected:
    /// @cond internal
    explicit RedshiftRequest(RedshiftRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RedshiftRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
