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

#include "workdocsrequest.h"
#include "workdocsrequest_p.h"

namespace QtAws {
namespace WorkDocs {

/*!
 * \class QtAws::WorkDocs::WorkDocsRequest
 * \brief The WorkDocsRequest class provides an interface for WorkDocs requests.
 *
 * \inmodule QtAwsWorkDocs
 */

/*!
 * \enum WorkDocsRequest::Action
 *
 * This enum describes the actions that can be performed as WorkDocs
 * requests.
 *
 * \value AbortDocumentVersionUploadAction WorkDocs AbortDocumentVersionUpload action.
 * \value ActivateUserAction WorkDocs ActivateUser action.
 * \value AddResourcePermissionsAction WorkDocs AddResourcePermissions action.
 * \value CreateCommentAction WorkDocs CreateComment action.
 * \value CreateCustomMetadataAction WorkDocs CreateCustomMetadata action.
 * \value CreateFolderAction WorkDocs CreateFolder action.
 * \value CreateLabelsAction WorkDocs CreateLabels action.
 * \value CreateNotificationSubscriptionAction WorkDocs CreateNotificationSubscription action.
 * \value CreateUserAction WorkDocs CreateUser action.
 * \value DeactivateUserAction WorkDocs DeactivateUser action.
 * \value DeleteCommentAction WorkDocs DeleteComment action.
 * \value DeleteCustomMetadataAction WorkDocs DeleteCustomMetadata action.
 * \value DeleteDocumentAction WorkDocs DeleteDocument action.
 * \value DeleteFolderAction WorkDocs DeleteFolder action.
 * \value DeleteFolderContentsAction WorkDocs DeleteFolderContents action.
 * \value DeleteLabelsAction WorkDocs DeleteLabels action.
 * \value DeleteNotificationSubscriptionAction WorkDocs DeleteNotificationSubscription action.
 * \value DeleteUserAction WorkDocs DeleteUser action.
 * \value DescribeActivitiesAction WorkDocs DescribeActivities action.
 * \value DescribeCommentsAction WorkDocs DescribeComments action.
 * \value DescribeDocumentVersionsAction WorkDocs DescribeDocumentVersions action.
 * \value DescribeFolderContentsAction WorkDocs DescribeFolderContents action.
 * \value DescribeGroupsAction WorkDocs DescribeGroups action.
 * \value DescribeNotificationSubscriptionsAction WorkDocs DescribeNotificationSubscriptions action.
 * \value DescribeResourcePermissionsAction WorkDocs DescribeResourcePermissions action.
 * \value DescribeRootFoldersAction WorkDocs DescribeRootFolders action.
 * \value DescribeUsersAction WorkDocs DescribeUsers action.
 * \value GetCurrentUserAction WorkDocs GetCurrentUser action.
 * \value GetDocumentAction WorkDocs GetDocument action.
 * \value GetDocumentPathAction WorkDocs GetDocumentPath action.
 * \value GetDocumentVersionAction WorkDocs GetDocumentVersion action.
 * \value GetFolderAction WorkDocs GetFolder action.
 * \value GetFolderPathAction WorkDocs GetFolderPath action.
 * \value GetResourcesAction WorkDocs GetResources action.
 * \value InitiateDocumentVersionUploadAction WorkDocs InitiateDocumentVersionUpload action.
 * \value RemoveAllResourcePermissionsAction WorkDocs RemoveAllResourcePermissions action.
 * \value RemoveResourcePermissionAction WorkDocs RemoveResourcePermission action.
 * \value UpdateDocumentAction WorkDocs UpdateDocument action.
 * \value UpdateDocumentVersionAction WorkDocs UpdateDocumentVersion action.
 * \value UpdateFolderAction WorkDocs UpdateFolder action.
 * \value UpdateUserAction WorkDocs UpdateUser action.
 */

/*!
 * Constructs a WorkDocsRequest object for WorkDocs \a action.
 */
WorkDocsRequest::WorkDocsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new WorkDocsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
WorkDocsRequest::WorkDocsRequest(const WorkDocsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new WorkDocsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the WorkDocsRequest object to be equal to \a other.
 */
WorkDocsRequest& WorkDocsRequest::operator=(const WorkDocsRequest &other)
{
    Q_D(WorkDocsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa WorkDocsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WorkDocsRequestPrivate.
 */
WorkDocsRequest::WorkDocsRequest(WorkDocsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the WorkDocs action to be performed by this request.
 */
WorkDocsRequest::Action WorkDocsRequest::action() const
{
    Q_D(const WorkDocsRequest);
    return d->action;
}

/*!
 * Returns the name of the WorkDocs action to be performed by this request.
 */
QString WorkDocsRequest::actionString() const
{
    return WorkDocsRequestPrivate::toString(action());
}

/*!
 * Returns the WorkDocs API version implemented by this request.
 */
QString WorkDocsRequest::apiVersion() const
{
    Q_D(const WorkDocsRequest);
    return d->apiVersion;
}

/*!
 * Sets the WorkDocs action to be performed by this request to \a action.
 */
void WorkDocsRequest::setAction(const Action action)
{
    Q_D(WorkDocsRequest);
    d->action = action;
}

/*!
 * Sets the WorkDocs API version to include in this request to \a version.
 */
void WorkDocsRequest::setApiVersion(const QString &version)
{
    Q_D(WorkDocsRequest);
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
bool WorkDocsRequest::operator==(const WorkDocsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid WorkDocs queue name.
 *
 * @par From WorkDocs FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid WorkDocs queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool WorkDocsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int WorkDocsRequest::clearParameter(const QString &name)
{
    Q_D(WorkDocsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void WorkDocsRequest::clearParameters()
{
    Q_D(WorkDocsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant WorkDocsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const WorkDocsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &WorkDocsRequest::parameters() const
{
    Q_D(const WorkDocsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void WorkDocsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(WorkDocsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void WorkDocsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(WorkDocsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the WorkDocs request using the given
 * \a endpoint.
 *
 * This WorkDocs implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest WorkDocsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const WorkDocsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::WorkDocs::WorkDocsRequestPrivate
 * \brief The WorkDocsRequestPrivate class provides private implementation for WorkDocsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkDocs
 */

/*!
 * Constructs a WorkDocsRequestPrivate object for WorkDocs \a action,
 * with public implementation \a q.
 */
WorkDocsRequestPrivate::WorkDocsRequestPrivate(const WorkDocsRequest::Action action, WorkDocsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the WorkDocsRequest class's copy constructor.
 */
WorkDocsRequestPrivate::WorkDocsRequestPrivate(const WorkDocsRequestPrivate &other,
                                     WorkDocsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts WorkDocsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the WorkDocs service's Action
 * query parameters.
 */
QString WorkDocsRequestPrivate::toString(const WorkDocsRequest::Action &action)
{
    #define ActionToString(action) \
        case WorkDocsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AbortDocumentVersionUpload);
        ActionToString(ActivateUser);
        ActionToString(AddResourcePermissions);
        ActionToString(CreateComment);
        ActionToString(CreateCustomMetadata);
        ActionToString(CreateFolder);
        ActionToString(CreateLabels);
        ActionToString(CreateNotificationSubscription);
        ActionToString(CreateUser);
        ActionToString(DeactivateUser);
        ActionToString(DeleteComment);
        ActionToString(DeleteCustomMetadata);
        ActionToString(DeleteDocument);
        ActionToString(DeleteFolder);
        ActionToString(DeleteFolderContents);
        ActionToString(DeleteLabels);
        ActionToString(DeleteNotificationSubscription);
        ActionToString(DeleteUser);
        ActionToString(DescribeActivities);
        ActionToString(DescribeComments);
        ActionToString(DescribeDocumentVersions);
        ActionToString(DescribeFolderContents);
        ActionToString(DescribeGroups);
        ActionToString(DescribeNotificationSubscriptions);
        ActionToString(DescribeResourcePermissions);
        ActionToString(DescribeRootFolders);
        ActionToString(DescribeUsers);
        ActionToString(GetCurrentUser);
        ActionToString(GetDocument);
        ActionToString(GetDocumentPath);
        ActionToString(GetDocumentVersion);
        ActionToString(GetFolder);
        ActionToString(GetFolderPath);
        ActionToString(GetResources);
        ActionToString(InitiateDocumentVersionUpload);
        ActionToString(RemoveAllResourcePermissions);
        ActionToString(RemoveResourcePermission);
        ActionToString(UpdateDocument);
        ActionToString(UpdateDocumentVersion);
        ActionToString(UpdateFolder);
        ActionToString(UpdateUser);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace WorkDocs
} // namespace QtAws
