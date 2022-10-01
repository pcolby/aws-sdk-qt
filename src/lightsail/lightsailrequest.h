// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LIGHTSAILREQUEST_H
#define QTAWS_LIGHTSAILREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawslightsailglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Lightsail {

class LightsailRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT LightsailRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Lightsail.
    enum Action {
        AllocateStaticIpAction,
        AttachCertificateToDistributionAction,
        AttachDiskAction,
        AttachInstancesToLoadBalancerAction,
        AttachLoadBalancerTlsCertificateAction,
        AttachStaticIpAction,
        CloseInstancePublicPortsAction,
        CopySnapshotAction,
        CreateBucketAction,
        CreateBucketAccessKeyAction,
        CreateCertificateAction,
        CreateCloudFormationStackAction,
        CreateContactMethodAction,
        CreateContainerServiceAction,
        CreateContainerServiceDeploymentAction,
        CreateContainerServiceRegistryLoginAction,
        CreateDiskAction,
        CreateDiskFromSnapshotAction,
        CreateDiskSnapshotAction,
        CreateDistributionAction,
        CreateDomainAction,
        CreateDomainEntryAction,
        CreateInstanceSnapshotAction,
        CreateInstancesAction,
        CreateInstancesFromSnapshotAction,
        CreateKeyPairAction,
        CreateLoadBalancerAction,
        CreateLoadBalancerTlsCertificateAction,
        CreateRelationalDatabaseAction,
        CreateRelationalDatabaseFromSnapshotAction,
        CreateRelationalDatabaseSnapshotAction,
        DeleteAlarmAction,
        DeleteAutoSnapshotAction,
        DeleteBucketAction,
        DeleteBucketAccessKeyAction,
        DeleteCertificateAction,
        DeleteContactMethodAction,
        DeleteContainerImageAction,
        DeleteContainerServiceAction,
        DeleteDiskAction,
        DeleteDiskSnapshotAction,
        DeleteDistributionAction,
        DeleteDomainAction,
        DeleteDomainEntryAction,
        DeleteInstanceAction,
        DeleteInstanceSnapshotAction,
        DeleteKeyPairAction,
        DeleteKnownHostKeysAction,
        DeleteLoadBalancerAction,
        DeleteLoadBalancerTlsCertificateAction,
        DeleteRelationalDatabaseAction,
        DeleteRelationalDatabaseSnapshotAction,
        DetachCertificateFromDistributionAction,
        DetachDiskAction,
        DetachInstancesFromLoadBalancerAction,
        DetachStaticIpAction,
        DisableAddOnAction,
        DownloadDefaultKeyPairAction,
        EnableAddOnAction,
        ExportSnapshotAction,
        GetActiveNamesAction,
        GetAlarmsAction,
        GetAutoSnapshotsAction,
        GetBlueprintsAction,
        GetBucketAccessKeysAction,
        GetBucketBundlesAction,
        GetBucketMetricDataAction,
        GetBucketsAction,
        GetBundlesAction,
        GetCertificatesAction,
        GetCloudFormationStackRecordsAction,
        GetContactMethodsAction,
        GetContainerAPIMetadataAction,
        GetContainerImagesAction,
        GetContainerLogAction,
        GetContainerServiceDeploymentsAction,
        GetContainerServiceMetricDataAction,
        GetContainerServicePowersAction,
        GetContainerServicesAction,
        GetDiskAction,
        GetDiskSnapshotAction,
        GetDiskSnapshotsAction,
        GetDisksAction,
        GetDistributionBundlesAction,
        GetDistributionLatestCacheResetAction,
        GetDistributionMetricDataAction,
        GetDistributionsAction,
        GetDomainAction,
        GetDomainsAction,
        GetExportSnapshotRecordsAction,
        GetInstanceAction,
        GetInstanceAccessDetailsAction,
        GetInstanceMetricDataAction,
        GetInstancePortStatesAction,
        GetInstanceSnapshotAction,
        GetInstanceSnapshotsAction,
        GetInstanceStateAction,
        GetInstancesAction,
        GetKeyPairAction,
        GetKeyPairsAction,
        GetLoadBalancerAction,
        GetLoadBalancerMetricDataAction,
        GetLoadBalancerTlsCertificatesAction,
        GetLoadBalancerTlsPoliciesAction,
        GetLoadBalancersAction,
        GetOperationAction,
        GetOperationsAction,
        GetOperationsForResourceAction,
        GetRegionsAction,
        GetRelationalDatabaseAction,
        GetRelationalDatabaseBlueprintsAction,
        GetRelationalDatabaseBundlesAction,
        GetRelationalDatabaseEventsAction,
        GetRelationalDatabaseLogEventsAction,
        GetRelationalDatabaseLogStreamsAction,
        GetRelationalDatabaseMasterUserPasswordAction,
        GetRelationalDatabaseMetricDataAction,
        GetRelationalDatabaseParametersAction,
        GetRelationalDatabaseSnapshotAction,
        GetRelationalDatabaseSnapshotsAction,
        GetRelationalDatabasesAction,
        GetStaticIpAction,
        GetStaticIpsAction,
        ImportKeyPairAction,
        IsVpcPeeredAction,
        OpenInstancePublicPortsAction,
        PeerVpcAction,
        PutAlarmAction,
        PutInstancePublicPortsAction,
        RebootInstanceAction,
        RebootRelationalDatabaseAction,
        RegisterContainerImageAction,
        ReleaseStaticIpAction,
        ResetDistributionCacheAction,
        SendContactMethodVerificationAction,
        SetIpAddressTypeAction,
        SetResourceAccessForBucketAction,
        StartInstanceAction,
        StartRelationalDatabaseAction,
        StopInstanceAction,
        StopRelationalDatabaseAction,
        TagResourceAction,
        TestAlarmAction,
        UnpeerVpcAction,
        UntagResourceAction,
        UpdateBucketAction,
        UpdateBucketBundleAction,
        UpdateContainerServiceAction,
        UpdateDistributionAction,
        UpdateDistributionBundleAction,
        UpdateDomainEntryAction,
        UpdateLoadBalancerAttributeAction,
        UpdateRelationalDatabaseAction,
        UpdateRelationalDatabaseParametersAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    LightsailRequest(const Action action);
    LightsailRequest(const LightsailRequest &other);
    LightsailRequest &operator=(const LightsailRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const LightsailRequest &other) const;


protected:
    /// @cond internal
    explicit LightsailRequest(LightsailRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LightsailRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
