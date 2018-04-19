/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "apigatewayrequest.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::APIGatewayRequest
 * \brief The APIGatewayRequest class provides an interface for APIGateway requests.
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * \enum APIGatewayRequest::Action
 *
 * This enum describes the actions that can be performed as APIGateway
 * requests.
 *
 * \value CreateApiKeyAction APIGateway CreateApiKey action.
 * \value CreateAuthorizerAction APIGateway CreateAuthorizer action.
 * \value CreateBasePathMappingAction APIGateway CreateBasePathMapping action.
 * \value CreateDeploymentAction APIGateway CreateDeployment action.
 * \value CreateDocumentationPartAction APIGateway CreateDocumentationPart action.
 * \value CreateDocumentationVersionAction APIGateway CreateDocumentationVersion action.
 * \value CreateDomainNameAction APIGateway CreateDomainName action.
 * \value CreateModelAction APIGateway CreateModel action.
 * \value CreateRequestValidatorAction APIGateway CreateRequestValidator action.
 * \value CreateResourceAction APIGateway CreateResource action.
 * \value CreateRestApiAction APIGateway CreateRestApi action.
 * \value CreateStageAction APIGateway CreateStage action.
 * \value CreateUsagePlanAction APIGateway CreateUsagePlan action.
 * \value CreateUsagePlanKeyAction APIGateway CreateUsagePlanKey action.
 * \value CreateVpcLinkAction APIGateway CreateVpcLink action.
 * \value DeleteApiKeyAction APIGateway DeleteApiKey action.
 * \value DeleteAuthorizerAction APIGateway DeleteAuthorizer action.
 * \value DeleteBasePathMappingAction APIGateway DeleteBasePathMapping action.
 * \value DeleteClientCertificateAction APIGateway DeleteClientCertificate action.
 * \value DeleteDeploymentAction APIGateway DeleteDeployment action.
 * \value DeleteDocumentationPartAction APIGateway DeleteDocumentationPart action.
 * \value DeleteDocumentationVersionAction APIGateway DeleteDocumentationVersion action.
 * \value DeleteDomainNameAction APIGateway DeleteDomainName action.
 * \value DeleteGatewayResponseAction APIGateway DeleteGatewayResponse action.
 * \value DeleteIntegrationAction APIGateway DeleteIntegration action.
 * \value DeleteIntegrationResponseAction APIGateway DeleteIntegrationResponse action.
 * \value DeleteMethodAction APIGateway DeleteMethod action.
 * \value DeleteMethodResponseAction APIGateway DeleteMethodResponse action.
 * \value DeleteModelAction APIGateway DeleteModel action.
 * \value DeleteRequestValidatorAction APIGateway DeleteRequestValidator action.
 * \value DeleteResourceAction APIGateway DeleteResource action.
 * \value DeleteRestApiAction APIGateway DeleteRestApi action.
 * \value DeleteStageAction APIGateway DeleteStage action.
 * \value DeleteUsagePlanAction APIGateway DeleteUsagePlan action.
 * \value DeleteUsagePlanKeyAction APIGateway DeleteUsagePlanKey action.
 * \value DeleteVpcLinkAction APIGateway DeleteVpcLink action.
 * \value FlushStageAuthorizersCacheAction APIGateway FlushStageAuthorizersCache action.
 * \value FlushStageCacheAction APIGateway FlushStageCache action.
 * \value GenerateClientCertificateAction APIGateway GenerateClientCertificate action.
 * \value GetAccountAction APIGateway GetAccount action.
 * \value GetApiKeyAction APIGateway GetApiKey action.
 * \value GetApiKeysAction APIGateway GetApiKeys action.
 * \value GetAuthorizerAction APIGateway GetAuthorizer action.
 * \value GetAuthorizersAction APIGateway GetAuthorizers action.
 * \value GetBasePathMappingAction APIGateway GetBasePathMapping action.
 * \value GetBasePathMappingsAction APIGateway GetBasePathMappings action.
 * \value GetClientCertificateAction APIGateway GetClientCertificate action.
 * \value GetClientCertificatesAction APIGateway GetClientCertificates action.
 * \value GetDeploymentAction APIGateway GetDeployment action.
 * \value GetDeploymentsAction APIGateway GetDeployments action.
 * \value GetDocumentationPartAction APIGateway GetDocumentationPart action.
 * \value GetDocumentationPartsAction APIGateway GetDocumentationParts action.
 * \value GetDocumentationVersionAction APIGateway GetDocumentationVersion action.
 * \value GetDocumentationVersionsAction APIGateway GetDocumentationVersions action.
 * \value GetDomainNameAction APIGateway GetDomainName action.
 * \value GetDomainNamesAction APIGateway GetDomainNames action.
 * \value GetExportAction APIGateway GetExport action.
 * \value GetGatewayResponseAction APIGateway GetGatewayResponse action.
 * \value GetGatewayResponsesAction APIGateway GetGatewayResponses action.
 * \value GetIntegrationAction APIGateway GetIntegration action.
 * \value GetIntegrationResponseAction APIGateway GetIntegrationResponse action.
 * \value GetMethodAction APIGateway GetMethod action.
 * \value GetMethodResponseAction APIGateway GetMethodResponse action.
 * \value GetModelAction APIGateway GetModel action.
 * \value GetModelTemplateAction APIGateway GetModelTemplate action.
 * \value GetModelsAction APIGateway GetModels action.
 * \value GetRequestValidatorAction APIGateway GetRequestValidator action.
 * \value GetRequestValidatorsAction APIGateway GetRequestValidators action.
 * \value GetResourceAction APIGateway GetResource action.
 * \value GetResourcesAction APIGateway GetResources action.
 * \value GetRestApiAction APIGateway GetRestApi action.
 * \value GetRestApisAction APIGateway GetRestApis action.
 * \value GetSdkAction APIGateway GetSdk action.
 * \value GetSdkTypeAction APIGateway GetSdkType action.
 * \value GetSdkTypesAction APIGateway GetSdkTypes action.
 * \value GetStageAction APIGateway GetStage action.
 * \value GetStagesAction APIGateway GetStages action.
 * \value GetTagsAction APIGateway GetTags action.
 * \value GetUsageAction APIGateway GetUsage action.
 * \value GetUsagePlanAction APIGateway GetUsagePlan action.
 * \value GetUsagePlanKeyAction APIGateway GetUsagePlanKey action.
 * \value GetUsagePlanKeysAction APIGateway GetUsagePlanKeys action.
 * \value GetUsagePlansAction APIGateway GetUsagePlans action.
 * \value GetVpcLinkAction APIGateway GetVpcLink action.
 * \value GetVpcLinksAction APIGateway GetVpcLinks action.
 * \value ImportApiKeysAction APIGateway ImportApiKeys action.
 * \value ImportDocumentationPartsAction APIGateway ImportDocumentationParts action.
 * \value ImportRestApiAction APIGateway ImportRestApi action.
 * \value PutGatewayResponseAction APIGateway PutGatewayResponse action.
 * \value PutIntegrationAction APIGateway PutIntegration action.
 * \value PutIntegrationResponseAction APIGateway PutIntegrationResponse action.
 * \value PutMethodAction APIGateway PutMethod action.
 * \value PutMethodResponseAction APIGateway PutMethodResponse action.
 * \value PutRestApiAction APIGateway PutRestApi action.
 * \value TagResourceAction APIGateway TagResource action.
 * \value TestInvokeAuthorizerAction APIGateway TestInvokeAuthorizer action.
 * \value TestInvokeMethodAction APIGateway TestInvokeMethod action.
 * \value UntagResourceAction APIGateway UntagResource action.
 * \value UpdateAccountAction APIGateway UpdateAccount action.
 * \value UpdateApiKeyAction APIGateway UpdateApiKey action.
 * \value UpdateAuthorizerAction APIGateway UpdateAuthorizer action.
 * \value UpdateBasePathMappingAction APIGateway UpdateBasePathMapping action.
 * \value UpdateClientCertificateAction APIGateway UpdateClientCertificate action.
 * \value UpdateDeploymentAction APIGateway UpdateDeployment action.
 * \value UpdateDocumentationPartAction APIGateway UpdateDocumentationPart action.
 * \value UpdateDocumentationVersionAction APIGateway UpdateDocumentationVersion action.
 * \value UpdateDomainNameAction APIGateway UpdateDomainName action.
 * \value UpdateGatewayResponseAction APIGateway UpdateGatewayResponse action.
 * \value UpdateIntegrationAction APIGateway UpdateIntegration action.
 * \value UpdateIntegrationResponseAction APIGateway UpdateIntegrationResponse action.
 * \value UpdateMethodAction APIGateway UpdateMethod action.
 * \value UpdateMethodResponseAction APIGateway UpdateMethodResponse action.
 * \value UpdateModelAction APIGateway UpdateModel action.
 * \value UpdateRequestValidatorAction APIGateway UpdateRequestValidator action.
 * \value UpdateResourceAction APIGateway UpdateResource action.
 * \value UpdateRestApiAction APIGateway UpdateRestApi action.
 * \value UpdateStageAction APIGateway UpdateStage action.
 * \value UpdateUsageAction APIGateway UpdateUsage action.
 * \value UpdateUsagePlanAction APIGateway UpdateUsagePlan action.
 * \value UpdateVpcLinkAction APIGateway UpdateVpcLink action.
 */

