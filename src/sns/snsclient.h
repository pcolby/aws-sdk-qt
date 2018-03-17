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

#ifndef QTAWS_SNSCLIENT_H
#define QTAWS_SNSCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace SNS {

class SnsClientPrivate;

class QTAWS_EXPORT SnsClient : public AwsAbstractClient {
    Q_OBJECT

public:
    SnsClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SnsClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddPermissionResponse * addPermission(const AddPermissionRequest &request);
    CheckIfPhoneNumberIsOptedOutResponse * checkIfPhoneNumberIsOptedOut(const CheckIfPhoneNumberIsOptedOutRequest &request);
    ConfirmSubscriptionResponse * confirmSubscription(const ConfirmSubscriptionRequest &request);
    CreatePlatformApplicationResponse * createPlatformApplication(const CreatePlatformApplicationRequest &request);
    CreatePlatformEndpointResponse * createPlatformEndpoint(const CreatePlatformEndpointRequest &request);
    CreateTopicResponse * createTopic(const CreateTopicRequest &request);
    DeleteEndpointResponse * deleteEndpoint(const DeleteEndpointRequest &request);
    DeletePlatformApplicationResponse * deletePlatformApplication(const DeletePlatformApplicationRequest &request);
    DeleteTopicResponse * deleteTopic(const DeleteTopicRequest &request);
    GetEndpointAttributesResponse * getEndpointAttributes(const GetEndpointAttributesRequest &request);
    GetPlatformApplicationAttributesResponse * getPlatformApplicationAttributes(const GetPlatformApplicationAttributesRequest &request);
    GetSMSAttributesResponse * getSMSAttributes(const GetSMSAttributesRequest &request);
    GetSubscriptionAttributesResponse * getSubscriptionAttributes(const GetSubscriptionAttributesRequest &request);
    GetTopicAttributesResponse * getTopicAttributes(const GetTopicAttributesRequest &request);
    ListEndpointsByPlatformApplicationResponse * listEndpointsByPlatformApplication(const ListEndpointsByPlatformApplicationRequest &request);
    ListPhoneNumbersOptedOutResponse * listPhoneNumbersOptedOut(const ListPhoneNumbersOptedOutRequest &request);
    ListPlatformApplicationsResponse * listPlatformApplications(const ListPlatformApplicationsRequest &request);
    ListSubscriptionsResponse * listSubscriptions(const ListSubscriptionsRequest &request);
    ListSubscriptionsByTopicResponse * listSubscriptionsByTopic(const ListSubscriptionsByTopicRequest &request);
    ListTopicsResponse * listTopics(const ListTopicsRequest &request);
    OptInPhoneNumberResponse * optInPhoneNumber(const OptInPhoneNumberRequest &request);
    PublishResponse * publish(const PublishRequest &request);
    RemovePermissionResponse * removePermission(const RemovePermissionRequest &request);
    SetEndpointAttributesResponse * setEndpointAttributes(const SetEndpointAttributesRequest &request);
    SetPlatformApplicationAttributesResponse * setPlatformApplicationAttributes(const SetPlatformApplicationAttributesRequest &request);
    SetSMSAttributesResponse * setSMSAttributes(const SetSMSAttributesRequest &request);
    SetSubscriptionAttributesResponse * setSubscriptionAttributes(const SetSubscriptionAttributesRequest &request);
    SetTopicAttributesResponse * setTopicAttributes(const SetTopicAttributesRequest &request);
    SubscribeResponse * subscribe(const SubscribeRequest &request);
    UnsubscribeResponse * unsubscribe(const UnsubscribeRequest &request);

private:
    Q_DECLARE_PRIVATE(SnsClient)
    Q_DISABLE_COPY(SnsClient)

};

} // namespace SNS
} // namespace AWS

#endif
