// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIACONNECTREQUEST_H
#define QTAWS_MEDIACONNECTREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmediaconnectglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace MediaConnect {

class MediaConnectRequestPrivate;

class QTAWSMEDIACONNECT_EXPORT MediaConnectRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by MediaConnect.
    enum Action {
        AddFlowMediaStreamsAction,
        AddFlowOutputsAction,
        AddFlowSourcesAction,
        AddFlowVpcInterfacesAction,
        CreateFlowAction,
        DeleteFlowAction,
        DescribeFlowAction,
        DescribeOfferingAction,
        DescribeReservationAction,
        GrantFlowEntitlementsAction,
        ListEntitlementsAction,
        ListFlowsAction,
        ListOfferingsAction,
        ListReservationsAction,
        ListTagsForResourceAction,
        PurchaseOfferingAction,
        RemoveFlowMediaStreamAction,
        RemoveFlowOutputAction,
        RemoveFlowSourceAction,
        RemoveFlowVpcInterfaceAction,
        RevokeFlowEntitlementAction,
        StartFlowAction,
        StopFlowAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateFlowAction,
        UpdateFlowEntitlementAction,
        UpdateFlowMediaStreamAction,
        UpdateFlowOutputAction,
        UpdateFlowSourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MediaConnectRequest(const Action action);
    MediaConnectRequest(const MediaConnectRequest &other);
    MediaConnectRequest &operator=(const MediaConnectRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MediaConnectRequest &other) const;


protected:
    /// @cond internal
    explicit MediaConnectRequest(MediaConnectRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MediaConnectRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
