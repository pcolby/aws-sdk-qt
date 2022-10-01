// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "quicksightrequest.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::QuickSightRequest
 * \brief The QuickSightRequest class provides an interface for QuickSight requests.
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * \enum QuickSightRequest::Action
 *
 * This enum describes the actions that can be performed as QuickSight
 * requests.
 *
 * \value CancelIngestionAction QuickSight CancelIngestion action.
 * \value CreateAccountCustomizationAction QuickSight CreateAccountCustomization action.
 * \value CreateAccountSubscriptionAction QuickSight CreateAccountSubscription action.
 * \value CreateAnalysisAction QuickSight CreateAnalysis action.
 * \value CreateDashboardAction QuickSight CreateDashboard action.
 * \value CreateDataSetAction QuickSight CreateDataSet action.
 * \value CreateDataSourceAction QuickSight CreateDataSource action.
 * \value CreateFolderAction QuickSight CreateFolder action.
 * \value CreateFolderMembershipAction QuickSight CreateFolderMembership action.
 * \value CreateGroupAction QuickSight CreateGroup action.
 * \value CreateGroupMembershipAction QuickSight CreateGroupMembership action.
 * \value CreateIAMPolicyAssignmentAction QuickSight CreateIAMPolicyAssignment action.
 * \value CreateIngestionAction QuickSight CreateIngestion action.
 * \value CreateNamespaceAction QuickSight CreateNamespace action.
 * \value CreateTemplateAction QuickSight CreateTemplate action.
 * \value CreateTemplateAliasAction QuickSight CreateTemplateAlias action.
 * \value CreateThemeAction QuickSight CreateTheme action.
 * \value CreateThemeAliasAction QuickSight CreateThemeAlias action.
 * \value DeleteAccountCustomizationAction QuickSight DeleteAccountCustomization action.
 * \value DeleteAnalysisAction QuickSight DeleteAnalysis action.
 * \value DeleteDashboardAction QuickSight DeleteDashboard action.
 * \value DeleteDataSetAction QuickSight DeleteDataSet action.
 * \value DeleteDataSourceAction QuickSight DeleteDataSource action.
 * \value DeleteFolderAction QuickSight DeleteFolder action.
 * \value DeleteFolderMembershipAction QuickSight DeleteFolderMembership action.
 * \value DeleteGroupAction QuickSight DeleteGroup action.
 * \value DeleteGroupMembershipAction QuickSight DeleteGroupMembership action.
 * \value DeleteIAMPolicyAssignmentAction QuickSight DeleteIAMPolicyAssignment action.
 * \value DeleteNamespaceAction QuickSight DeleteNamespace action.
 * \value DeleteTemplateAction QuickSight DeleteTemplate action.
 * \value DeleteTemplateAliasAction QuickSight DeleteTemplateAlias action.
 * \value DeleteThemeAction QuickSight DeleteTheme action.
 * \value DeleteThemeAliasAction QuickSight DeleteThemeAlias action.
 * \value DeleteUserAction QuickSight DeleteUser action.
 * \value DeleteUserByPrincipalIdAction QuickSight DeleteUserByPrincipalId action.
 * \value DescribeAccountCustomizationAction QuickSight DescribeAccountCustomization action.
 * \value DescribeAccountSettingsAction QuickSight DescribeAccountSettings action.
 * \value DescribeAccountSubscriptionAction QuickSight DescribeAccountSubscription action.
 * \value DescribeAnalysisAction QuickSight DescribeAnalysis action.
 * \value DescribeAnalysisPermissionsAction QuickSight DescribeAnalysisPermissions action.
 * \value DescribeDashboardAction QuickSight DescribeDashboard action.
 * \value DescribeDashboardPermissionsAction QuickSight DescribeDashboardPermissions action.
 * \value DescribeDataSetAction QuickSight DescribeDataSet action.
 * \value DescribeDataSetPermissionsAction QuickSight DescribeDataSetPermissions action.
 * \value DescribeDataSourceAction QuickSight DescribeDataSource action.
 * \value DescribeDataSourcePermissionsAction QuickSight DescribeDataSourcePermissions action.
 * \value DescribeFolderAction QuickSight DescribeFolder action.
 * \value DescribeFolderPermissionsAction QuickSight DescribeFolderPermissions action.
 * \value DescribeFolderResolvedPermissionsAction QuickSight DescribeFolderResolvedPermissions action.
 * \value DescribeGroupAction QuickSight DescribeGroup action.
 * \value DescribeGroupMembershipAction QuickSight DescribeGroupMembership action.
 * \value DescribeIAMPolicyAssignmentAction QuickSight DescribeIAMPolicyAssignment action.
 * \value DescribeIngestionAction QuickSight DescribeIngestion action.
 * \value DescribeIpRestrictionAction QuickSight DescribeIpRestriction action.
 * \value DescribeNamespaceAction QuickSight DescribeNamespace action.
 * \value DescribeTemplateAction QuickSight DescribeTemplate action.
 * \value DescribeTemplateAliasAction QuickSight DescribeTemplateAlias action.
 * \value DescribeTemplatePermissionsAction QuickSight DescribeTemplatePermissions action.
 * \value DescribeThemeAction QuickSight DescribeTheme action.
 * \value DescribeThemeAliasAction QuickSight DescribeThemeAlias action.
 * \value DescribeThemePermissionsAction QuickSight DescribeThemePermissions action.
 * \value DescribeUserAction QuickSight DescribeUser action.
 * \value GenerateEmbedUrlForAnonymousUserAction QuickSight GenerateEmbedUrlForAnonymousUser action.
 * \value GenerateEmbedUrlForRegisteredUserAction QuickSight GenerateEmbedUrlForRegisteredUser action.
 * \value GetDashboardEmbedUrlAction QuickSight GetDashboardEmbedUrl action.
 * \value GetSessionEmbedUrlAction QuickSight GetSessionEmbedUrl action.
 * \value ListAnalysesAction QuickSight ListAnalyses action.
 * \value ListDashboardVersionsAction QuickSight ListDashboardVersions action.
 * \value ListDashboardsAction QuickSight ListDashboards action.
 * \value ListDataSetsAction QuickSight ListDataSets action.
 * \value ListDataSourcesAction QuickSight ListDataSources action.
 * \value ListFolderMembersAction QuickSight ListFolderMembers action.
 * \value ListFoldersAction QuickSight ListFolders action.
 * \value ListGroupMembershipsAction QuickSight ListGroupMemberships action.
 * \value ListGroupsAction QuickSight ListGroups action.
 * \value ListIAMPolicyAssignmentsAction QuickSight ListIAMPolicyAssignments action.
 * \value ListIAMPolicyAssignmentsForUserAction QuickSight ListIAMPolicyAssignmentsForUser action.
 * \value ListIngestionsAction QuickSight ListIngestions action.
 * \value ListNamespacesAction QuickSight ListNamespaces action.
 * \value ListTagsForResourceAction QuickSight ListTagsForResource action.
 * \value ListTemplateAliasesAction QuickSight ListTemplateAliases action.
 * \value ListTemplateVersionsAction QuickSight ListTemplateVersions action.
 * \value ListTemplatesAction QuickSight ListTemplates action.
 * \value ListThemeAliasesAction QuickSight ListThemeAliases action.
 * \value ListThemeVersionsAction QuickSight ListThemeVersions action.
 * \value ListThemesAction QuickSight ListThemes action.
 * \value ListUserGroupsAction QuickSight ListUserGroups action.
 * \value ListUsersAction QuickSight ListUsers action.
 * \value RegisterUserAction QuickSight RegisterUser action.
 * \value RestoreAnalysisAction QuickSight RestoreAnalysis action.
 * \value SearchAnalysesAction QuickSight SearchAnalyses action.
 * \value SearchDashboardsAction QuickSight SearchDashboards action.
 * \value SearchFoldersAction QuickSight SearchFolders action.
 * \value SearchGroupsAction QuickSight SearchGroups action.
 * \value TagResourceAction QuickSight TagResource action.
 * \value UntagResourceAction QuickSight UntagResource action.
 * \value UpdateAccountCustomizationAction QuickSight UpdateAccountCustomization action.
 * \value UpdateAccountSettingsAction QuickSight UpdateAccountSettings action.
 * \value UpdateAnalysisAction QuickSight UpdateAnalysis action.
 * \value UpdateAnalysisPermissionsAction QuickSight UpdateAnalysisPermissions action.
 * \value UpdateDashboardAction QuickSight UpdateDashboard action.
 * \value UpdateDashboardPermissionsAction QuickSight UpdateDashboardPermissions action.
 * \value UpdateDashboardPublishedVersionAction QuickSight UpdateDashboardPublishedVersion action.
 * \value UpdateDataSetAction QuickSight UpdateDataSet action.
 * \value UpdateDataSetPermissionsAction QuickSight UpdateDataSetPermissions action.
 * \value UpdateDataSourceAction QuickSight UpdateDataSource action.
 * \value UpdateDataSourcePermissionsAction QuickSight UpdateDataSourcePermissions action.
 * \value UpdateFolderAction QuickSight UpdateFolder action.
 * \value UpdateFolderPermissionsAction QuickSight UpdateFolderPermissions action.
 * \value UpdateGroupAction QuickSight UpdateGroup action.
 * \value UpdateIAMPolicyAssignmentAction QuickSight UpdateIAMPolicyAssignment action.
 * \value UpdateIpRestrictionAction QuickSight UpdateIpRestriction action.
 * \value UpdatePublicSharingSettingsAction QuickSight UpdatePublicSharingSettings action.
 * \value UpdateTemplateAction QuickSight UpdateTemplate action.
 * \value UpdateTemplateAliasAction QuickSight UpdateTemplateAlias action.
 * \value UpdateTemplatePermissionsAction QuickSight UpdateTemplatePermissions action.
 * \value UpdateThemeAction QuickSight UpdateTheme action.
 * \value UpdateThemeAliasAction QuickSight UpdateThemeAlias action.
 * \value UpdateThemePermissionsAction QuickSight UpdateThemePermissions action.
 * \value UpdateUserAction QuickSight UpdateUser action.
 */

