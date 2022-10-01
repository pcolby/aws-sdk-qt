// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PRIVATENETWORKSREQUEST_H
#define QTAWS_PRIVATENETWORKSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsprivatenetworksglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace PrivateNetworks {

class PrivateNetworksRequestPrivate;

class QTAWSPRIVATENETWORKS_EXPORT PrivateNetworksRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by PrivateNetworks.
    enum Action {
        AcknowledgeOrderReceiptAction,
        ActivateDeviceIdentifierAction,
        ActivateNetworkSiteAction,
        ConfigureAccessPointAction,
        CreateNetworkAction,
        CreateNetworkSiteAction,
        DeactivateDeviceIdentifierAction,
        DeleteNetworkAction,
        DeleteNetworkSiteAction,
        GetDeviceIdentifierAction,
        GetNetworkAction,
        GetNetworkResourceAction,
        GetNetworkSiteAction,
        GetOrderAction,
        ListDeviceIdentifiersAction,
        ListNetworkResourcesAction,
        ListNetworkSitesAction,
        ListNetworksAction,
        ListOrdersAction,
        ListTagsForResourceAction,
        PingAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateNetworkSiteAction,
        UpdateNetworkSitePlanAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    PrivateNetworksRequest(const Action action);
    PrivateNetworksRequest(const PrivateNetworksRequest &other);
    PrivateNetworksRequest &operator=(const PrivateNetworksRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const PrivateNetworksRequest &other) const;


protected:
    /// @cond internal
    explicit PrivateNetworksRequest(PrivateNetworksRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PrivateNetworksRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
