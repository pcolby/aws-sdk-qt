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

#include "workspacesrequest.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::WorkSpacesRequest
 * \brief The WorkSpacesRequest class provides an interface for WorkSpaces requests.
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * \enum WorkSpacesRequest::Action
 *
 * This enum describes the actions that can be performed as WorkSpaces
 * requests.
 *
 * \value AssociateConnectionAliasAction WorkSpaces AssociateConnectionAlias action.
 * \value AssociateIpGroupsAction WorkSpaces AssociateIpGroups action.
 * \value AuthorizeIpRulesAction WorkSpaces AuthorizeIpRules action.
 * \value CopyWorkspaceImageAction WorkSpaces CopyWorkspaceImage action.
 * \value CreateConnectClientAddInAction WorkSpaces CreateConnectClientAddIn action.
 * \value CreateConnectionAliasAction WorkSpaces CreateConnectionAlias action.
 * \value CreateIpGroupAction WorkSpaces CreateIpGroup action.
 * \value CreateTagsAction WorkSpaces CreateTags action.
 * \value CreateUpdatedWorkspaceImageAction WorkSpaces CreateUpdatedWorkspaceImage action.
 * \value CreateWorkspaceBundleAction WorkSpaces CreateWorkspaceBundle action.
 * \value CreateWorkspaceImageAction WorkSpaces CreateWorkspaceImage action.
 * \value CreateWorkspacesAction WorkSpaces CreateWorkspaces action.
 * \value DeleteClientBrandingAction WorkSpaces DeleteClientBranding action.
 * \value DeleteConnectClientAddInAction WorkSpaces DeleteConnectClientAddIn action.
 * \value DeleteConnectionAliasAction WorkSpaces DeleteConnectionAlias action.
 * \value DeleteIpGroupAction WorkSpaces DeleteIpGroup action.
 * \value DeleteTagsAction WorkSpaces DeleteTags action.
 * \value DeleteWorkspaceBundleAction WorkSpaces DeleteWorkspaceBundle action.
 * \value DeleteWorkspaceImageAction WorkSpaces DeleteWorkspaceImage action.
 * \value DeregisterWorkspaceDirectoryAction WorkSpaces DeregisterWorkspaceDirectory action.
 * \value DescribeAccountAction WorkSpaces DescribeAccount action.
 * \value DescribeAccountModificationsAction WorkSpaces DescribeAccountModifications action.
 * \value DescribeClientBrandingAction WorkSpaces DescribeClientBranding action.
 * \value DescribeClientPropertiesAction WorkSpaces DescribeClientProperties action.
 * \value DescribeConnectClientAddInsAction WorkSpaces DescribeConnectClientAddIns action.
 * \value DescribeConnectionAliasPermissionsAction WorkSpaces DescribeConnectionAliasPermissions action.
 * \value DescribeConnectionAliasesAction WorkSpaces DescribeConnectionAliases action.
 * \value DescribeIpGroupsAction WorkSpaces DescribeIpGroups action.
 * \value DescribeTagsAction WorkSpaces DescribeTags action.
 * \value DescribeWorkspaceBundlesAction WorkSpaces DescribeWorkspaceBundles action.
 * \value DescribeWorkspaceDirectoriesAction WorkSpaces DescribeWorkspaceDirectories action.
 * \value DescribeWorkspaceImagePermissionsAction WorkSpaces DescribeWorkspaceImagePermissions action.
 * \value DescribeWorkspaceImagesAction WorkSpaces DescribeWorkspaceImages action.
 * \value DescribeWorkspaceSnapshotsAction WorkSpaces DescribeWorkspaceSnapshots action.
 * \value DescribeWorkspacesAction WorkSpaces DescribeWorkspaces action.
 * \value DescribeWorkspacesConnectionStatusAction WorkSpaces DescribeWorkspacesConnectionStatus action.
 * \value DisassociateConnectionAliasAction WorkSpaces DisassociateConnectionAlias action.
 * \value DisassociateIpGroupsAction WorkSpaces DisassociateIpGroups action.
 * \value ImportClientBrandingAction WorkSpaces ImportClientBranding action.
 * \value ImportWorkspaceImageAction WorkSpaces ImportWorkspaceImage action.
 * \value ListAvailableManagementCidrRangesAction WorkSpaces ListAvailableManagementCidrRanges action.
 * \value MigrateWorkspaceAction WorkSpaces MigrateWorkspace action.
 * \value ModifyAccountAction WorkSpaces ModifyAccount action.
 * \value ModifyClientPropertiesAction WorkSpaces ModifyClientProperties action.
 * \value ModifySamlPropertiesAction WorkSpaces ModifySamlProperties action.
 * \value ModifySelfservicePermissionsAction WorkSpaces ModifySelfservicePermissions action.
 * \value ModifyWorkspaceAccessPropertiesAction WorkSpaces ModifyWorkspaceAccessProperties action.
 * \value ModifyWorkspaceCreationPropertiesAction WorkSpaces ModifyWorkspaceCreationProperties action.
 * \value ModifyWorkspacePropertiesAction WorkSpaces ModifyWorkspaceProperties action.
 * \value ModifyWorkspaceStateAction WorkSpaces ModifyWorkspaceState action.
 * \value RebootWorkspacesAction WorkSpaces RebootWorkspaces action.
 * \value RebuildWorkspacesAction WorkSpaces RebuildWorkspaces action.
 * \value RegisterWorkspaceDirectoryAction WorkSpaces RegisterWorkspaceDirectory action.
 * \value RestoreWorkspaceAction WorkSpaces RestoreWorkspace action.
 * \value RevokeIpRulesAction WorkSpaces RevokeIpRules action.
 * \value StartWorkspacesAction WorkSpaces StartWorkspaces action.
 * \value StopWorkspacesAction WorkSpaces StopWorkspaces action.
 * \value TerminateWorkspacesAction WorkSpaces TerminateWorkspaces action.
 * \value UpdateConnectClientAddInAction WorkSpaces UpdateConnectClientAddIn action.
 * \value UpdateConnectionAliasPermissionAction WorkSpaces UpdateConnectionAliasPermission action.
 * \value UpdateRulesOfIpGroupAction WorkSpaces UpdateRulesOfIpGroup action.
 * \value UpdateWorkspaceBundleAction WorkSpaces UpdateWorkspaceBundle action.
 * \value UpdateWorkspaceImagePermissionAction WorkSpaces UpdateWorkspaceImagePermission action.
 */

