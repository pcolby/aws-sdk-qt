// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NIMBLECLIENT_H
#define QTAWS_NIMBLECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsnimbleglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Nimble {

class NimbleClientPrivate;
class AcceptEulasRequest;
class AcceptEulasResponse;
class CreateLaunchProfileRequest;
class CreateLaunchProfileResponse;
class CreateStreamingImageRequest;
class CreateStreamingImageResponse;
class CreateStreamingSessionRequest;
class CreateStreamingSessionResponse;
class CreateStreamingSessionStreamRequest;
class CreateStreamingSessionStreamResponse;
class CreateStudioRequest;
class CreateStudioResponse;
class CreateStudioComponentRequest;
class CreateStudioComponentResponse;
class DeleteLaunchProfileRequest;
class DeleteLaunchProfileResponse;
class DeleteLaunchProfileMemberRequest;
class DeleteLaunchProfileMemberResponse;
class DeleteStreamingImageRequest;
class DeleteStreamingImageResponse;
class DeleteStreamingSessionRequest;
class DeleteStreamingSessionResponse;
class DeleteStudioRequest;
class DeleteStudioResponse;
class DeleteStudioComponentRequest;
class DeleteStudioComponentResponse;
class DeleteStudioMemberRequest;
class DeleteStudioMemberResponse;
class GetEulaRequest;
class GetEulaResponse;
class GetLaunchProfileRequest;
class GetLaunchProfileResponse;
class GetLaunchProfileDetailsRequest;
class GetLaunchProfileDetailsResponse;
class GetLaunchProfileInitializationRequest;
class GetLaunchProfileInitializationResponse;
class GetLaunchProfileMemberRequest;
class GetLaunchProfileMemberResponse;
class GetStreamingImageRequest;
class GetStreamingImageResponse;
class GetStreamingSessionRequest;
class GetStreamingSessionResponse;
class GetStreamingSessionStreamRequest;
class GetStreamingSessionStreamResponse;
class GetStudioRequest;
class GetStudioResponse;
class GetStudioComponentRequest;
class GetStudioComponentResponse;
class GetStudioMemberRequest;
class GetStudioMemberResponse;
class ListEulaAcceptancesRequest;
class ListEulaAcceptancesResponse;
class ListEulasRequest;
class ListEulasResponse;
class ListLaunchProfileMembersRequest;
class ListLaunchProfileMembersResponse;
class ListLaunchProfilesRequest;
class ListLaunchProfilesResponse;
class ListStreamingImagesRequest;
class ListStreamingImagesResponse;
class ListStreamingSessionsRequest;
class ListStreamingSessionsResponse;
class ListStudioComponentsRequest;
class ListStudioComponentsResponse;
class ListStudioMembersRequest;
class ListStudioMembersResponse;
class ListStudiosRequest;
class ListStudiosResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutLaunchProfileMembersRequest;
class PutLaunchProfileMembersResponse;
class PutStudioMembersRequest;
class PutStudioMembersResponse;
class StartStreamingSessionRequest;
class StartStreamingSessionResponse;
class StartStudioSSOConfigurationRepairRequest;
class StartStudioSSOConfigurationRepairResponse;
class StopStreamingSessionRequest;
class StopStreamingSessionResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateLaunchProfileRequest;
class UpdateLaunchProfileResponse;
class UpdateLaunchProfileMemberRequest;
class UpdateLaunchProfileMemberResponse;
class UpdateStreamingImageRequest;
class UpdateStreamingImageResponse;
class UpdateStudioRequest;
class UpdateStudioResponse;
class UpdateStudioComponentRequest;
class UpdateStudioComponentResponse;

