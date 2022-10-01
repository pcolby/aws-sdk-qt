// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BACKUPGATEWAYREQUEST_H
#define QTAWS_BACKUPGATEWAYREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsbackupgatewayglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace BackupGateway {

class BackupGatewayRequestPrivate;

class QTAWSBACKUPGATEWAY_EXPORT BackupGatewayRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by BackupGateway.
    enum Action {
        AssociateGatewayToServerAction,
        CreateGatewayAction,
        DeleteGatewayAction,
        DeleteHypervisorAction,
        DisassociateGatewayFromServerAction,
        GetGatewayAction,
        GetVirtualMachineAction,
        ImportHypervisorConfigurationAction,
        ListGatewaysAction,
        ListHypervisorsAction,
        ListTagsForResourceAction,
        ListVirtualMachinesAction,
        PutMaintenanceStartTimeAction,
        TagResourceAction,
        TestHypervisorConfigurationAction,
        UntagResourceAction,
        UpdateGatewayInformationAction,
        UpdateGatewaySoftwareNowAction,
        UpdateHypervisorAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    BackupGatewayRequest(const Action action);
    BackupGatewayRequest(const BackupGatewayRequest &other);
    BackupGatewayRequest &operator=(const BackupGatewayRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const BackupGatewayRequest &other) const;


protected:
    /// @cond internal
    explicit BackupGatewayRequest(BackupGatewayRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BackupGatewayRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
