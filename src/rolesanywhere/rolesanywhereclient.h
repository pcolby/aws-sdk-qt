// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROLESANYWHERECLIENT_H
#define QTAWS_ROLESANYWHERECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsrolesanywhereglobal.h"

class QNetworkReply;

namespace QtAws {
namespace RolesAnywhere {

class RolesAnywhereClientPrivate;
class CreateProfileRequest;
class CreateProfileResponse;
class CreateTrustAnchorRequest;
class CreateTrustAnchorResponse;
class DeleteCrlRequest;
class DeleteCrlResponse;
class DeleteProfileRequest;
class DeleteProfileResponse;
class DeleteTrustAnchorRequest;
class DeleteTrustAnchorResponse;
class DisableCrlRequest;
class DisableCrlResponse;
class DisableProfileRequest;
class DisableProfileResponse;
class DisableTrustAnchorRequest;
class DisableTrustAnchorResponse;
class EnableCrlRequest;
class EnableCrlResponse;
class EnableProfileRequest;
class EnableProfileResponse;
class EnableTrustAnchorRequest;
class EnableTrustAnchorResponse;
class GetCrlRequest;
class GetCrlResponse;
class GetProfileRequest;
class GetProfileResponse;
class GetSubjectRequest;
class GetSubjectResponse;
class GetTrustAnchorRequest;
class GetTrustAnchorResponse;
class ImportCrlRequest;
class ImportCrlResponse;
class ListCrlsRequest;
class ListCrlsResponse;
class ListProfilesRequest;
class ListProfilesResponse;
class ListSubjectsRequest;
class ListSubjectsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTrustAnchorsRequest;
class ListTrustAnchorsResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateCrlRequest;
class UpdateCrlResponse;
class UpdateProfileRequest;
class UpdateProfileResponse;
class UpdateTrustAnchorRequest;
class UpdateTrustAnchorResponse;

class QTAWSROLESANYWHERE_EXPORT RolesAnywhereClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    RolesAnywhereClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit RolesAnywhereClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateProfileResponse * createProfile(const CreateProfileRequest &request);
    CreateTrustAnchorResponse * createTrustAnchor(const CreateTrustAnchorRequest &request);
    DeleteCrlResponse * deleteCrl(const DeleteCrlRequest &request);
    DeleteProfileResponse * deleteProfile(const DeleteProfileRequest &request);
    DeleteTrustAnchorResponse * deleteTrustAnchor(const DeleteTrustAnchorRequest &request);
    DisableCrlResponse * disableCrl(const DisableCrlRequest &request);
    DisableProfileResponse * disableProfile(const DisableProfileRequest &request);
    DisableTrustAnchorResponse * disableTrustAnchor(const DisableTrustAnchorRequest &request);
    EnableCrlResponse * enableCrl(const EnableCrlRequest &request);
    EnableProfileResponse * enableProfile(const EnableProfileRequest &request);
    EnableTrustAnchorResponse * enableTrustAnchor(const EnableTrustAnchorRequest &request);
    GetCrlResponse * getCrl(const GetCrlRequest &request);
    GetProfileResponse * getProfile(const GetProfileRequest &request);
    GetSubjectResponse * getSubject(const GetSubjectRequest &request);
    GetTrustAnchorResponse * getTrustAnchor(const GetTrustAnchorRequest &request);
    ImportCrlResponse * importCrl(const ImportCrlRequest &request);
    ListCrlsResponse * listCrls(const ListCrlsRequest &request);
    ListProfilesResponse * listProfiles(const ListProfilesRequest &request);
    ListSubjectsResponse * listSubjects(const ListSubjectsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTrustAnchorsResponse * listTrustAnchors(const ListTrustAnchorsRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateCrlResponse * updateCrl(const UpdateCrlRequest &request);
    UpdateProfileResponse * updateProfile(const UpdateProfileRequest &request);
    UpdateTrustAnchorResponse * updateTrustAnchor(const UpdateTrustAnchorRequest &request);

private:
    Q_DECLARE_PRIVATE(RolesAnywhereClient)
    Q_DISABLE_COPY(RolesAnywhereClient)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
