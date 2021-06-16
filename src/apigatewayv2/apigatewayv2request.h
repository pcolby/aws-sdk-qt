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

#ifndef QTAWS_APIGATEWAYV2REQUEST_H
#define QTAWS_APIGATEWAYV2REQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ApiGatewayV2 {

class ApiGatewayV2RequestPrivate;

class QTAWS_EXPORT ApiGatewayV2Request : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ApiGatewayV2.
    enum Action {
        CreateApiAction,
        CreateApiMappingAction,
        CreateAuthorizerAction,
        CreateDeploymentAction,
        CreateDomainNameAction,
        CreateIntegrationAction,
        CreateIntegrationResponseAction,
        CreateModelAction,
        CreateRouteAction,
        CreateRouteResponseAction,
        CreateStageAction,
        CreateVpcLinkAction,
        DeleteAccessLogSettingsAction,
        DeleteApiAction,
        DeleteApiMappingAction,
        DeleteAuthorizerAction,
        DeleteCorsConfigurationAction,
        DeleteDeploymentAction,
        DeleteDomainNameAction,
        DeleteIntegrationAction,
        DeleteIntegrationResponseAction,
        DeleteModelAction,
        DeleteRouteAction,
        DeleteRouteRequestParameterAction,
        DeleteRouteResponseAction,
        DeleteRouteSettingsAction,
        DeleteStageAction,
        DeleteVpcLinkAction,
        ExportApiAction,
        GetApiAction,
        GetApiMappingAction,
        GetApiMappingsAction,
        GetApisAction,
        GetAuthorizerAction,
        GetAuthorizersAction,
        GetDeploymentAction,
        GetDeploymentsAction,
        GetDomainNameAction,
        GetDomainNamesAction,
        GetIntegrationAction,
        GetIntegrationResponseAction,
        GetIntegrationResponsesAction,
        GetIntegrationsAction,
        GetModelAction,
        GetModelTemplateAction,
        GetModelsAction,
        GetRouteAction,
        GetRouteResponseAction,
        GetRouteResponsesAction,
        GetRoutesAction,
        GetStageAction,
        GetStagesAction,
        GetTagsAction,
        GetVpcLinkAction,
        GetVpcLinksAction,
        ImportApiAction,
        ReimportApiAction,
        ResetAuthorizersCacheAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateApiAction,
        UpdateApiMappingAction,
        UpdateAuthorizerAction,
        UpdateDeploymentAction,
        UpdateDomainNameAction,
        UpdateIntegrationAction,
        UpdateIntegrationResponseAction,
        UpdateModelAction,
        UpdateRouteAction,
        UpdateRouteResponseAction,
        UpdateStageAction,
        UpdateVpcLinkAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ApiGatewayV2Request(const Action action);
    ApiGatewayV2Request(const ApiGatewayV2Request &other);
    ApiGatewayV2Request &operator=(const ApiGatewayV2Request &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ApiGatewayV2Request &other) const;


protected:
    /// @cond internal
    ApiGatewayV2Request(ApiGatewayV2RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApiGatewayV2Request)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