/*!
 * Constructs a QuickSightRequest object for QuickSight \a action.
 */
QuickSightRequest::QuickSightRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new QuickSightRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
QuickSightRequest::QuickSightRequest(const QuickSightRequest &other)
    : QtAws::Core::AwsAbstractRequest(new QuickSightRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the QuickSightRequest object to be equal to \a other.
 */
QuickSightRequest& QuickSightRequest::operator=(const QuickSightRequest &other)
{
    Q_D(QuickSightRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa QuickSightRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from QuickSightRequestPrivate.
 */
QuickSightRequest::QuickSightRequest(QuickSightRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the QuickSight action to be performed by this request.
 */
QuickSightRequest::Action QuickSightRequest::action() const
{
    Q_D(const QuickSightRequest);
    return d->action;
}

/*!
 * Returns the name of the QuickSight action to be performed by this request.
 */
QString QuickSightRequest::actionString() const
{
    return QuickSightRequestPrivate::toString(action());
}

/*!
 * Returns the QuickSight API version implemented by this request.
 */
QString QuickSightRequest::apiVersion() const
{
    Q_D(const QuickSightRequest);
    return d->apiVersion;
}

/*!
 * Sets the QuickSight action to be performed by this request to \a action.
 */
void QuickSightRequest::setAction(const Action action)
{
    Q_D(QuickSightRequest);
    d->action = action;
}

/*!
 * Sets the QuickSight API version to include in this request to \a version.
 */
void QuickSightRequest::setApiVersion(const QString &version)
{
    Q_D(QuickSightRequest);
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
bool QuickSightRequest::operator==(const QuickSightRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid QuickSight queue name.
 *
 * @par From QuickSight FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid QuickSight queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool QuickSightRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int QuickSightRequest::clearParameter(const QString &name)
{
    Q_D(QuickSightRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void QuickSightRequest::clearParameters()
{
    Q_D(QuickSightRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant QuickSightRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const QuickSightRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &QuickSightRequest::parameters() const
{
    Q_D(const QuickSightRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void QuickSightRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(QuickSightRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void QuickSightRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(QuickSightRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the QuickSight request using the given
 * \a endpoint.
 *
 * This QuickSight implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest QuickSightRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const QuickSightRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::QuickSight::QuickSightRequestPrivate
 * \brief The QuickSightRequestPrivate class provides private implementation for QuickSightRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a QuickSightRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
QuickSightRequestPrivate::QuickSightRequestPrivate(const QuickSightRequest::Action action, QuickSightRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-04-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the QuickSightRequest class's copy constructor.
 */
QuickSightRequestPrivate::QuickSightRequestPrivate(const QuickSightRequestPrivate &other,
                                     QuickSightRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts QuickSightRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the QuickSight service's Action
 * query parameters.
 */
QString QuickSightRequestPrivate::toString(const QuickSightRequest::Action &action)
{
    #define ActionToString(action) \
        case QuickSightRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CancelIngestion);
        ActionToString(CreateAccountCustomization);
        ActionToString(CreateAccountSubscription);
        ActionToString(CreateAnalysis);
        ActionToString(CreateDashboard);
        ActionToString(CreateDataSet);
        ActionToString(CreateDataSource);
        ActionToString(CreateFolder);
        ActionToString(CreateFolderMembership);
        ActionToString(CreateGroup);
        ActionToString(CreateGroupMembership);
        ActionToString(CreateIAMPolicyAssignment);
        ActionToString(CreateIngestion);
        ActionToString(CreateNamespace);
        ActionToString(CreateTemplate);
        ActionToString(CreateTemplateAlias);
        ActionToString(CreateTheme);
        ActionToString(CreateThemeAlias);
        ActionToString(DeleteAccountCustomization);
        ActionToString(DeleteAnalysis);
        ActionToString(DeleteDashboard);
        ActionToString(DeleteDataSet);
        ActionToString(DeleteDataSource);
        ActionToString(DeleteFolder);
        ActionToString(DeleteFolderMembership);
        ActionToString(DeleteGroup);
        ActionToString(DeleteGroupMembership);
        ActionToString(DeleteIAMPolicyAssignment);
        ActionToString(DeleteNamespace);
        ActionToString(DeleteTemplate);
        ActionToString(DeleteTemplateAlias);
        ActionToString(DeleteTheme);
        ActionToString(DeleteThemeAlias);
        ActionToString(DeleteUser);
        ActionToString(DeleteUserByPrincipalId);
        ActionToString(DescribeAccountCustomization);
        ActionToString(DescribeAccountSettings);
        ActionToString(DescribeAccountSubscription);
        ActionToString(DescribeAnalysis);
        ActionToString(DescribeAnalysisPermissions);
        ActionToString(DescribeDashboard);
        ActionToString(DescribeDashboardPermissions);
        ActionToString(DescribeDataSet);
        ActionToString(DescribeDataSetPermissions);
        ActionToString(DescribeDataSource);
        ActionToString(DescribeDataSourcePermissions);
        ActionToString(DescribeFolder);
        ActionToString(DescribeFolderPermissions);
        ActionToString(DescribeFolderResolvedPermissions);
        ActionToString(DescribeGroup);
        ActionToString(DescribeGroupMembership);
        ActionToString(DescribeIAMPolicyAssignment);
        ActionToString(DescribeIngestion);
        ActionToString(DescribeIpRestriction);
        ActionToString(DescribeNamespace);
        ActionToString(DescribeTemplate);
        ActionToString(DescribeTemplateAlias);
        ActionToString(DescribeTemplatePermissions);
        ActionToString(DescribeTheme);
        ActionToString(DescribeThemeAlias);
        ActionToString(DescribeThemePermissions);
        ActionToString(DescribeUser);
        ActionToString(GenerateEmbedUrlForAnonymousUser);
        ActionToString(GenerateEmbedUrlForRegisteredUser);
        ActionToString(GetDashboardEmbedUrl);
        ActionToString(GetSessionEmbedUrl);
        ActionToString(ListAnalyses);
        ActionToString(ListDashboardVersions);
        ActionToString(ListDashboards);
        ActionToString(ListDataSets);
        ActionToString(ListDataSources);
        ActionToString(ListFolderMembers);
        ActionToString(ListFolders);
        ActionToString(ListGroupMemberships);
        ActionToString(ListGroups);
        ActionToString(ListIAMPolicyAssignments);
        ActionToString(ListIAMPolicyAssignmentsForUser);
        ActionToString(ListIngestions);
        ActionToString(ListNamespaces);
        ActionToString(ListTagsForResource);
        ActionToString(ListTemplateAliases);
        ActionToString(ListTemplateVersions);
        ActionToString(ListTemplates);
        ActionToString(ListThemeAliases);
        ActionToString(ListThemeVersions);
        ActionToString(ListThemes);
        ActionToString(ListUserGroups);
        ActionToString(ListUsers);
        ActionToString(RegisterUser);
        ActionToString(RestoreAnalysis);
        ActionToString(SearchAnalyses);
        ActionToString(SearchDashboards);
        ActionToString(SearchFolders);
        ActionToString(SearchGroups);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateAccountCustomization);
        ActionToString(UpdateAccountSettings);
        ActionToString(UpdateAnalysis);
        ActionToString(UpdateAnalysisPermissions);
        ActionToString(UpdateDashboard);
        ActionToString(UpdateDashboardPermissions);
        ActionToString(UpdateDashboardPublishedVersion);
        ActionToString(UpdateDataSet);
        ActionToString(UpdateDataSetPermissions);
        ActionToString(UpdateDataSource);
        ActionToString(UpdateDataSourcePermissions);
        ActionToString(UpdateFolder);
        ActionToString(UpdateFolderPermissions);
        ActionToString(UpdateGroup);
        ActionToString(UpdateIAMPolicyAssignment);
        ActionToString(UpdateIpRestriction);
        ActionToString(UpdatePublicSharingSettings);
        ActionToString(UpdateTemplate);
        ActionToString(UpdateTemplateAlias);
        ActionToString(UpdateTemplatePermissions);
        ActionToString(UpdateTheme);
        ActionToString(UpdateThemeAlias);
        ActionToString(UpdateThemePermissions);
        ActionToString(UpdateUser);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace QuickSight
} // namespace QtAws
