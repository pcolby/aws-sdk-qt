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

#ifndef QTAWS_IOT1CLICKDEVICESREQUEST_H
#define QTAWS_IOT1CLICKDEVICESREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsiot1clickdevicesglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace IoT1ClickDevices {

class IoT1ClickDevicesRequestPrivate;

class QTAWSIOT1CLICKDEVICES_EXPORT IoT1ClickDevicesRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by IoT1ClickDevices.
    enum Action {
        ClaimDevicesByClaimCodeAction,
        DescribeDeviceAction,
        FinalizeDeviceClaimAction,
        GetDeviceMethodsAction,
        InitiateDeviceClaimAction,
        InvokeDeviceMethodAction,
        ListDeviceEventsAction,
        ListDevicesAction,
        ListTagsForResourceAction,
        TagResourceAction,
        UnclaimDeviceAction,
        UntagResourceAction,
        UpdateDeviceStateAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    IoT1ClickDevicesRequest(const Action action);
    IoT1ClickDevicesRequest(const IoT1ClickDevicesRequest &other);
    IoT1ClickDevicesRequest &operator=(const IoT1ClickDevicesRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const IoT1ClickDevicesRequest &other) const;


protected:
    /// @cond internal
    explicit IoT1ClickDevicesRequest(IoT1ClickDevicesRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoT1ClickDevicesRequest)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