class QTAWSNIMBLE_EXPORT NimbleClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    NimbleClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit NimbleClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptEulasResponse * acceptEulas(const AcceptEulasRequest &request);
    CreateLaunchProfileResponse * createLaunchProfile(const CreateLaunchProfileRequest &request);
    CreateStreamingImageResponse * createStreamingImage(const CreateStreamingImageRequest &request);
    CreateStreamingSessionResponse * createStreamingSession(const CreateStreamingSessionRequest &request);
    CreateStreamingSessionStreamResponse * createStreamingSessionStream(const CreateStreamingSessionStreamRequest &request);
    CreateStudioResponse * createStudio(const CreateStudioRequest &request);
    CreateStudioComponentResponse * createStudioComponent(const CreateStudioComponentRequest &request);
    DeleteLaunchProfileResponse * deleteLaunchProfile(const DeleteLaunchProfileRequest &request);
    DeleteLaunchProfileMemberResponse * deleteLaunchProfileMember(const DeleteLaunchProfileMemberRequest &request);
    DeleteStreamingImageResponse * deleteStreamingImage(const DeleteStreamingImageRequest &request);
    DeleteStreamingSessionResponse * deleteStreamingSession(const DeleteStreamingSessionRequest &request);
    DeleteStudioResponse * deleteStudio(const DeleteStudioRequest &request);
    DeleteStudioComponentResponse * deleteStudioComponent(const DeleteStudioComponentRequest &request);
    DeleteStudioMemberResponse * deleteStudioMember(const DeleteStudioMemberRequest &request);
    GetEulaResponse * getEula(const GetEulaRequest &request);
    GetLaunchProfileResponse * getLaunchProfile(const GetLaunchProfileRequest &request);
    GetLaunchProfileDetailsResponse * getLaunchProfileDetails(const GetLaunchProfileDetailsRequest &request);
    GetLaunchProfileInitializationResponse * getLaunchProfileInitialization(const GetLaunchProfileInitializationRequest &request);
    GetLaunchProfileMemberResponse * getLaunchProfileMember(const GetLaunchProfileMemberRequest &request);
    GetStreamingImageResponse * getStreamingImage(const GetStreamingImageRequest &request);
    GetStreamingSessionResponse * getStreamingSession(const GetStreamingSessionRequest &request);
    GetStreamingSessionStreamResponse * getStreamingSessionStream(const GetStreamingSessionStreamRequest &request);
    GetStudioResponse * getStudio(const GetStudioRequest &request);
    GetStudioComponentResponse * getStudioComponent(const GetStudioComponentRequest &request);
    GetStudioMemberResponse * getStudioMember(const GetStudioMemberRequest &request);
    ListEulaAcceptancesResponse * listEulaAcceptances(const ListEulaAcceptancesRequest &request);
    ListEulasResponse * listEulas(const ListEulasRequest &request);
    ListLaunchProfileMembersResponse * listLaunchProfileMembers(const ListLaunchProfileMembersRequest &request);
    ListLaunchProfilesResponse * listLaunchProfiles(const ListLaunchProfilesRequest &request);
    ListStreamingImagesResponse * listStreamingImages(const ListStreamingImagesRequest &request);
    ListStreamingSessionsResponse * listStreamingSessions(const ListStreamingSessionsRequest &request);
    ListStudioComponentsResponse * listStudioComponents(const ListStudioComponentsRequest &request);
    ListStudioMembersResponse * listStudioMembers(const ListStudioMembersRequest &request);
    ListStudiosResponse * listStudios(const ListStudiosRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutLaunchProfileMembersResponse * putLaunchProfileMembers(const PutLaunchProfileMembersRequest &request);
    PutStudioMembersResponse * putStudioMembers(const PutStudioMembersRequest &request);
    StartStreamingSessionResponse * startStreamingSession(const StartStreamingSessionRequest &request);
    StartStudioSSOConfigurationRepairResponse * startStudioSSOConfigurationRepair(const StartStudioSSOConfigurationRepairRequest &request);
    StopStreamingSessionResponse * stopStreamingSession(const StopStreamingSessionRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateLaunchProfileResponse * updateLaunchProfile(const UpdateLaunchProfileRequest &request);
    UpdateLaunchProfileMemberResponse * updateLaunchProfileMember(const UpdateLaunchProfileMemberRequest &request);
    UpdateStreamingImageResponse * updateStreamingImage(const UpdateStreamingImageRequest &request);
    UpdateStudioResponse * updateStudio(const UpdateStudioRequest &request);
    UpdateStudioComponentResponse * updateStudioComponent(const UpdateStudioComponentRequest &request);

private:
    Q_DECLARE_PRIVATE(NimbleClient)
    Q_DISABLE_COPY(NimbleClient)

};

} // namespace Nimble
} // namespace QtAws

#endif
