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

#ifndef QTAWS_CLOUDTRAILCLIENT_H
#define QTAWS_CLOUDTRAILCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace CloudTrail {

class CloudTrailClientPrivate;
class AddTagsRequest;
class AddTagsResponse;
class CreateTrailRequest;
class CreateTrailResponse;
class DeleteTrailRequest;
class DeleteTrailResponse;
class DescribeTrailsRequest;
class DescribeTrailsResponse;
class GetEventSelectorsRequest;
class GetEventSelectorsResponse;
class GetTrailStatusRequest;
class GetTrailStatusResponse;
class ListPublicKeysRequest;
class ListPublicKeysResponse;
class ListTagsRequest;
class ListTagsResponse;
class LookupEventsRequest;
class LookupEventsResponse;
class PutEventSelectorsRequest;
class PutEventSelectorsResponse;
class RemoveTagsRequest;
class RemoveTagsResponse;
class StartLoggingRequest;
class StartLoggingResponse;
class StopLoggingRequest;
class StopLoggingResponse;
class UpdateTrailRequest;
class UpdateTrailResponse;

class QTAWS_EXPORT CloudTrailClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CloudTrailClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CloudTrailClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsResponse * addTags(const AddTagsRequest &request);
    CreateTrailResponse * createTrail(const CreateTrailRequest &request);
    DeleteTrailResponse * deleteTrail(const DeleteTrailRequest &request);
    DescribeTrailsResponse * describeTrails(const DescribeTrailsRequest &request);
    GetEventSelectorsResponse * getEventSelectors(const GetEventSelectorsRequest &request);
    GetTrailStatusResponse * getTrailStatus(const GetTrailStatusRequest &request);
    ListPublicKeysResponse * listPublicKeys(const ListPublicKeysRequest &request);
    ListTagsResponse * listTags(const ListTagsRequest &request);
    LookupEventsResponse * lookupEvents(const LookupEventsRequest &request);
    PutEventSelectorsResponse * putEventSelectors(const PutEventSelectorsRequest &request);
    RemoveTagsResponse * removeTags(const RemoveTagsRequest &request);
    StartLoggingResponse * startLogging(const StartLoggingRequest &request);
    StopLoggingResponse * stopLogging(const StopLoggingRequest &request);
    UpdateTrailResponse * updateTrail(const UpdateTrailRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudTrailClient)
    Q_DISABLE_COPY(CloudTrailClient)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
