// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMESDKMEETINGSCLIENT_H
#define QTAWS_CHIMESDKMEETINGSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawschimesdkmeetingsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ChimeSdkMeetings {

class ChimeSdkMeetingsClientPrivate;
class BatchCreateAttendeeRequest;
class BatchCreateAttendeeResponse;
class BatchUpdateAttendeeCapabilitiesExceptRequest;
class BatchUpdateAttendeeCapabilitiesExceptResponse;
class CreateAttendeeRequest;
class CreateAttendeeResponse;
class CreateMeetingRequest;
class CreateMeetingResponse;
class CreateMeetingWithAttendeesRequest;
class CreateMeetingWithAttendeesResponse;
class DeleteAttendeeRequest;
class DeleteAttendeeResponse;
class DeleteMeetingRequest;
class DeleteMeetingResponse;
class GetAttendeeRequest;
class GetAttendeeResponse;
class GetMeetingRequest;
class GetMeetingResponse;
class ListAttendeesRequest;
class ListAttendeesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class StartMeetingTranscriptionRequest;
class StartMeetingTranscriptionResponse;
class StopMeetingTranscriptionRequest;
class StopMeetingTranscriptionResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAttendeeCapabilitiesRequest;
class UpdateAttendeeCapabilitiesResponse;

class QTAWSCHIMESDKMEETINGS_EXPORT ChimeSdkMeetingsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ChimeSdkMeetingsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ChimeSdkMeetingsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchCreateAttendeeResponse * batchCreateAttendee(const BatchCreateAttendeeRequest &request);
    BatchUpdateAttendeeCapabilitiesExceptResponse * batchUpdateAttendeeCapabilitiesExcept(const BatchUpdateAttendeeCapabilitiesExceptRequest &request);
    CreateAttendeeResponse * createAttendee(const CreateAttendeeRequest &request);
    CreateMeetingResponse * createMeeting(const CreateMeetingRequest &request);
    CreateMeetingWithAttendeesResponse * createMeetingWithAttendees(const CreateMeetingWithAttendeesRequest &request);
    DeleteAttendeeResponse * deleteAttendee(const DeleteAttendeeRequest &request);
    DeleteMeetingResponse * deleteMeeting(const DeleteMeetingRequest &request);
    GetAttendeeResponse * getAttendee(const GetAttendeeRequest &request);
    GetMeetingResponse * getMeeting(const GetMeetingRequest &request);
    ListAttendeesResponse * listAttendees(const ListAttendeesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StartMeetingTranscriptionResponse * startMeetingTranscription(const StartMeetingTranscriptionRequest &request);
    StopMeetingTranscriptionResponse * stopMeetingTranscription(const StopMeetingTranscriptionRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAttendeeCapabilitiesResponse * updateAttendeeCapabilities(const UpdateAttendeeCapabilitiesRequest &request);

private:
    Q_DECLARE_PRIVATE(ChimeSdkMeetingsClient)
    Q_DISABLE_COPY(ChimeSdkMeetingsClient)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
