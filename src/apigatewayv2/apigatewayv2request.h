// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APIGATEWAYV2REQUEST_H
#define QTAWS_APIGATEWAYV2REQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsapigatewayv2global.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ApiGatewayV2 {

class ApiGatewayV2RequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT ApiGatewayV2Request : public QtAws::Core::AwsAbstractRequest {

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
    explicit ApiGatewayV2Request(ApiGatewayV2RequestPrivate * const d);
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
