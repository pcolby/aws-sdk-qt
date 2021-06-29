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

#include "greengrassrequest.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GreengrassRequest
 * \brief The GreengrassRequest class provides an interface for Greengrass requests.
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * \enum GreengrassRequest::Action
 *
 * This enum describes the actions that can be performed as Greengrass
 * requests.
 *
 * \value AssociateRoleToGroupAction Greengrass AssociateRoleToGroup action.
 * \value AssociateServiceRoleToAccountAction Greengrass AssociateServiceRoleToAccount action.
 * \value CreateConnectorDefinitionAction Greengrass CreateConnectorDefinition action.
 * \value CreateConnectorDefinitionVersionAction Greengrass CreateConnectorDefinitionVersion action.
 * \value CreateCoreDefinitionAction Greengrass CreateCoreDefinition action.
 * \value CreateCoreDefinitionVersionAction Greengrass CreateCoreDefinitionVersion action.
 * \value CreateDeploymentAction Greengrass CreateDeployment action.
 * \value CreateDeviceDefinitionAction Greengrass CreateDeviceDefinition action.
 * \value CreateDeviceDefinitionVersionAction Greengrass CreateDeviceDefinitionVersion action.
 * \value CreateFunctionDefinitionAction Greengrass CreateFunctionDefinition action.
 * \value CreateFunctionDefinitionVersionAction Greengrass CreateFunctionDefinitionVersion action.
 * \value CreateGroupAction Greengrass CreateGroup action.
 * \value CreateGroupCertificateAuthorityAction Greengrass CreateGroupCertificateAuthority action.
 * \value CreateGroupVersionAction Greengrass CreateGroupVersion action.
 * \value CreateLoggerDefinitionAction Greengrass CreateLoggerDefinition action.
 * \value CreateLoggerDefinitionVersionAction Greengrass CreateLoggerDefinitionVersion action.
 * \value CreateResourceDefinitionAction Greengrass CreateResourceDefinition action.
 * \value CreateResourceDefinitionVersionAction Greengrass CreateResourceDefinitionVersion action.
 * \value CreateSoftwareUpdateJobAction Greengrass CreateSoftwareUpdateJob action.
 * \value CreateSubscriptionDefinitionAction Greengrass CreateSubscriptionDefinition action.
 * \value CreateSubscriptionDefinitionVersionAction Greengrass CreateSubscriptionDefinitionVersion action.
 * \value DeleteConnectorDefinitionAction Greengrass DeleteConnectorDefinition action.
 * \value DeleteCoreDefinitionAction Greengrass DeleteCoreDefinition action.
 * \value DeleteDeviceDefinitionAction Greengrass DeleteDeviceDefinition action.
 * \value DeleteFunctionDefinitionAction Greengrass DeleteFunctionDefinition action.
 * \value DeleteGroupAction Greengrass DeleteGroup action.
 * \value DeleteLoggerDefinitionAction Greengrass DeleteLoggerDefinition action.
 * \value DeleteResourceDefinitionAction Greengrass DeleteResourceDefinition action.
 * \value DeleteSubscriptionDefinitionAction Greengrass DeleteSubscriptionDefinition action.
 * \value DisassociateRoleFromGroupAction Greengrass DisassociateRoleFromGroup action.
 * \value DisassociateServiceRoleFromAccountAction Greengrass DisassociateServiceRoleFromAccount action.
 * \value GetAssociatedRoleAction Greengrass GetAssociatedRole action.
 * \value GetBulkDeploymentStatusAction Greengrass GetBulkDeploymentStatus action.
 * \value GetConnectivityInfoAction Greengrass GetConnectivityInfo action.
 * \value GetConnectorDefinitionAction Greengrass GetConnectorDefinition action.
 * \value GetConnectorDefinitionVersionAction Greengrass GetConnectorDefinitionVersion action.
 * \value GetCoreDefinitionAction Greengrass GetCoreDefinition action.
 * \value GetCoreDefinitionVersionAction Greengrass GetCoreDefinitionVersion action.
 * \value GetDeploymentStatusAction Greengrass GetDeploymentStatus action.
 * \value GetDeviceDefinitionAction Greengrass GetDeviceDefinition action.
 * \value GetDeviceDefinitionVersionAction Greengrass GetDeviceDefinitionVersion action.
 * \value GetFunctionDefinitionAction Greengrass GetFunctionDefinition action.
 * \value GetFunctionDefinitionVersionAction Greengrass GetFunctionDefinitionVersion action.
 * \value GetGroupAction Greengrass GetGroup action.
 * \value GetGroupCertificateAuthorityAction Greengrass GetGroupCertificateAuthority action.
 * \value GetGroupCertificateConfigurationAction Greengrass GetGroupCertificateConfiguration action.
 * \value GetGroupVersionAction Greengrass GetGroupVersion action.
 * \value GetLoggerDefinitionAction Greengrass GetLoggerDefinition action.
 * \value GetLoggerDefinitionVersionAction Greengrass GetLoggerDefinitionVersion action.
 * \value GetResourceDefinitionAction Greengrass GetResourceDefinition action.
 * \value GetResourceDefinitionVersionAction Greengrass GetResourceDefinitionVersion action.
 * \value GetServiceRoleForAccountAction Greengrass GetServiceRoleForAccount action.
 * \value GetSubscriptionDefinitionAction Greengrass GetSubscriptionDefinition action.
 * \value GetSubscriptionDefinitionVersionAction Greengrass GetSubscriptionDefinitionVersion action.
 * \value GetThingRuntimeConfigurationAction Greengrass GetThingRuntimeConfiguration action.
 * \value ListBulkDeploymentDetailedReportsAction Greengrass ListBulkDeploymentDetailedReports action.
 * \value ListBulkDeploymentsAction Greengrass ListBulkDeployments action.
 * \value ListConnectorDefinitionVersionsAction Greengrass ListConnectorDefinitionVersions action.
 * \value ListConnectorDefinitionsAction Greengrass ListConnectorDefinitions action.
 * \value ListCoreDefinitionVersionsAction Greengrass ListCoreDefinitionVersions action.
 * \value ListCoreDefinitionsAction Greengrass ListCoreDefinitions action.
 * \value ListDeploymentsAction Greengrass ListDeployments action.
 * \value ListDeviceDefinitionVersionsAction Greengrass ListDeviceDefinitionVersions action.
 * \value ListDeviceDefinitionsAction Greengrass ListDeviceDefinitions action.
 * \value ListFunctionDefinitionVersionsAction Greengrass ListFunctionDefinitionVersions action.
 * \value ListFunctionDefinitionsAction Greengrass ListFunctionDefinitions action.
 * \value ListGroupCertificateAuthoritiesAction Greengrass ListGroupCertificateAuthorities action.
 * \value ListGroupVersionsAction Greengrass ListGroupVersions action.
 * \value ListGroupsAction Greengrass ListGroups action.
 * \value ListLoggerDefinitionVersionsAction Greengrass ListLoggerDefinitionVersions action.
 * \value ListLoggerDefinitionsAction Greengrass ListLoggerDefinitions action.
 * \value ListResourceDefinitionVersionsAction Greengrass ListResourceDefinitionVersions action.
 * \value ListResourceDefinitionsAction Greengrass ListResourceDefinitions action.
 * \value ListSubscriptionDefinitionVersionsAction Greengrass ListSubscriptionDefinitionVersions action.
 * \value ListSubscriptionDefinitionsAction Greengrass ListSubscriptionDefinitions action.
 * \value ListTagsForResourceAction Greengrass ListTagsForResource action.
 * \value ResetDeploymentsAction Greengrass ResetDeployments action.
 * \value StartBulkDeploymentAction Greengrass StartBulkDeployment action.
 * \value StopBulkDeploymentAction Greengrass StopBulkDeployment action.
 * \value TagResourceAction Greengrass TagResource action.
 * \value UntagResourceAction Greengrass UntagResource action.
 * \value UpdateConnectivityInfoAction Greengrass UpdateConnectivityInfo action.
 * \value UpdateConnectorDefinitionAction Greengrass UpdateConnectorDefinition action.
 * \value UpdateCoreDefinitionAction Greengrass UpdateCoreDefinition action.
 * \value UpdateDeviceDefinitionAction Greengrass UpdateDeviceDefinition action.
 * \value UpdateFunctionDefinitionAction Greengrass UpdateFunctionDefinition action.
 * \value UpdateGroupAction Greengrass UpdateGroup action.
 * \value UpdateGroupCertificateConfigurationAction Greengrass UpdateGroupCertificateConfiguration action.
 * \value UpdateLoggerDefinitionAction Greengrass UpdateLoggerDefinition action.
 * \value UpdateResourceDefinitionAction Greengrass UpdateResourceDefinition action.
 * \value UpdateSubscriptionDefinitionAction Greengrass UpdateSubscriptionDefinition action.
 * \value UpdateThingRuntimeConfigurationAction Greengrass UpdateThingRuntimeConfiguration action.
 */

