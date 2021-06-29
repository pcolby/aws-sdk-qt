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

#ifndef QTAWS_MOBILECLIENT_H
#define QTAWS_MOBILECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmobileglobal.h"

class QNetworkReply;

namespace QtAws {
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

class QTAWSMOBILE_EXPORT MobileClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MobileClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MobileClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
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

protected:
    /// @cond internal
    MobileClientPrivate * const d_ptr; ///< Internal d-pointer.
    MobileClient(MobileClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(MobileClient)
    Q_DISABLE_COPY(MobileClient)

};

} // namespace Mobile
} // namespace QtAws

#endif
