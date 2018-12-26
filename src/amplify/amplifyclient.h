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

#ifndef QTAWS_AMPLIFYCLIENT_H
#define QTAWS_AMPLIFYCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Amplify {

class AmplifyClientPrivate;
class CreateAppRequest;
class CreateAppResponse;
class CreateBranchRequest;
class CreateBranchResponse;
class CreateDomainAssociationRequest;
class CreateDomainAssociationResponse;
class DeleteAppRequest;
class DeleteAppResponse;
class DeleteBranchRequest;
class DeleteBranchResponse;
class DeleteDomainAssociationRequest;
class DeleteDomainAssociationResponse;
class DeleteJobRequest;
class DeleteJobResponse;
class GetAppRequest;
class GetAppResponse;
class GetBranchRequest;
class GetBranchResponse;
class GetDomainAssociationRequest;
class GetDomainAssociationResponse;
class GetJobRequest;
class GetJobResponse;
class ListAppsRequest;
class ListAppsResponse;
class ListBranchesRequest;
class ListBranchesResponse;
class ListDomainAssociationsRequest;
class ListDomainAssociationsResponse;
class ListJobsRequest;
class ListJobsResponse;
class StartJobRequest;
class StartJobResponse;
class StopJobRequest;
class StopJobResponse;
class UpdateAppRequest;
class UpdateAppResponse;
class UpdateBranchRequest;
class UpdateBranchResponse;
class UpdateDomainAssociationRequest;
class UpdateDomainAssociationResponse;

class QTAWS_EXPORT AmplifyClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AmplifyClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    AmplifyClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateAppResponse * createApp(const CreateAppRequest &request);
    CreateBranchResponse * createBranch(const CreateBranchRequest &request);
    CreateDomainAssociationResponse * createDomainAssociation(const CreateDomainAssociationRequest &request);
    DeleteAppResponse * deleteApp(const DeleteAppRequest &request);
    DeleteBranchResponse * deleteBranch(const DeleteBranchRequest &request);
    DeleteDomainAssociationResponse * deleteDomainAssociation(const DeleteDomainAssociationRequest &request);
    DeleteJobResponse * deleteJob(const DeleteJobRequest &request);
    GetAppResponse * getApp(const GetAppRequest &request);
    GetBranchResponse * getBranch(const GetBranchRequest &request);
    GetDomainAssociationResponse * getDomainAssociation(const GetDomainAssociationRequest &request);
    GetJobResponse * getJob(const GetJobRequest &request);
    ListAppsResponse * listApps(const ListAppsRequest &request);
    ListBranchesResponse * listBranches(const ListBranchesRequest &request);
    ListDomainAssociationsResponse * listDomainAssociations(const ListDomainAssociationsRequest &request);
    ListJobsResponse * listJobs(const ListJobsRequest &request);
    StartJobResponse * startJob(const StartJobRequest &request);
    StopJobResponse * stopJob(const StopJobRequest &request);
    UpdateAppResponse * updateApp(const UpdateAppRequest &request);
    UpdateBranchResponse * updateBranch(const UpdateBranchRequest &request);
    UpdateDomainAssociationResponse * updateDomainAssociation(const UpdateDomainAssociationRequest &request);

private:
    Q_DECLARE_PRIVATE(AmplifyClient)
    Q_DISABLE_COPY(AmplifyClient)

};

} // namespace Amplify
} // namespace QtAws

#endif
