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
        StartInstanceAction,
        StartRelationalDatabaseAction,
        StopInstanceAction,
        StopRelationalDatabaseAction,
        TagResourceAction,
        TestAlarmAction,
        UnpeerVpcAction,
        UntagResourceAction,
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
