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

#ifndef QTAWS_CUSTOMERPROFILESCLIENT_H
#define QTAWS_CUSTOMERPROFILESCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscustomerprofilesglobal.h"

class QNetworkReply;

namespace QtAws {
namespace CustomerProfiles {

class CustomerProfilesClientPrivate;
class AddProfileKeyRequest;
class AddProfileKeyResponse;
class CreateDomainRequest;
class CreateDomainResponse;
class CreateIntegrationWorkflowRequest;
class CreateIntegrationWorkflowResponse;
class CreateProfileRequest;
class CreateProfileResponse;
class DeleteDomainRequest;
class DeleteDomainResponse;
class DeleteIntegrationRequest;
class DeleteIntegrationResponse;
class DeleteProfileRequest;
class DeleteProfileResponse;
class DeleteProfileKeyRequest;
class DeleteProfileKeyResponse;
class DeleteProfileObjectRequest;
class DeleteProfileObjectResponse;
class DeleteProfileObjectTypeRequest;
class DeleteProfileObjectTypeResponse;
class DeleteWorkflowRequest;
class DeleteWorkflowResponse;
class GetAutoMergingPreviewRequest;
class GetAutoMergingPreviewResponse;
class GetDomainRequest;
class GetDomainResponse;
class GetIdentityResolutionJobRequest;
class GetIdentityResolutionJobResponse;
class GetIntegrationRequest;
class GetIntegrationResponse;
class GetMatchesRequest;
class GetMatchesResponse;
class GetProfileObjectTypeRequest;
class GetProfileObjectTypeResponse;
class GetProfileObjectTypeTemplateRequest;
class GetProfileObjectTypeTemplateResponse;
class GetWorkflowRequest;
class GetWorkflowResponse;
class GetWorkflowStepsRequest;
class GetWorkflowStepsResponse;
class ListAccountIntegrationsRequest;
class ListAccountIntegrationsResponse;
class ListDomainsRequest;
class ListDomainsResponse;
class ListIdentityResolutionJobsRequest;
class ListIdentityResolutionJobsResponse;
class ListIntegrationsRequest;
class ListIntegrationsResponse;
class ListProfileObjectTypeTemplatesRequest;
class ListProfileObjectTypeTemplatesResponse;
class ListProfileObjectTypesRequest;
class ListProfileObjectTypesResponse;
class ListProfileObjectsRequest;
class ListProfileObjectsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListWorkflowsRequest;
class ListWorkflowsResponse;
class MergeProfilesRequest;
class MergeProfilesResponse;
class PutIntegrationRequest;
class PutIntegrationResponse;
class PutProfileObjectRequest;
class PutProfileObjectResponse;
class PutProfileObjectTypeRequest;
class PutProfileObjectTypeResponse;
class SearchProfilesRequest;
class SearchProfilesResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateDomainRequest;
class UpdateDomainResponse;
class UpdateProfileRequest;
class UpdateProfileResponse;

class QTAWSCUSTOMERPROFILES_EXPORT CustomerProfilesClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CustomerProfilesClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit CustomerProfilesClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddProfileKeyResponse * addProfileKey(const AddProfileKeyRequest &request);
    CreateDomainResponse * createDomain(const CreateDomainRequest &request);
    CreateIntegrationWorkflowResponse * createIntegrationWorkflow(const CreateIntegrationWorkflowRequest &request);
    CreateProfileResponse * createProfile(const CreateProfileRequest &request);
    DeleteDomainResponse * deleteDomain(const DeleteDomainRequest &request);
    DeleteIntegrationResponse * deleteIntegration(const DeleteIntegrationRequest &request);
    DeleteProfileResponse * deleteProfile(const DeleteProfileRequest &request);
    DeleteProfileKeyResponse * deleteProfileKey(const DeleteProfileKeyRequest &request);
    DeleteProfileObjectResponse * deleteProfileObject(const DeleteProfileObjectRequest &request);
    DeleteProfileObjectTypeResponse * deleteProfileObjectType(const DeleteProfileObjectTypeRequest &request);
    DeleteWorkflowResponse * deleteWorkflow(const DeleteWorkflowRequest &request);
    GetAutoMergingPreviewResponse * getAutoMergingPreview(const GetAutoMergingPreviewRequest &request);
    GetDomainResponse * getDomain(const GetDomainRequest &request);
    GetIdentityResolutionJobResponse * getIdentityResolutionJob(const GetIdentityResolutionJobRequest &request);
    GetIntegrationResponse * getIntegration(const GetIntegrationRequest &request);
    GetMatchesResponse * getMatches(const GetMatchesRequest &request);
    GetProfileObjectTypeResponse * getProfileObjectType(const GetProfileObjectTypeRequest &request);
    GetProfileObjectTypeTemplateResponse * getProfileObjectTypeTemplate(const GetProfileObjectTypeTemplateRequest &request);
    GetWorkflowResponse * getWorkflow(const GetWorkflowRequest &request);
    GetWorkflowStepsResponse * getWorkflowSteps(const GetWorkflowStepsRequest &request);
    ListAccountIntegrationsResponse * listAccountIntegrations(const ListAccountIntegrationsRequest &request);
    ListDomainsResponse * listDomains(const ListDomainsRequest &request);
    ListIdentityResolutionJobsResponse * listIdentityResolutionJobs(const ListIdentityResolutionJobsRequest &request);
    ListIntegrationsResponse * listIntegrations(const ListIntegrationsRequest &request);
    ListProfileObjectTypeTemplatesResponse * listProfileObjectTypeTemplates(const ListProfileObjectTypeTemplatesRequest &request);
    ListProfileObjectTypesResponse * listProfileObjectTypes(const ListProfileObjectTypesRequest &request);
    ListProfileObjectsResponse * listProfileObjects(const ListProfileObjectsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListWorkflowsResponse * listWorkflows(const ListWorkflowsRequest &request);
    MergeProfilesResponse * mergeProfiles(const MergeProfilesRequest &request);
    PutIntegrationResponse * putIntegration(const PutIntegrationRequest &request);
    PutProfileObjectResponse * putProfileObject(const PutProfileObjectRequest &request);
    PutProfileObjectTypeResponse * putProfileObjectType(const PutProfileObjectTypeRequest &request);
    SearchProfilesResponse * searchProfiles(const SearchProfilesRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDomainResponse * updateDomain(const UpdateDomainRequest &request);
    UpdateProfileResponse * updateProfile(const UpdateProfileRequest &request);

private:
    Q_DECLARE_PRIVATE(CustomerProfilesClient)
    Q_DISABLE_COPY(CustomerProfilesClient)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