/*!
 * Constructs a WorkSpacesRequest object for WorkSpaces \a action.
 */
WorkSpacesRequest::WorkSpacesRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new WorkSpacesRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
WorkSpacesRequest::WorkSpacesRequest(const WorkSpacesRequest &other)
    : QtAws::Core::AwsAbstractRequest(new WorkSpacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the WorkSpacesRequest object to be equal to \a other.
 */
WorkSpacesRequest& WorkSpacesRequest::operator=(const WorkSpacesRequest &other)
{
    Q_D(WorkSpacesRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa WorkSpacesRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WorkSpacesRequestPrivate.
 */
WorkSpacesRequest::WorkSpacesRequest(WorkSpacesRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the WorkSpaces action to be performed by this request.
 */
WorkSpacesRequest::Action WorkSpacesRequest::action() const
{
    Q_D(const WorkSpacesRequest);
    return d->action;
}

/*!
 * Returns the name of the WorkSpaces action to be performed by this request.
 */
QString WorkSpacesRequest::actionString() const
{
    return WorkSpacesRequestPrivate::toString(action());
}

/*!
 * Returns the WorkSpaces API version implemented by this request.
 */
QString WorkSpacesRequest::apiVersion() const
{
    Q_D(const WorkSpacesRequest);
    return d->apiVersion;
}

/*!
 * Sets the WorkSpaces action to be performed by this request to \a action.
 */
void WorkSpacesRequest::setAction(const Action action)
{
    Q_D(WorkSpacesRequest);
    d->action = action;
}

/*!
 * Sets the WorkSpaces API version to include in this request to \a version.
 */
void WorkSpacesRequest::setApiVersion(const QString &version)
{
    Q_D(WorkSpacesRequest);
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
bool WorkSpacesRequest::operator==(const WorkSpacesRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid WorkSpaces queue name.
 *
 * @par From WorkSpaces FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid WorkSpaces queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool WorkSpacesRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int WorkSpacesRequest::clearParameter(const QString &name)
{
    Q_D(WorkSpacesRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void WorkSpacesRequest::clearParameters()
{
    Q_D(WorkSpacesRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant WorkSpacesRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const WorkSpacesRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &WorkSpacesRequest::parameters() const
{
    Q_D(const WorkSpacesRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void WorkSpacesRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(WorkSpacesRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void WorkSpacesRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(WorkSpacesRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the WorkSpaces request using the given
 * \a endpoint.
 *
 * This WorkSpaces implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest WorkSpacesRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const WorkSpacesRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::WorkSpaces::WorkSpacesRequestPrivate
 * \brief The WorkSpacesRequestPrivate class provides private implementation for WorkSpacesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a WorkSpacesRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
WorkSpacesRequestPrivate::WorkSpacesRequestPrivate(const WorkSpacesRequest::Action action, WorkSpacesRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2015-04-08"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the WorkSpacesRequest class's copy constructor.
 */
WorkSpacesRequestPrivate::WorkSpacesRequestPrivate(const WorkSpacesRequestPrivate &other,
                                     WorkSpacesRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts WorkSpacesRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the WorkSpaces service's Action
 * query parameters.
 */
QString WorkSpacesRequestPrivate::toString(const WorkSpacesRequest::Action &action)
{
    #define ActionToString(action) \
        case WorkSpacesRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateConnectionAlias);
        ActionToString(AssociateIpGroups);
        ActionToString(AuthorizeIpRules);
        ActionToString(CopyWorkspaceImage);
        ActionToString(CreateConnectClientAddIn);
        ActionToString(CreateConnectionAlias);
        ActionToString(CreateIpGroup);
        ActionToString(CreateTags);
        ActionToString(CreateUpdatedWorkspaceImage);
        ActionToString(CreateWorkspaceBundle);
        ActionToString(CreateWorkspaceImage);
        ActionToString(CreateWorkspaces);
        ActionToString(DeleteClientBranding);
        ActionToString(DeleteConnectClientAddIn);
        ActionToString(DeleteConnectionAlias);
        ActionToString(DeleteIpGroup);
        ActionToString(DeleteTags);
        ActionToString(DeleteWorkspaceBundle);
        ActionToString(DeleteWorkspaceImage);
        ActionToString(DeregisterWorkspaceDirectory);
        ActionToString(DescribeAccount);
        ActionToString(DescribeAccountModifications);
        ActionToString(DescribeClientBranding);
        ActionToString(DescribeClientProperties);
        ActionToString(DescribeConnectClientAddIns);
        ActionToString(DescribeConnectionAliasPermissions);
        ActionToString(DescribeConnectionAliases);
        ActionToString(DescribeIpGroups);
        ActionToString(DescribeTags);
        ActionToString(DescribeWorkspaceBundles);
        ActionToString(DescribeWorkspaceDirectories);
        ActionToString(DescribeWorkspaceImagePermissions);
        ActionToString(DescribeWorkspaceImages);
        ActionToString(DescribeWorkspaceSnapshots);
        ActionToString(DescribeWorkspaces);
        ActionToString(DescribeWorkspacesConnectionStatus);
        ActionToString(DisassociateConnectionAlias);
        ActionToString(DisassociateIpGroups);
        ActionToString(ImportClientBranding);
        ActionToString(ImportWorkspaceImage);
        ActionToString(ListAvailableManagementCidrRanges);
        ActionToString(MigrateWorkspace);
        ActionToString(ModifyAccount);
        ActionToString(ModifyClientProperties);
        ActionToString(ModifySamlProperties);
        ActionToString(ModifySelfservicePermissions);
        ActionToString(ModifyWorkspaceAccessProperties);
        ActionToString(ModifyWorkspaceCreationProperties);
        ActionToString(ModifyWorkspaceProperties);
        ActionToString(ModifyWorkspaceState);
        ActionToString(RebootWorkspaces);
        ActionToString(RebuildWorkspaces);
        ActionToString(RegisterWorkspaceDirectory);
        ActionToString(RestoreWorkspace);
        ActionToString(RevokeIpRules);
        ActionToString(StartWorkspaces);
        ActionToString(StopWorkspaces);
        ActionToString(TerminateWorkspaces);
        ActionToString(UpdateConnectClientAddIn);
        ActionToString(UpdateConnectionAliasPermission);
        ActionToString(UpdateRulesOfIpGroup);
        ActionToString(UpdateWorkspaceBundle);
        ActionToString(UpdateWorkspaceImagePermission);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace WorkSpaces
} // namespace QtAws
