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

#include "apigatewayv2request.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::ApiGatewayV2Request
 * \brief The ApiGatewayV2Request class provides an interface for ApiGatewayV2 requests.
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * \enum ApiGatewayV2Request::Action
 *
 * This enum describes the actions that can be performed as ApiGatewayV2
 * requests.
 *
 * \value CreateApiAction ApiGatewayV2 CreateApi action.
 * \value CreateApiMappingAction ApiGatewayV2 CreateApiMapping action.
 * \value CreateAuthorizerAction ApiGatewayV2 CreateAuthorizer action.
 * \value CreateDeploymentAction ApiGatewayV2 CreateDeployment action.
 * \value CreateDomainNameAction ApiGatewayV2 CreateDomainName action.
 * \value CreateIntegrationAction ApiGatewayV2 CreateIntegration action.
 * \value CreateIntegrationResponseAction ApiGatewayV2 CreateIntegrationResponse action.
 * \value CreateModelAction ApiGatewayV2 CreateModel action.
 * \value CreateRouteAction ApiGatewayV2 CreateRoute action.
 * \value CreateRouteResponseAction ApiGatewayV2 CreateRouteResponse action.
 * \value CreateStageAction ApiGatewayV2 CreateStage action.
 * \value CreateVpcLinkAction ApiGatewayV2 CreateVpcLink action.
 * \value DeleteAccessLogSettingsAction ApiGatewayV2 DeleteAccessLogSettings action.
 * \value DeleteApiAction ApiGatewayV2 DeleteApi action.
 * \value DeleteApiMappingAction ApiGatewayV2 DeleteApiMapping action.
 * \value DeleteAuthorizerAction ApiGatewayV2 DeleteAuthorizer action.
 * \value DeleteCorsConfigurationAction ApiGatewayV2 DeleteCorsConfiguration action.
 * \value DeleteDeploymentAction ApiGatewayV2 DeleteDeployment action.
 * \value DeleteDomainNameAction ApiGatewayV2 DeleteDomainName action.
 * \value DeleteIntegrationAction ApiGatewayV2 DeleteIntegration action.
 * \value DeleteIntegrationResponseAction ApiGatewayV2 DeleteIntegrationResponse action.
 * \value DeleteModelAction ApiGatewayV2 DeleteModel action.
 * \value DeleteRouteAction ApiGatewayV2 DeleteRoute action.
 * \value DeleteRouteRequestParameterAction ApiGatewayV2 DeleteRouteRequestParameter action.
 * \value DeleteRouteResponseAction ApiGatewayV2 DeleteRouteResponse action.
 * \value DeleteRouteSettingsAction ApiGatewayV2 DeleteRouteSettings action.
 * \value DeleteStageAction ApiGatewayV2 DeleteStage action.
 * \value DeleteVpcLinkAction ApiGatewayV2 DeleteVpcLink action.
 * \value ExportApiAction ApiGatewayV2 ExportApi action.
 * \value GetApiAction ApiGatewayV2 GetApi action.
 * \value GetApiMappingAction ApiGatewayV2 GetApiMapping action.
 * \value GetApiMappingsAction ApiGatewayV2 GetApiMappings action.
 * \value GetApisAction ApiGatewayV2 GetApis action.
 * \value GetAuthorizerAction ApiGatewayV2 GetAuthorizer action.
 * \value GetAuthorizersAction ApiGatewayV2 GetAuthorizers action.
 * \value GetDeploymentAction ApiGatewayV2 GetDeployment action.
 * \value GetDeploymentsAction ApiGatewayV2 GetDeployments action.
 * \value GetDomainNameAction ApiGatewayV2 GetDomainName action.
 * \value GetDomainNamesAction ApiGatewayV2 GetDomainNames action.
 * \value GetIntegrationAction ApiGatewayV2 GetIntegration action.
 * \value GetIntegrationResponseAction ApiGatewayV2 GetIntegrationResponse action.
 * \value GetIntegrationResponsesAction ApiGatewayV2 GetIntegrationResponses action.
 * \value GetIntegrationsAction ApiGatewayV2 GetIntegrations action.
 * \value GetModelAction ApiGatewayV2 GetModel action.
 * \value GetModelTemplateAction ApiGatewayV2 GetModelTemplate action.
 * \value GetModelsAction ApiGatewayV2 GetModels action.
 * \value GetRouteAction ApiGatewayV2 GetRoute action.
 * \value GetRouteResponseAction ApiGatewayV2 GetRouteResponse action.
 * \value GetRouteResponsesAction ApiGatewayV2 GetRouteResponses action.
 * \value GetRoutesAction ApiGatewayV2 GetRoutes action.
 * \value GetStageAction ApiGatewayV2 GetStage action.
 * \value GetStagesAction ApiGatewayV2 GetStages action.
 * \value GetTagsAction ApiGatewayV2 GetTags action.
 * \value GetVpcLinkAction ApiGatewayV2 GetVpcLink action.
 * \value GetVpcLinksAction ApiGatewayV2 GetVpcLinks action.
 * \value ImportApiAction ApiGatewayV2 ImportApi action.
 * \value ReimportApiAction ApiGatewayV2 ReimportApi action.
 * \value ResetAuthorizersCacheAction ApiGatewayV2 ResetAuthorizersCache action.
 * \value TagResourceAction ApiGatewayV2 TagResource action.
 * \value UntagResourceAction ApiGatewayV2 UntagResource action.
 * \value UpdateApiAction ApiGatewayV2 UpdateApi action.
 * \value UpdateApiMappingAction ApiGatewayV2 UpdateApiMapping action.
 * \value UpdateAuthorizerAction ApiGatewayV2 UpdateAuthorizer action.
 * \value UpdateDeploymentAction ApiGatewayV2 UpdateDeployment action.
 * \value UpdateDomainNameAction ApiGatewayV2 UpdateDomainName action.
 * \value UpdateIntegrationAction ApiGatewayV2 UpdateIntegration action.
 * \value UpdateIntegrationResponseAction ApiGatewayV2 UpdateIntegrationResponse action.
 * \value UpdateModelAction ApiGatewayV2 UpdateModel action.
 * \value UpdateRouteAction ApiGatewayV2 UpdateRoute action.
 * \value UpdateRouteResponseAction ApiGatewayV2 UpdateRouteResponse action.
 * \value UpdateStageAction ApiGatewayV2 UpdateStage action.
 * \value UpdateVpcLinkAction ApiGatewayV2 UpdateVpcLink action.
 */

