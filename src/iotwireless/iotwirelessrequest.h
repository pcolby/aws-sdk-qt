// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
        AssociateMulticastGroupWithFuotaTaskAction,
        AssociateWirelessDeviceWithFuotaTaskAction,
        AssociateWirelessDeviceWithMulticastGroupAction,
        AssociateWirelessDeviceWithThingAction,
        AssociateWirelessGatewayWithCertificateAction,
        AssociateWirelessGatewayWithThingAction,
        CancelMulticastGroupSessionAction,
        CreateDestinationAction,
        CreateDeviceProfileAction,
        CreateFuotaTaskAction,
        CreateMulticastGroupAction,
        CreateNetworkAnalyzerConfigurationAction,
        CreateServiceProfileAction,
        CreateWirelessDeviceAction,
        CreateWirelessGatewayAction,
        CreateWirelessGatewayTaskAction,
        CreateWirelessGatewayTaskDefinitionAction,
        DeleteDestinationAction,
        DeleteDeviceProfileAction,
        DeleteFuotaTaskAction,
        DeleteMulticastGroupAction,
        DeleteNetworkAnalyzerConfigurationAction,
        DeleteQueuedMessagesAction,
        DeleteServiceProfileAction,
        DeleteWirelessDeviceAction,
        DeleteWirelessGatewayAction,
        DeleteWirelessGatewayTaskAction,
        DeleteWirelessGatewayTaskDefinitionAction,
        DisassociateAwsAccountFromPartnerAccountAction,
        DisassociateMulticastGroupFromFuotaTaskAction,
        DisassociateWirelessDeviceFromFuotaTaskAction,
        DisassociateWirelessDeviceFromMulticastGroupAction,
        DisassociateWirelessDeviceFromThingAction,
        DisassociateWirelessGatewayFromCertificateAction,
        DisassociateWirelessGatewayFromThingAction,
        GetDestinationAction,
        GetDeviceProfileAction,
        GetEventConfigurationByResourceTypesAction,
        GetFuotaTaskAction,
        GetLogLevelsByResourceTypesAction,
        GetMulticastGroupAction,
        GetMulticastGroupSessionAction,
        GetNetworkAnalyzerConfigurationAction,
        GetPartnerAccountAction,
        GetPositionAction,
        GetPositionConfigurationAction,
        GetResourceEventConfigurationAction,
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
        ListEventConfigurationsAction,
        ListFuotaTasksAction,
        ListMulticastGroupsAction,
        ListMulticastGroupsByFuotaTaskAction,
        ListNetworkAnalyzerConfigurationsAction,
        ListPartnerAccountsAction,
        ListPositionConfigurationsAction,
        ListQueuedMessagesAction,
        ListServiceProfilesAction,
        ListTagsForResourceAction,
        ListWirelessDevicesAction,
        ListWirelessGatewayTaskDefinitionsAction,
        ListWirelessGatewaysAction,
        PutPositionConfigurationAction,
        PutResourceLogLevelAction,
        ResetAllResourceLogLevelsAction,
        ResetResourceLogLevelAction,
        SendDataToMulticastGroupAction,
        SendDataToWirelessDeviceAction,
        StartBulkAssociateWirelessDeviceWithMulticastGroupAction,
        StartBulkDisassociateWirelessDeviceFromMulticastGroupAction,
        StartFuotaTaskAction,
        StartMulticastGroupSessionAction,
        TagResourceAction,
        TestWirelessDeviceAction,
        UntagResourceAction,
        UpdateDestinationAction,
        UpdateEventConfigurationByResourceTypesAction,
        UpdateFuotaTaskAction,
        UpdateLogLevelsByResourceTypesAction,
        UpdateMulticastGroupAction,
        UpdateNetworkAnalyzerConfigurationAction,
        UpdatePartnerAccountAction,
        UpdatePositionAction,
        UpdateResourceEventConfigurationAction,
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
    explicit IoTWirelessRequest(IoTWirelessRequestPrivate * const d);
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
