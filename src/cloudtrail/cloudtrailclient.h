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

#ifndef QTAWS_CLOUDTRAILCLIENT_H
#define QTAWS_CLOUDTRAILCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace CloudTrail {

class CloudTrailClientPrivate;

class QTAWS_EXPORT CloudTrailClient : public AwsAbstractClient {
    Q_OBJECT

public:
    CloudTrailClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CloudTrailClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
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
} // namespace AWS

#endif
