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

#ifndef QTAWS_APPMESHREQUEST_H
#define QTAWS_APPMESHREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsappmeshglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace AppMesh {

class AppMeshRequestPrivate;

class QTAWSAPPMESH_EXPORT AppMeshRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by AppMesh.
    enum Action {
        CreateGatewayRouteAction,
        CreateMeshAction,
        CreateRouteAction,
        CreateVirtualGatewayAction,
        CreateVirtualNodeAction,
        CreateVirtualRouterAction,
        CreateVirtualServiceAction,
        DeleteGatewayRouteAction,
        DeleteMeshAction,
        DeleteRouteAction,
        DeleteVirtualGatewayAction,
        DeleteVirtualNodeAction,
        DeleteVirtualRouterAction,
        DeleteVirtualServiceAction,
        DescribeGatewayRouteAction,
        DescribeMeshAction,
        DescribeRouteAction,
        DescribeVirtualGatewayAction,
        DescribeVirtualNodeAction,
        DescribeVirtualRouterAction,
        DescribeVirtualServiceAction,
        ListGatewayRoutesAction,
        ListMeshesAction,
        ListRoutesAction,
        ListTagsForResourceAction,
        ListVirtualGatewaysAction,
        ListVirtualNodesAction,
        ListVirtualRoutersAction,
        ListVirtualServicesAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateGatewayRouteAction,
        UpdateMeshAction,
        UpdateRouteAction,
        UpdateVirtualGatewayAction,
        UpdateVirtualNodeAction,
        UpdateVirtualRouterAction,
        UpdateVirtualServiceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    AppMeshRequest(const Action action);
    AppMeshRequest(const AppMeshRequest &other);
    AppMeshRequest &operator=(const AppMeshRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const AppMeshRequest &other) const;


protected:
    /// @cond internal
    explicit AppMeshRequest(AppMeshRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AppMeshRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
