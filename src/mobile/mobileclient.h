// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

    explicit MobileClient(
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

private:
    Q_DECLARE_PRIVATE(MobileClient)
    Q_DISABLE_COPY(MobileClient)

};

} // namespace Mobile
} // namespace QtAws

#endif
