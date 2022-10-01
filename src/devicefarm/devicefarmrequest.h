// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEVICEFARMREQUEST_H
#define QTAWS_DEVICEFARMREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsdevicefarmglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace DeviceFarm {

class DeviceFarmRequestPrivate;

class QTAWSDEVICEFARM_EXPORT DeviceFarmRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by DeviceFarm.
    enum Action {
        CreateDevicePoolAction,
        CreateInstanceProfileAction,
        CreateNetworkProfileAction,
        CreateProjectAction,
        CreateRemoteAccessSessionAction,
        CreateTestGridProjectAction,
        CreateTestGridUrlAction,
        CreateUploadAction,
        CreateVPCEConfigurationAction,
        DeleteDevicePoolAction,
        DeleteInstanceProfileAction,
        DeleteNetworkProfileAction,
        DeleteProjectAction,
        DeleteRemoteAccessSessionAction,
        DeleteRunAction,
        DeleteTestGridProjectAction,
        DeleteUploadAction,
        DeleteVPCEConfigurationAction,
        GetAccountSettingsAction,
        GetDeviceAction,
        GetDeviceInstanceAction,
        GetDevicePoolAction,
        GetDevicePoolCompatibilityAction,
        GetInstanceProfileAction,
        GetJobAction,
        GetNetworkProfileAction,
        GetOfferingStatusAction,
        GetProjectAction,
        GetRemoteAccessSessionAction,
        GetRunAction,
        GetSuiteAction,
        GetTestAction,
        GetTestGridProjectAction,
        GetTestGridSessionAction,
        GetUploadAction,
        GetVPCEConfigurationAction,
        InstallToRemoteAccessSessionAction,
        ListArtifactsAction,
        ListDeviceInstancesAction,
        ListDevicePoolsAction,
        ListDevicesAction,
        ListInstanceProfilesAction,
        ListJobsAction,
        ListNetworkProfilesAction,
        ListOfferingPromotionsAction,
        ListOfferingTransactionsAction,
        ListOfferingsAction,
        ListProjectsAction,
        ListRemoteAccessSessionsAction,
        ListRunsAction,
        ListSamplesAction,
        ListSuitesAction,
        ListTagsForResourceAction,
        ListTestGridProjectsAction,
        ListTestGridSessionActionsAction,
        ListTestGridSessionArtifactsAction,
        ListTestGridSessionsAction,
        ListTestsAction,
        ListUniqueProblemsAction,
        ListUploadsAction,
        ListVPCEConfigurationsAction,
        PurchaseOfferingAction,
        RenewOfferingAction,
        ScheduleRunAction,
        StopJobAction,
        StopRemoteAccessSessionAction,
        StopRunAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateDeviceInstanceAction,
        UpdateDevicePoolAction,
        UpdateInstanceProfileAction,
        UpdateNetworkProfileAction,
        UpdateProjectAction,
        UpdateTestGridProjectAction,
        UpdateUploadAction,
        UpdateVPCEConfigurationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    DeviceFarmRequest(const Action action);
    DeviceFarmRequest(const DeviceFarmRequest &other);
    DeviceFarmRequest &operator=(const DeviceFarmRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const DeviceFarmRequest &other) const;


protected:
    /// @cond internal
    explicit DeviceFarmRequest(DeviceFarmRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeviceFarmRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