/*!
 * Constructs a GreengrassRequest object for Greengrass \a action.
 */
GreengrassRequest::GreengrassRequest(const Action action)
    : d_ptr(new GreengrassRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
GreengrassRequest::GreengrassRequest(const GreengrassRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new GreengrassRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the GreengrassRequest object to be equal to \a other.
 */
GreengrassRequest& GreengrassRequest::operator=(const GreengrassRequest &other)
{
    Q_D(GreengrassRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa GreengrassRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GreengrassRequestPrivate.
 */
GreengrassRequest::GreengrassRequest(GreengrassRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the Greengrass action to be performed by this request.
 */
GreengrassRequest::Action GreengrassRequest::action() const
{
    Q_D(const GreengrassRequest);
    return d->action;
}

/*!
 * Returns the name of the Greengrass action to be performed by this request.
 */
QString GreengrassRequest::actionString() const
{
    return GreengrassRequestPrivate::toString(action());
}

/*!
 * Returns the Greengrass API version implemented by this request.
 */
QString GreengrassRequest::apiVersion() const
{
    Q_D(const GreengrassRequest);
    return d->apiVersion;
}

/*!
 * Sets the Greengrass action to be performed by this request to \a action.
 */
void GreengrassRequest::setAction(const Action action)
{
    Q_D(GreengrassRequest);
    d->action = action;
}

/*!
 * Sets the Greengrass API version to include in this request to \a version.
 */
void GreengrassRequest::setApiVersion(const QString &version)
{
    Q_D(GreengrassRequest);
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
bool GreengrassRequest::operator==(const GreengrassRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Greengrass queue name.
 *
 * @par From Greengrass FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Greengrass queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool GreengrassRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int GreengrassRequest::clearParameter(const QString &name)
{
    Q_D(GreengrassRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void GreengrassRequest::clearParameters()
{
    Q_D(GreengrassRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant GreengrassRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const GreengrassRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &GreengrassRequest::parameters() const
{
    Q_D(const GreengrassRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void GreengrassRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(GreengrassRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void GreengrassRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(GreengrassRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Greengrass request using the given
 * \a endpoint.
 *
 * This Greengrass implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest GreengrassRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const GreengrassRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Greengrass::GreengrassRequestPrivate
 * \brief The GreengrassRequestPrivate class provides private implementation for GreengrassRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GreengrassRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GreengrassRequestPrivate::GreengrassRequestPrivate(const GreengrassRequest::Action action, GreengrassRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the GreengrassRequest class's copy constructor.
 */
GreengrassRequestPrivate::GreengrassRequestPrivate(const GreengrassRequestPrivate &other,
                                     GreengrassRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts GreengrassRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Greengrass service's Action
 * query parameters.
 */
QString GreengrassRequestPrivate::toString(const GreengrassRequest::Action &action)
{
    #define ActionToString(action) \
        case GreengrassRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateRoleToGroup);
        ActionToString(AssociateServiceRoleToAccount);
        ActionToString(CreateConnectorDefinition);
        ActionToString(CreateConnectorDefinitionVersion);
        ActionToString(CreateCoreDefinition);
        ActionToString(CreateCoreDefinitionVersion);
        ActionToString(CreateDeployment);
        ActionToString(CreateDeviceDefinition);
        ActionToString(CreateDeviceDefinitionVersion);
        ActionToString(CreateFunctionDefinition);
        ActionToString(CreateFunctionDefinitionVersion);
        ActionToString(CreateGroup);
        ActionToString(CreateGroupCertificateAuthority);
        ActionToString(CreateGroupVersion);
        ActionToString(CreateLoggerDefinition);
        ActionToString(CreateLoggerDefinitionVersion);
        ActionToString(CreateResourceDefinition);
        ActionToString(CreateResourceDefinitionVersion);
        ActionToString(CreateSoftwareUpdateJob);
        ActionToString(CreateSubscriptionDefinition);
        ActionToString(CreateSubscriptionDefinitionVersion);
        ActionToString(DeleteConnectorDefinition);
        ActionToString(DeleteCoreDefinition);
        ActionToString(DeleteDeviceDefinition);
        ActionToString(DeleteFunctionDefinition);
        ActionToString(DeleteGroup);
        ActionToString(DeleteLoggerDefinition);
        ActionToString(DeleteResourceDefinition);
        ActionToString(DeleteSubscriptionDefinition);
        ActionToString(DisassociateRoleFromGroup);
        ActionToString(DisassociateServiceRoleFromAccount);
        ActionToString(GetAssociatedRole);
        ActionToString(GetBulkDeploymentStatus);
        ActionToString(GetConnectivityInfo);
        ActionToString(GetConnectorDefinition);
        ActionToString(GetConnectorDefinitionVersion);
        ActionToString(GetCoreDefinition);
        ActionToString(GetCoreDefinitionVersion);
        ActionToString(GetDeploymentStatus);
        ActionToString(GetDeviceDefinition);
        ActionToString(GetDeviceDefinitionVersion);
        ActionToString(GetFunctionDefinition);
        ActionToString(GetFunctionDefinitionVersion);
        ActionToString(GetGroup);
        ActionToString(GetGroupCertificateAuthority);
        ActionToString(GetGroupCertificateConfiguration);
        ActionToString(GetGroupVersion);
        ActionToString(GetLoggerDefinition);
        ActionToString(GetLoggerDefinitionVersion);
        ActionToString(GetResourceDefinition);
        ActionToString(GetResourceDefinitionVersion);
        ActionToString(GetServiceRoleForAccount);
        ActionToString(GetSubscriptionDefinition);
        ActionToString(GetSubscriptionDefinitionVersion);
        ActionToString(GetThingRuntimeConfiguration);
        ActionToString(ListBulkDeploymentDetailedReports);
        ActionToString(ListBulkDeployments);
        ActionToString(ListConnectorDefinitionVersions);
        ActionToString(ListConnectorDefinitions);
        ActionToString(ListCoreDefinitionVersions);
        ActionToString(ListCoreDefinitions);
        ActionToString(ListDeployments);
        ActionToString(ListDeviceDefinitionVersions);
        ActionToString(ListDeviceDefinitions);
        ActionToString(ListFunctionDefinitionVersions);
        ActionToString(ListFunctionDefinitions);
        ActionToString(ListGroupCertificateAuthorities);
        ActionToString(ListGroupVersions);
        ActionToString(ListGroups);
        ActionToString(ListLoggerDefinitionVersions);
        ActionToString(ListLoggerDefinitions);
        ActionToString(ListResourceDefinitionVersions);
        ActionToString(ListResourceDefinitions);
        ActionToString(ListSubscriptionDefinitionVersions);
        ActionToString(ListSubscriptionDefinitions);
        ActionToString(ListTagsForResource);
        ActionToString(ResetDeployments);
        ActionToString(StartBulkDeployment);
        ActionToString(StopBulkDeployment);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateConnectivityInfo);
        ActionToString(UpdateConnectorDefinition);
        ActionToString(UpdateCoreDefinition);
        ActionToString(UpdateDeviceDefinition);
        ActionToString(UpdateFunctionDefinition);
        ActionToString(UpdateGroup);
        ActionToString(UpdateGroupCertificateConfiguration);
        ActionToString(UpdateLoggerDefinition);
        ActionToString(UpdateResourceDefinition);
        ActionToString(UpdateSubscriptionDefinition);
        ActionToString(UpdateThingRuntimeConfiguration);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Greengrass
} // namespace QtAws
