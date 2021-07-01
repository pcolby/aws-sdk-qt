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
    MediaConnectRequest(MediaConnectRequestPrivate * const d);
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