/*!
 * Constructs a APIGatewayRequest object for APIGateway \a action.
 */
APIGatewayRequest::APIGatewayRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new APIGatewayRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
APIGatewayRequest::APIGatewayRequest(const APIGatewayRequest &other)
    : QtAws::Core::AwsAbstractRequest(new APIGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the APIGatewayRequest object to be equal to \a other.
 */
APIGatewayRequest& APIGatewayRequest::operator=(const APIGatewayRequest &other)
{
    Q_D(APIGatewayRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa APIGatewayRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from APIGatewayRequestPrivate.
 */
APIGatewayRequest::APIGatewayRequest(APIGatewayRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the APIGateway action to be performed by this request.
 */
APIGatewayRequest::Action APIGatewayRequest::action() const
{
    Q_D(const APIGatewayRequest);
    return d->action;
}

/*!
 * Returns the name of the APIGateway action to be performed by this request.
 */
QString APIGatewayRequest::actionString() const
{
    return APIGatewayRequestPrivate::toString(action());
}

/*!
 * Returns the APIGateway API version implemented by this request.
 */
QString APIGatewayRequest::apiVersion() const
{
    Q_D(const APIGatewayRequest);
    return d->apiVersion;
}

/*!
 * Sets the APIGateway action to be performed by this request to \a action.
 */
void APIGatewayRequest::setAction(const Action action)
{
    Q_D(APIGatewayRequest);
    d->action = action;
}

/*!
 * Sets the APIGateway API version to include in this request to \a version.
 */
void APIGatewayRequest::setApiVersion(const QString &version)
{
    Q_D(APIGatewayRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool APIGatewayRequest::operator==(const APIGatewayRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid APIGateway queue name.
 *
 * @par From APIGateway FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid APIGateway queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool APIGatewayRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int APIGatewayRequest::clearParameter(const QString &name)
{
    Q_D(APIGatewayRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void APIGatewayRequest::clearParameters()
{
    Q_D(APIGatewayRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant APIGatewayRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const APIGatewayRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &APIGatewayRequest::parameters() const
{
    Q_D(const APIGatewayRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void APIGatewayRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(APIGatewayRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void APIGatewayRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(APIGatewayRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the APIGateway request using the given
 * \a endpoint.
 *
 * This APIGateway implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest APIGatewayRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const APIGatewayRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::APIGateway::APIGatewayRequestPrivate
 * \brief The APIGatewayRequestPrivate class provides private implementation for APIGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a APIGatewayRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
APIGatewayRequestPrivate::APIGatewayRequestPrivate(const APIGatewayRequest::Action action, APIGatewayRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the APIGatewayRequest class's copy constructor.
 */
APIGatewayRequestPrivate::APIGatewayRequestPrivate(const APIGatewayRequestPrivate &other,
                                     APIGatewayRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts APIGatewayRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the APIGateway service's Action
 * query parameters.
 */
QString APIGatewayRequestPrivate::toString(const APIGatewayRequest::Action &action)
{
    #define ActionToString(action) \
        case APIGatewayRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace APIGateway
} // namespace QtAws
