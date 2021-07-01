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

#ifndef QTAWS_IOTWIRELESSREQUEST_H
#define QTAWS_IOTWIRELESSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsiotwirelessglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace IoTWireless {

class IoTWirelessRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT IoTWirelessRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by IoTWireless.
    enum Action {
        AssociateAwsAccountWithPartnerAccountAction,
        AssociateWirelessDeviceWithThingAction,
        AssociateWirelessGatewayWithCertificateAction,
        AssociateWirelessGatewayWithThingAction,
        CreateDestinationAction,
        CreateDeviceProfileAction,
        CreateServiceProfileAction,
        CreateWirelessDeviceAction,
        CreateWirelessGatewayAction,
        CreateWirelessGatewayTaskAction,
        CreateWirelessGatewayTaskDefinitionAction,
        DeleteDestinationAction,
        DeleteDeviceProfileAction,
        DeleteServiceProfileAction,
        DeleteWirelessDeviceAction,
        DeleteWirelessGatewayAction,
        DeleteWirelessGatewayTaskAction,
        DeleteWirelessGatewayTaskDefinitionAction,
        DisassociateAwsAccountFromPartnerAccountAction,
        DisassociateWirelessDeviceFromThingAction,
        DisassociateWirelessGatewayFromCertificateAction,
        DisassociateWirelessGatewayFromThingAction,
        GetDestinationAction,
        GetDeviceProfileAction,
        GetLogLevelsByResourceTypesAction,
        GetPartnerAccountAction,
        GetResourceLogLevelAction,
        GetServiceEndpointAction,
        GetServiceProfileAction,
        GetWirelessDeviceAction,
        GetWirelessDeviceStatisticsAction,
        GetWirelessGatewayAction,
        GetWirelessGatewayCertificateAction,
        GetWirelessGatewayFirmwareInformationAction,
        GetWirelessGatewayStatisticsAction,
        GetWirelessGatewayTaskAction,
        GetWirelessGatewayTaskDefinitionAction,
        ListDestinationsAction,
        ListDeviceProfilesAction,
        ListPartnerAccountsAction,
        ListServiceProfilesAction,
        ListTagsForResourceAction,
        ListWirelessDevicesAction,
        ListWirelessGatewayTaskDefinitionsAction,
        ListWirelessGatewaysAction,
        PutResourceLogLevelAction,
        ResetAllResourceLogLevelsAction,
        ResetResourceLogLevelAction,
        SendDataToWirelessDeviceAction,
        TagResourceAction,
        TestWirelessDeviceAction,
        UntagResourceAction,
        UpdateDestinationAction,
        UpdateLogLevelsByResourceTypesAction,
        UpdatePartnerAccountAction,
        UpdateWirelessDeviceAction,
        UpdateWirelessGatewayAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    IoTWirelessRequest(const Action action);
    IoTWirelessRequest(const IoTWirelessRequest &other);
    IoTWirelessRequest &operator=(const IoTWirelessRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const IoTWirelessRequest &other) const;


protected:
    /// @cond internal
    IoTWirelessRequest(IoTWirelessRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTWirelessRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
