/*
    Copyright 2013-2018 Paul Colby

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

#include "workspacesclient.h"
#include "workspacesclient_p.h"

#include "core/awssignaturev4.h"
#include "createtagsrequest.h"
#include "createtagsresponse.h"
#include "createworkspacesrequest.h"
#include "createworkspacesresponse.h"
#include "deletetagsrequest.h"
#include "deletetagsresponse.h"
#include "describetagsrequest.h"
#include "describetagsresponse.h"
#include "describeworkspacebundlesrequest.h"
#include "describeworkspacebundlesresponse.h"
#include "describeworkspacedirectoriesrequest.h"
#include "describeworkspacedirectoriesresponse.h"
#include "describeworkspacesrequest.h"
#include "describeworkspacesresponse.h"
#include "describeworkspacesconnectionstatusrequest.h"
#include "describeworkspacesconnectionstatusresponse.h"
#include "modifyworkspacepropertiesrequest.h"
#include "modifyworkspacepropertiesresponse.h"
#include "rebootworkspacesrequest.h"
#include "rebootworkspacesresponse.h"
#include "rebuildworkspacesrequest.h"
#include "rebuildworkspacesresponse.h"
#include "startworkspacesrequest.h"
#include "startworkspacesresponse.h"
#include "stopworkspacesrequest.h"
#include "stopworkspacesresponse.h"
#include "terminateworkspacesrequest.h"
#include "terminateworkspacesresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::WorkSpaces
 * \brief The QtAws::WorkSpaces contains stuff...
 *
 * \inmodule QtAwsWorkSpaces
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::WorkSpacesClient
 * \brief The WorkSpacesClient class provides access to the Amazon WorkSpaces service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows desktops for your
 */

/*!
 * \brief Constructs a WorkSpacesClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
WorkSpacesClient::WorkSpacesClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new WorkSpacesClientPrivate(this), parent)
{
    Q_D(WorkSpacesClient);
    d->apiVersion = QStringLiteral("2015-04-08");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("workspaces");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon WorkSpaces");
    d->serviceName = QStringLiteral("workspaces");
}

/*!
 * \overload WorkSpacesClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
WorkSpacesClient::WorkSpacesClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new WorkSpacesClientPrivate(this), parent)
{
    Q_D(WorkSpacesClient);
    d->apiVersion = QStringLiteral("2015-04-08");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("workspaces");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon WorkSpaces");
    d->serviceName = QStringLiteral("workspaces");
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * CreateTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates tags for the specified
 */
