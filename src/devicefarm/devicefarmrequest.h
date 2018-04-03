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

#ifndef QTAWS_DEVICEFARMREQUEST_H
#define QTAWS_DEVICEFARMREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace DeviceFarm {

class DeviceFarmRequestPrivate;

class QTAWS_EXPORT DeviceFarmRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by DeviceFarm.
    enum Action {
        CreateDevicePoolAction,
        CreateInstanceProfileAction,
        CreateNetworkProfileAction,
        CreateProjectAction,
        CreateRemoteAccessSessionAction,
        CreateUploadAction,
        DeleteDevicePoolAction,
        DeleteInstanceProfileAction,
        DeleteNetworkProfileAction,
        DeleteProjectAction,
        DeleteRemoteAccessSessionAction,
        DeleteRunAction,
        DeleteUploadAction,
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
        GetUploadAction,
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
        ListTestsAction,
        ListUniqueProblemsAction,
        ListUploadsAction,
        PurchaseOfferingAction,
        RenewOfferingAction,
        ScheduleRunAction,
        StopRemoteAccessSessionAction,
        StopRunAction,
        UpdateDeviceInstanceAction,
        UpdateDevicePoolAction,
        UpdateInstanceProfileAction,
        UpdateNetworkProfileAction,
        UpdateProjectAction,
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
    DeviceFarmRequest(DeviceFarmRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const;

private:
    Q_DECLARE_PRIVATE(DeviceFarmRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
