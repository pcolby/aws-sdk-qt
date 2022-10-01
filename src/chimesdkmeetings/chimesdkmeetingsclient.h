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
