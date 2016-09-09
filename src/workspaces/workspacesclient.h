/*
    Copyright 2013-2016 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_WORKSPACESCLIENT_H
#define QTAWS_WORKSPACESCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class WorkSpacesClientPrivate;

class QTAWS_EXPORT WorkSpacesClient : public AwsAbstractClient {
    Q_OBJECT

public:
    WorkSpacesClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    WorkSpacesClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    WorkSpacesCreateTagsResponse * createTags(const WorkSpacesCreateTagsRequest &request);
    WorkSpacesCreateWorkspacesResponse * createWorkspaces(const WorkSpacesCreateWorkspacesRequest &request);
    WorkSpacesDeleteTagsResponse * deleteTags(const WorkSpacesDeleteTagsRequest &request);
    WorkSpacesDescribeTagsResponse * describeTags(const WorkSpacesDescribeTagsRequest &request);
    WorkSpacesDescribeWorkspaceBundlesResponse * describeWorkspaceBundles(const WorkSpacesDescribeWorkspaceBundlesRequest &request);
    WorkSpacesDescribeWorkspaceDirectoriesResponse * describeWorkspaceDirectories(const WorkSpacesDescribeWorkspaceDirectoriesRequest &request);
    WorkSpacesDescribeWorkspacesResponse * describeWorkspaces(const WorkSpacesDescribeWorkspacesRequest &request);
    WorkSpacesDescribeWorkspacesConnectionStatusResponse * describeWorkspacesConnectionStatus(const WorkSpacesDescribeWorkspacesConnectionStatusRequest &request);
    WorkSpacesModifyWorkspacePropertiesResponse * modifyWorkspaceProperties(const WorkSpacesModifyWorkspacePropertiesRequest &request);
    WorkSpacesRebootWorkspacesResponse * rebootWorkspaces(const WorkSpacesRebootWorkspacesRequest &request);
    WorkSpacesRebuildWorkspacesResponse * rebuildWorkspaces(const WorkSpacesRebuildWorkspacesRequest &request);
    WorkSpacesStartWorkspacesResponse * startWorkspaces(const WorkSpacesStartWorkspacesRequest &request);
    WorkSpacesStopWorkspacesResponse * stopWorkspaces(const WorkSpacesStopWorkspacesRequest &request);
    WorkSpacesTerminateWorkspacesResponse * terminateWorkspaces(const WorkSpacesTerminateWorkspacesRequest &request);

private:
    Q_DECLARE_PRIVATE(WorkSpacesClient)
    Q_DISABLE_COPY(WorkSpacesClient)

};

QTAWS_END_NAMESPACE

#endif