/*!
 * Constructs a ApiGatewayV2Request object for ApiGatewayV2 \a action.
 */
ApiGatewayV2Request::ApiGatewayV2Request(const Action action)
    : d_ptr(new ApiGatewayV2RequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ApiGatewayV2Request::ApiGatewayV2Request(const ApiGatewayV2Request &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new ApiGatewayV2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ApiGatewayV2Request object to be equal to \a other.
 */
ApiGatewayV2Request& ApiGatewayV2Request::operator=(const ApiGatewayV2Request &other)
{
    Q_D(ApiGatewayV2Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ApiGatewayV2Request object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ApiGatewayV2RequestPrivate.
 */
ApiGatewayV2Request::ApiGatewayV2Request(ApiGatewayV2RequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the ApiGatewayV2 action to be performed by this request.
 */
ApiGatewayV2Request::Action ApiGatewayV2Request::action() const
{
    Q_D(const ApiGatewayV2Request);
    return d->action;
}

/*!
 * Returns the name of the ApiGatewayV2 action to be performed by this request.
 */
QString ApiGatewayV2Request::actionString() const
{
    return ApiGatewayV2RequestPrivate::toString(action());
}

/*!
 * Returns the ApiGatewayV2 API version implemented by this request.
 */
QString ApiGatewayV2Request::apiVersion() const
{
    Q_D(const ApiGatewayV2Request);
    return d->apiVersion;
}

/*!
 * Sets the ApiGatewayV2 action to be performed by this request to \a action.
 */
void ApiGatewayV2Request::setAction(const Action action)
{
    Q_D(ApiGatewayV2Request);
    d->action = action;
}

/*!
 * Sets the ApiGatewayV2 API version to include in this request to \a version.
 */
void ApiGatewayV2Request::setApiVersion(const QString &version)
{
    Q_D(ApiGatewayV2Request);
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
bool ApiGatewayV2Request::operator==(const ApiGatewayV2Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ApiGatewayV2 queue name.
 *
 * @par From ApiGatewayV2 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ApiGatewayV2 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ApiGatewayV2Request::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ApiGatewayV2Request::clearParameter(const QString &name)
{
    Q_D(ApiGatewayV2Request);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ApiGatewayV2Request::clearParameters()
{
    Q_D(ApiGatewayV2Request);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ApiGatewayV2Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ApiGatewayV2Request);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ApiGatewayV2Request::parameters() const
{
    Q_D(const ApiGatewayV2Request);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ApiGatewayV2Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ApiGatewayV2Request);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ApiGatewayV2Request::setParameters(const QVariantMap &parameters)
{
    Q_D(ApiGatewayV2Request);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ApiGatewayV2 request using the given
 * \a endpoint.
 *
 * This ApiGatewayV2 implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ApiGatewayV2Request::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ApiGatewayV2Request);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ApiGatewayV2::ApiGatewayV2RequestPrivate
 * \brief The ApiGatewayV2RequestPrivate class provides private implementation for ApiGatewayV2Request.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a ApiGatewayV2RequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
ApiGatewayV2RequestPrivate::ApiGatewayV2RequestPrivate(const ApiGatewayV2Request::Action action, ApiGatewayV2Request * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ApiGatewayV2Request class's copy constructor.
 */
ApiGatewayV2RequestPrivate::ApiGatewayV2RequestPrivate(const ApiGatewayV2RequestPrivate &other,
                                     ApiGatewayV2Request * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ApiGatewayV2Request::Action enumerator values to their respective
 * string representations, appropriate for use with the ApiGatewayV2 service's Action
 * query parameters.
 */
QString ApiGatewayV2RequestPrivate::toString(const ApiGatewayV2Request::Action &action)
{
    #define ActionToString(action) \
        case ApiGatewayV2Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateApi);
        ActionToString(CreateApiMapping);
        ActionToString(CreateAuthorizer);
        ActionToString(CreateDeployment);
        ActionToString(CreateDomainName);
        ActionToString(CreateIntegration);
        ActionToString(CreateIntegrationResponse);
        ActionToString(CreateModel);
        ActionToString(CreateRoute);
        ActionToString(CreateRouteResponse);
        ActionToString(CreateStage);
        ActionToString(CreateVpcLink);
        ActionToString(DeleteAccessLogSettings);
        ActionToString(DeleteApi);
        ActionToString(DeleteApiMapping);
        ActionToString(DeleteAuthorizer);
        ActionToString(DeleteCorsConfiguration);
        ActionToString(DeleteDeployment);
        ActionToString(DeleteDomainName);
        ActionToString(DeleteIntegration);
        ActionToString(DeleteIntegrationResponse);
        ActionToString(DeleteModel);
        ActionToString(DeleteRoute);
        ActionToString(DeleteRouteRequestParameter);
        ActionToString(DeleteRouteResponse);
        ActionToString(DeleteRouteSettings);
        ActionToString(DeleteStage);
        ActionToString(DeleteVpcLink);
        ActionToString(ExportApi);
        ActionToString(GetApi);
        ActionToString(GetApiMapping);
        ActionToString(GetApiMappings);
        ActionToString(GetApis);
        ActionToString(GetAuthorizer);
        ActionToString(GetAuthorizers);
        ActionToString(GetDeployment);
        ActionToString(GetDeployments);
        ActionToString(GetDomainName);
        ActionToString(GetDomainNames);
        ActionToString(GetIntegration);
        ActionToString(GetIntegrationResponse);
        ActionToString(GetIntegrationResponses);
        ActionToString(GetIntegrations);
        ActionToString(GetModel);
        ActionToString(GetModelTemplate);
        ActionToString(GetModels);
        ActionToString(GetRoute);
        ActionToString(GetRouteResponse);
        ActionToString(GetRouteResponses);
        ActionToString(GetRoutes);
        ActionToString(GetStage);
        ActionToString(GetStages);
        ActionToString(GetTags);
        ActionToString(GetVpcLink);
        ActionToString(GetVpcLinks);
        ActionToString(ImportApi);
        ActionToString(ReimportApi);
        ActionToString(ResetAuthorizersCache);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateApi);
        ActionToString(UpdateApiMapping);
        ActionToString(UpdateAuthorizer);
        ActionToString(UpdateDeployment);
        ActionToString(UpdateDomainName);
        ActionToString(UpdateIntegration);
        ActionToString(UpdateIntegrationResponse);
        ActionToString(UpdateModel);
        ActionToString(UpdateRoute);
        ActionToString(UpdateRouteResponse);
        ActionToString(UpdateStage);
        ActionToString(UpdateVpcLink);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ApiGatewayV2
} // namespace QtAws
