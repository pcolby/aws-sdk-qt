/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_MOBILECLIENT_H
#define QTAWS_MOBILECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace Mobile {

class MobileClientPrivate;
class CreateProjectRequest;
class CreateProjectResponse;
class DeleteProjectRequest;
class DeleteProjectResponse;
class DescribeBundleRequest;
class DescribeBundleResponse;
class DescribeProjectRequest;
class DescribeProjectResponse;
class ExportBundleRequest;
class ExportBundleResponse;
class ExportProjectRequest;
class ExportProjectResponse;
class ListBundlesRequest;
class ListBundlesResponse;
class ListProjectsRequest;
class ListProjectsResponse;
class UpdateProjectRequest;
class UpdateProjectResponse;

class QTAWS_EXPORT MobileClient : public AwsAbstractClient {
    Q_OBJECT

public:
    MobileClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MobileClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateProjectResponse * createProject(const CreateProjectRequest &request);
    DeleteProjectResponse * deleteProject(const DeleteProjectRequest &request);
    DescribeBundleResponse * describeBundle(const DescribeBundleRequest &request);
    DescribeProjectResponse * describeProject(const DescribeProjectRequest &request);
    ExportBundleResponse * exportBundle(const ExportBundleRequest &request);
    ExportProjectResponse * exportProject(const ExportProjectRequest &request);
    ListBundlesResponse * listBundles(const ListBundlesRequest &request);
    ListProjectsResponse * listProjects(const ListProjectsRequest &request);
    UpdateProjectResponse * updateProject(const UpdateProjectRequest &request);

private:
    Q_DECLARE_PRIVATE(MobileClient)
    Q_DISABLE_COPY(MobileClient)

};

} // namespace Mobile
} // namespace AWS

#endif
