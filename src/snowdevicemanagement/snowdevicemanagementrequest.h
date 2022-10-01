// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SNOWDEVICEMANAGEMENTREQUEST_H
#define QTAWS_SNOWDEVICEMANAGEMENTREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawssnowdevicemanagementglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace SnowDeviceManagement {

class SnowDeviceManagementRequestPrivate;

class QTAWSSNOWDEVICEMANAGEMENT_EXPORT SnowDeviceManagementRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by SnowDeviceManagement.
    enum Action {
        CancelTaskAction,
        CreateTaskAction,
        DescribeDeviceAction,
        DescribeDeviceEc2InstancesAction,
        DescribeExecutionAction,
        DescribeTaskAction,
        ListDeviceResourcesAction,
        ListDevicesAction,
        ListExecutionsAction,
        ListTagsForResourceAction,
        ListTasksAction,
        TagResourceAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SnowDeviceManagementRequest(const Action action);
    SnowDeviceManagementRequest(const SnowDeviceManagementRequest &other);
    SnowDeviceManagementRequest &operator=(const SnowDeviceManagementRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SnowDeviceManagementRequest &other) const;


protected:
    /// @cond internal
    explicit SnowDeviceManagementRequest(SnowDeviceManagementRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SnowDeviceManagementRequest)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
