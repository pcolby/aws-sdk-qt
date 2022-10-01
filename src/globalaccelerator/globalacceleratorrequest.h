// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GLOBALACCELERATORREQUEST_H
#define QTAWS_GLOBALACCELERATORREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsglobalacceleratorglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace GlobalAccelerator {

class GlobalAcceleratorRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT GlobalAcceleratorRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by GlobalAccelerator.
    enum Action {
        AddCustomRoutingEndpointsAction,
        AdvertiseByoipCidrAction,
        AllowCustomRoutingTrafficAction,
        CreateAcceleratorAction,
        CreateCustomRoutingAcceleratorAction,
        CreateCustomRoutingEndpointGroupAction,
        CreateCustomRoutingListenerAction,
        CreateEndpointGroupAction,
        CreateListenerAction,
        DeleteAcceleratorAction,
        DeleteCustomRoutingAcceleratorAction,
        DeleteCustomRoutingEndpointGroupAction,
        DeleteCustomRoutingListenerAction,
        DeleteEndpointGroupAction,
        DeleteListenerAction,
        DenyCustomRoutingTrafficAction,
        DeprovisionByoipCidrAction,
        DescribeAcceleratorAction,
        DescribeAcceleratorAttributesAction,
        DescribeCustomRoutingAcceleratorAction,
        DescribeCustomRoutingAcceleratorAttributesAction,
        DescribeCustomRoutingEndpointGroupAction,
        DescribeCustomRoutingListenerAction,
        DescribeEndpointGroupAction,
        DescribeListenerAction,
        ListAcceleratorsAction,
        ListByoipCidrsAction,
        ListCustomRoutingAcceleratorsAction,
        ListCustomRoutingEndpointGroupsAction,
        ListCustomRoutingListenersAction,
        ListCustomRoutingPortMappingsAction,
        ListCustomRoutingPortMappingsByDestinationAction,
        ListEndpointGroupsAction,
        ListListenersAction,
        ListTagsForResourceAction,
        ProvisionByoipCidrAction,
        RemoveCustomRoutingEndpointsAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAcceleratorAction,
        UpdateAcceleratorAttributesAction,
        UpdateCustomRoutingAcceleratorAction,
        UpdateCustomRoutingAcceleratorAttributesAction,
        UpdateCustomRoutingListenerAction,
        UpdateEndpointGroupAction,
        UpdateListenerAction,
        WithdrawByoipCidrAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    GlobalAcceleratorRequest(const Action action);
    GlobalAcceleratorRequest(const GlobalAcceleratorRequest &other);
    GlobalAcceleratorRequest &operator=(const GlobalAcceleratorRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const GlobalAcceleratorRequest &other) const;


protected:
    /// @cond internal
    explicit GlobalAcceleratorRequest(GlobalAcceleratorRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GlobalAcceleratorRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
