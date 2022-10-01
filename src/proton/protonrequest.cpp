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

#include "protonrequest.h"
#include "protonrequest_p.h"

namespace QtAws {
namespace Proton {

/*!
 * \class QtAws::Proton::ProtonRequest
 * \brief The ProtonRequest class provides an interface for Proton requests.
 *
 * \inmodule QtAwsProton
 */

/*!
 * \enum ProtonRequest::Action
 *
 * This enum describes the actions that can be performed as Proton
 * requests.
 *
 * \value AcceptEnvironmentAccountConnectionAction Proton AcceptEnvironmentAccountConnection action.
 * \value CancelComponentDeploymentAction Proton CancelComponentDeployment action.
 * \value CancelEnvironmentDeploymentAction Proton CancelEnvironmentDeployment action.
 * \value CancelServiceInstanceDeploymentAction Proton CancelServiceInstanceDeployment action.
 * \value CancelServicePipelineDeploymentAction Proton CancelServicePipelineDeployment action.
 * \value CreateComponentAction Proton CreateComponent action.
 * \value CreateEnvironmentAction Proton CreateEnvironment action.
 * \value CreateEnvironmentAccountConnectionAction Proton CreateEnvironmentAccountConnection action.
 * \value CreateEnvironmentTemplateAction Proton CreateEnvironmentTemplate action.
 * \value CreateEnvironmentTemplateVersionAction Proton CreateEnvironmentTemplateVersion action.
 * \value CreateRepositoryAction Proton CreateRepository action.
 * \value CreateServiceAction Proton CreateService action.
 * \value CreateServiceTemplateAction Proton CreateServiceTemplate action.
 * \value CreateServiceTemplateVersionAction Proton CreateServiceTemplateVersion action.
 * \value CreateTemplateSyncConfigAction Proton CreateTemplateSyncConfig action.
 * \value DeleteComponentAction Proton DeleteComponent action.
 * \value DeleteEnvironmentAction Proton DeleteEnvironment action.
 * \value DeleteEnvironmentAccountConnectionAction Proton DeleteEnvironmentAccountConnection action.
 * \value DeleteEnvironmentTemplateAction Proton DeleteEnvironmentTemplate action.
 * \value DeleteEnvironmentTemplateVersionAction Proton DeleteEnvironmentTemplateVersion action.
 * \value DeleteRepositoryAction Proton DeleteRepository action.
 * \value DeleteServiceAction Proton DeleteService action.
 * \value DeleteServiceTemplateAction Proton DeleteServiceTemplate action.
 * \value DeleteServiceTemplateVersionAction Proton DeleteServiceTemplateVersion action.
 * \value DeleteTemplateSyncConfigAction Proton DeleteTemplateSyncConfig action.
 * \value GetAccountSettingsAction Proton GetAccountSettings action.
 * \value GetComponentAction Proton GetComponent action.
 * \value GetEnvironmentAction Proton GetEnvironment action.
 * \value GetEnvironmentAccountConnectionAction Proton GetEnvironmentAccountConnection action.
 * \value GetEnvironmentTemplateAction Proton GetEnvironmentTemplate action.
 * \value GetEnvironmentTemplateVersionAction Proton GetEnvironmentTemplateVersion action.
 * \value GetRepositoryAction Proton GetRepository action.
 * \value GetRepositorySyncStatusAction Proton GetRepositorySyncStatus action.
 * \value GetServiceAction Proton GetService action.
 * \value GetServiceInstanceAction Proton GetServiceInstance action.
 * \value GetServiceTemplateAction Proton GetServiceTemplate action.
 * \value GetServiceTemplateVersionAction Proton GetServiceTemplateVersion action.
 * \value GetTemplateSyncConfigAction Proton GetTemplateSyncConfig action.
 * \value GetTemplateSyncStatusAction Proton GetTemplateSyncStatus action.
 * \value ListComponentOutputsAction Proton ListComponentOutputs action.
 * \value ListComponentProvisionedResourcesAction Proton ListComponentProvisionedResources action.
 * \value ListComponentsAction Proton ListComponents action.
 * \value ListEnvironmentAccountConnectionsAction Proton ListEnvironmentAccountConnections action.
 * \value ListEnvironmentOutputsAction Proton ListEnvironmentOutputs action.
 * \value ListEnvironmentProvisionedResourcesAction Proton ListEnvironmentProvisionedResources action.
 * \value ListEnvironmentTemplateVersionsAction Proton ListEnvironmentTemplateVersions action.
 * \value ListEnvironmentTemplatesAction Proton ListEnvironmentTemplates action.
 * \value ListEnvironmentsAction Proton ListEnvironments action.
 * \value ListRepositoriesAction Proton ListRepositories action.
 * \value ListRepositorySyncDefinitionsAction Proton ListRepositorySyncDefinitions action.
 * \value ListServiceInstanceOutputsAction Proton ListServiceInstanceOutputs action.
 * \value ListServiceInstanceProvisionedResourcesAction Proton ListServiceInstanceProvisionedResources action.
 * \value ListServiceInstancesAction Proton ListServiceInstances action.
 * \value ListServicePipelineOutputsAction Proton ListServicePipelineOutputs action.
 * \value ListServicePipelineProvisionedResourcesAction Proton ListServicePipelineProvisionedResources action.
 * \value ListServiceTemplateVersionsAction Proton ListServiceTemplateVersions action.
 * \value ListServiceTemplatesAction Proton ListServiceTemplates action.
 * \value ListServicesAction Proton ListServices action.
 * \value ListTagsForResourceAction Proton ListTagsForResource action.
 * \value NotifyResourceDeploymentStatusChangeAction Proton NotifyResourceDeploymentStatusChange action.
 * \value RejectEnvironmentAccountConnectionAction Proton RejectEnvironmentAccountConnection action.
 * \value TagResourceAction Proton TagResource action.
 * \value UntagResourceAction Proton UntagResource action.
 * \value UpdateAccountSettingsAction Proton UpdateAccountSettings action.
 * \value UpdateComponentAction Proton UpdateComponent action.
 * \value UpdateEnvironmentAction Proton UpdateEnvironment action.
 * \value UpdateEnvironmentAccountConnectionAction Proton UpdateEnvironmentAccountConnection action.
 * \value UpdateEnvironmentTemplateAction Proton UpdateEnvironmentTemplate action.
 * \value UpdateEnvironmentTemplateVersionAction Proton UpdateEnvironmentTemplateVersion action.
 * \value UpdateServiceAction Proton UpdateService action.
 * \value UpdateServiceInstanceAction Proton UpdateServiceInstance action.
 * \value UpdateServicePipelineAction Proton UpdateServicePipeline action.
 * \value UpdateServiceTemplateAction Proton UpdateServiceTemplate action.
 * \value UpdateServiceTemplateVersionAction Proton UpdateServiceTemplateVersion action.
 * \value UpdateTemplateSyncConfigAction Proton UpdateTemplateSyncConfig action.
 */

/*!
 * Constructs a ProtonRequest object for Proton \a action.
 */
ProtonRequest::ProtonRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ProtonRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ProtonRequest::ProtonRequest(const ProtonRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ProtonRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ProtonRequest object to be equal to \a other.
 */
ProtonRequest& ProtonRequest::operator=(const ProtonRequest &other)
{
    Q_D(ProtonRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ProtonRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ProtonRequestPrivate.
 */
ProtonRequest::ProtonRequest(ProtonRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Proton action to be performed by this request.
 */
ProtonRequest::Action ProtonRequest::action() const
{
    Q_D(const ProtonRequest);
    return d->action;
}

/*!
 * Returns the name of the Proton action to be performed by this request.
 */
QString ProtonRequest::actionString() const
{
    return ProtonRequestPrivate::toString(action());
}

/*!
 * Returns the Proton API version implemented by this request.
 */
QString ProtonRequest::apiVersion() const
{
    Q_D(const ProtonRequest);
    return d->apiVersion;
}

/*!
 * Sets the Proton action to be performed by this request to \a action.
 */
void ProtonRequest::setAction(const Action action)
{
    Q_D(ProtonRequest);
    d->action = action;
}

/*!
 * Sets the Proton API version to include in this request to \a version.
 */
void ProtonRequest::setApiVersion(const QString &version)
{
    Q_D(ProtonRequest);
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
bool ProtonRequest::operator==(const ProtonRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Proton queue name.
 *
 * @par From Proton FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Proton queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ProtonRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ProtonRequest::clearParameter(const QString &name)
{
    Q_D(ProtonRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ProtonRequest::clearParameters()
{
    Q_D(ProtonRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ProtonRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ProtonRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ProtonRequest::parameters() const
{
    Q_D(const ProtonRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ProtonRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ProtonRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ProtonRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ProtonRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Proton request using the given
 * \a endpoint.
 *
 * This Proton implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ProtonRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ProtonRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Proton::ProtonRequestPrivate
 * \brief The ProtonRequestPrivate class provides private implementation for ProtonRequest.
 * \internal
 *
 * \inmodule QtAwsProton
 */

/*!
 * Constructs a ProtonRequestPrivate object for Proton \a action,
 * with public implementation \a q.
 */
ProtonRequestPrivate::ProtonRequestPrivate(const ProtonRequest::Action action, ProtonRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-07-20"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ProtonRequest class's copy constructor.
 */
ProtonRequestPrivate::ProtonRequestPrivate(const ProtonRequestPrivate &other,
                                     ProtonRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ProtonRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Proton service's Action
 * query parameters.
 */
QString ProtonRequestPrivate::toString(const ProtonRequest::Action &action)
{
    #define ActionToString(action) \
        case ProtonRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AcceptEnvironmentAccountConnection);
        ActionToString(CancelComponentDeployment);
        ActionToString(CancelEnvironmentDeployment);
        ActionToString(CancelServiceInstanceDeployment);
        ActionToString(CancelServicePipelineDeployment);
        ActionToString(CreateComponent);
        ActionToString(CreateEnvironment);
        ActionToString(CreateEnvironmentAccountConnection);
        ActionToString(CreateEnvironmentTemplate);
        ActionToString(CreateEnvironmentTemplateVersion);
        ActionToString(CreateRepository);
        ActionToString(CreateService);
        ActionToString(CreateServiceTemplate);
        ActionToString(CreateServiceTemplateVersion);
        ActionToString(CreateTemplateSyncConfig);
        ActionToString(DeleteComponent);
        ActionToString(DeleteEnvironment);
        ActionToString(DeleteEnvironmentAccountConnection);
        ActionToString(DeleteEnvironmentTemplate);
        ActionToString(DeleteEnvironmentTemplateVersion);
        ActionToString(DeleteRepository);
        ActionToString(DeleteService);
        ActionToString(DeleteServiceTemplate);
        ActionToString(DeleteServiceTemplateVersion);
        ActionToString(DeleteTemplateSyncConfig);
        ActionToString(GetAccountSettings);
        ActionToString(GetComponent);
        ActionToString(GetEnvironment);
        ActionToString(GetEnvironmentAccountConnection);
        ActionToString(GetEnvironmentTemplate);
        ActionToString(GetEnvironmentTemplateVersion);
        ActionToString(GetRepository);
        ActionToString(GetRepositorySyncStatus);
        ActionToString(GetService);
        ActionToString(GetServiceInstance);
        ActionToString(GetServiceTemplate);
        ActionToString(GetServiceTemplateVersion);
        ActionToString(GetTemplateSyncConfig);
        ActionToString(GetTemplateSyncStatus);
        ActionToString(ListComponentOutputs);
        ActionToString(ListComponentProvisionedResources);
        ActionToString(ListComponents);
        ActionToString(ListEnvironmentAccountConnections);
        ActionToString(ListEnvironmentOutputs);
        ActionToString(ListEnvironmentProvisionedResources);
        ActionToString(ListEnvironmentTemplateVersions);
        ActionToString(ListEnvironmentTemplates);
        ActionToString(ListEnvironments);
        ActionToString(ListRepositories);
        ActionToString(ListRepositorySyncDefinitions);
        ActionToString(ListServiceInstanceOutputs);
        ActionToString(ListServiceInstanceProvisionedResources);
        ActionToString(ListServiceInstances);
        ActionToString(ListServicePipelineOutputs);
        ActionToString(ListServicePipelineProvisionedResources);
        ActionToString(ListServiceTemplateVersions);
        ActionToString(ListServiceTemplates);
        ActionToString(ListServices);
        ActionToString(ListTagsForResource);
        ActionToString(NotifyResourceDeploymentStatusChange);
        ActionToString(RejectEnvironmentAccountConnection);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateAccountSettings);
        ActionToString(UpdateComponent);
        ActionToString(UpdateEnvironment);
        ActionToString(UpdateEnvironmentAccountConnection);
        ActionToString(UpdateEnvironmentTemplate);
        ActionToString(UpdateEnvironmentTemplateVersion);
        ActionToString(UpdateService);
        ActionToString(UpdateServiceInstance);
        ActionToString(UpdateServicePipeline);
        ActionToString(UpdateServiceTemplate);
        ActionToString(UpdateServiceTemplateVersion);
        ActionToString(UpdateTemplateSyncConfig);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Proton
} // namespace QtAws
