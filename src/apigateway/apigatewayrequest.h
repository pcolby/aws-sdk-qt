// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APIGATEWAYREQUEST_H
#define QTAWS_APIGATEWAYREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsapigatewayglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ApiGateway {

class ApiGatewayRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT ApiGatewayRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ApiGateway.
    enum Action {
        CreateApiKeyAction,
        CreateAuthorizerAction,
        CreateBasePathMappingAction,
        CreateDeploymentAction,
        CreateDocumentationPartAction,
        CreateDocumentationVersionAction,
        CreateDomainNameAction,
        CreateModelAction,
        CreateRequestValidatorAction,
        CreateResourceAction,
        CreateRestApiAction,
        CreateStageAction,
        CreateUsagePlanAction,
        CreateUsagePlanKeyAction,
        CreateVpcLinkAction,
        DeleteApiKeyAction,
        DeleteAuthorizerAction,
        DeleteBasePathMappingAction,
        DeleteClientCertificateAction,
        DeleteDeploymentAction,
        DeleteDocumentationPartAction,
        DeleteDocumentationVersionAction,
        DeleteDomainNameAction,
        DeleteGatewayResponseAction,
        DeleteIntegrationAction,
        DeleteIntegrationResponseAction,
        DeleteMethodAction,
        DeleteMethodResponseAction,
        DeleteModelAction,
        DeleteRequestValidatorAction,
        DeleteResourceAction,
        DeleteRestApiAction,
        DeleteStageAction,
        DeleteUsagePlanAction,
        DeleteUsagePlanKeyAction,
        DeleteVpcLinkAction,
        FlushStageAuthorizersCacheAction,
        FlushStageCacheAction,
        GenerateClientCertificateAction,
        GetAccountAction,
        GetApiKeyAction,
        GetApiKeysAction,
        GetAuthorizerAction,
        GetAuthorizersAction,
        GetBasePathMappingAction,
        GetBasePathMappingsAction,
        GetClientCertificateAction,
        GetClientCertificatesAction,
        GetDeploymentAction,
        GetDeploymentsAction,
        GetDocumentationPartAction,
        GetDocumentationPartsAction,
        GetDocumentationVersionAction,
        GetDocumentationVersionsAction,
        GetDomainNameAction,
        GetDomainNamesAction,
        GetExportAction,
        GetGatewayResponseAction,
        GetGatewayResponsesAction,
        GetIntegrationAction,
        GetIntegrationResponseAction,
        GetMethodAction,
        GetMethodResponseAction,
        GetModelAction,
        GetModelTemplateAction,
        GetModelsAction,
        GetRequestValidatorAction,
        GetRequestValidatorsAction,
        GetResourceAction,
        GetResourcesAction,
        GetRestApiAction,
        GetRestApisAction,
        GetSdkAction,
        GetSdkTypeAction,
        GetSdkTypesAction,
        GetStageAction,
        GetStagesAction,
        GetTagsAction,
        GetUsageAction,
        GetUsagePlanAction,
        GetUsagePlanKeyAction,
        GetUsagePlanKeysAction,
        GetUsagePlansAction,
        GetVpcLinkAction,
        GetVpcLinksAction,
        ImportApiKeysAction,
        ImportDocumentationPartsAction,
        ImportRestApiAction,
        PutGatewayResponseAction,
        PutIntegrationAction,
        PutIntegrationResponseAction,
        PutMethodAction,
        PutMethodResponseAction,
        PutRestApiAction,
        TagResourceAction,
        TestInvokeAuthorizerAction,
        TestInvokeMethodAction,
        UntagResourceAction,
        UpdateAccountAction,
        UpdateApiKeyAction,
        UpdateAuthorizerAction,
        UpdateBasePathMappingAction,
        UpdateClientCertificateAction,
        UpdateDeploymentAction,
        UpdateDocumentationPartAction,
        UpdateDocumentationVersionAction,
        UpdateDomainNameAction,
        UpdateGatewayResponseAction,
        UpdateIntegrationAction,
        UpdateIntegrationResponseAction,
        UpdateMethodAction,
        UpdateMethodResponseAction,
        UpdateModelAction,
        UpdateRequestValidatorAction,
        UpdateResourceAction,
        UpdateRestApiAction,
        UpdateStageAction,
        UpdateUsageAction,
        UpdateUsagePlanAction,
        UpdateVpcLinkAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ApiGatewayRequest(const Action action);
    ApiGatewayRequest(const ApiGatewayRequest &other);
    ApiGatewayRequest &operator=(const ApiGatewayRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ApiGatewayRequest &other) const;


protected:
    /// @cond internal
    explicit ApiGatewayRequest(ApiGatewayRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApiGatewayRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