CreateTagsResponse * WorkSpacesClient::createTags(const CreateTagsRequest &request)
{
    return qobject_cast<CreateTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * CreateWorkspacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates one or more
 *
 * WorkSpaces>
 *
 * This operation is asynchronous and returns before the WorkSpaces are
 */
CreateWorkspacesResponse * WorkSpacesClient::createWorkspaces(const CreateWorkspacesRequest &request)
{
    return qobject_cast<CreateWorkspacesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DeleteTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified tags from a
 */
DeleteTagsResponse * WorkSpacesClient::deleteTags(const DeleteTagsRequest &request)
{
    return qobject_cast<DeleteTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DescribeTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the tags for the specified
 */
DescribeTagsResponse * WorkSpacesClient::describeTags(const DescribeTagsRequest &request)
{
    return qobject_cast<DescribeTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DescribeWorkspaceBundlesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the available WorkSpace
 *
 * bundles>
 *
 * You can filter the results using either bundle ID or owner, but not
 */
DescribeWorkspaceBundlesResponse * WorkSpacesClient::describeWorkspaceBundles(const DescribeWorkspaceBundlesRequest &request)
{
    return qobject_cast<DescribeWorkspaceBundlesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DescribeWorkspaceDirectoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the available AWS Directory Service directories that are registered with Amazon
 */
DescribeWorkspaceDirectoriesResponse * WorkSpacesClient::describeWorkspaceDirectories(const DescribeWorkspaceDirectoriesRequest &request)
{
    return qobject_cast<DescribeWorkspaceDirectoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DescribeWorkspacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified
 *
 * WorkSpaces>
 *
 * You can filter the results using bundle ID, directory ID, or owner, but you can specify only one filter at a
 */
DescribeWorkspacesResponse * WorkSpacesClient::describeWorkspaces(const DescribeWorkspacesRequest &request)
{
    return qobject_cast<DescribeWorkspacesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DescribeWorkspacesConnectionStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the connection status of the specified
 */
DescribeWorkspacesConnectionStatusResponse * WorkSpacesClient::describeWorkspacesConnectionStatus(const DescribeWorkspacesConnectionStatusRequest &request)
{
    return qobject_cast<DescribeWorkspacesConnectionStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * ModifyWorkspacePropertiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the specified WorkSpace
 */
ModifyWorkspacePropertiesResponse * WorkSpacesClient::modifyWorkspaceProperties(const ModifyWorkspacePropertiesRequest &request)
{
    return qobject_cast<ModifyWorkspacePropertiesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * RebootWorkspacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Reboots the specified
 *
 * WorkSpaces>
 *
 * You cannot reboot a WorkSpace unless its state is <code>AVAILABLE</code>, <code>IMPAIRED</code>, or
 *
 * <code>INOPERABLE</code>>
 *
 * This operation is asynchronous and returns before the WorkSpaces have
 */
RebootWorkspacesResponse * WorkSpacesClient::rebootWorkspaces(const RebootWorkspacesRequest &request)
{
    return qobject_cast<RebootWorkspacesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * RebuildWorkspacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Rebuilds the specified
 *
 * WorkSpaces>
 *
 * You cannot rebuild a WorkSpace unless its state is <code>AVAILABLE</code> or
 *
 * <code>ERROR</code>>
 *
 * Rebuilding a WorkSpace is a potentially destructive action that can result in the loss of data. For more information,
 * see <a href="http://docs.aws.amazon.com/workspaces/latest/adminguide/reset-workspace.html">Rebuild a
 *
 * WorkSpace</a>>
 *
 * This operation is asynchronous and returns before the WorkSpaces have been completely
 */
RebuildWorkspacesResponse * WorkSpacesClient::rebuildWorkspaces(const RebuildWorkspacesRequest &request)
{
    return qobject_cast<RebuildWorkspacesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * StartWorkspacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the specified
 *
 * WorkSpaces>
 *
 * You cannot start a WorkSpace unless it has a running mode of <code>AutoStop</code> and a state of
 */
StartWorkspacesResponse * WorkSpacesClient::startWorkspaces(const StartWorkspacesRequest &request)
{
    return qobject_cast<StartWorkspacesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * StopWorkspacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the specified
 *
 * WorkSpaces>
 *
 * You cannot stop a WorkSpace unless it has a running mode of <code>AutoStop</code> and a state of <code>AVAILABLE</code>,
 * <code>IMPAIRED</code>, <code>UNHEALTHY</code>, or
 */
StopWorkspacesResponse * WorkSpacesClient::stopWorkspaces(const StopWorkspacesRequest &request)
{
    return qobject_cast<StopWorkspacesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * TerminateWorkspacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Terminates the specified
 *
 * WorkSpaces>
 *
 * Terminating a WorkSpace is a permanent action and cannot be undone. The user's data is destroyed. If you need to archive
 * any user data, contact Amazon Web Services before terminating the
 *
 * WorkSpace>
 *
 * You can terminate a WorkSpace that is in any state except
 *
 * <code>SUSPENDED</code>>
 *
 * This operation is asynchronous and returns before the WorkSpaces have been completely
 */
TerminateWorkspacesResponse * WorkSpacesClient::terminateWorkspaces(const TerminateWorkspacesRequest &request)
{
    return qobject_cast<TerminateWorkspacesResponse *>(send(request));
}

/*!
 * \class QtAws::WorkSpaces::WorkSpacesClientPrivate
 * \brief The WorkSpacesClientPrivate class provides private implementation for WorkSpacesClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a WorkSpacesClientPrivate object with public implementation \a q.
 */
WorkSpacesClientPrivate::WorkSpacesClientPrivate(WorkSpacesClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace WorkSpaces
} // namespace QtAws
