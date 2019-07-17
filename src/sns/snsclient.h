/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_SNSCLIENT_H
#define QTAWS_SNSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace SNS {

class SnsClientPrivate;
class AddPermissionRequest;
class AddPermissionResponse;
class CheckIfPhoneNumberIsOptedOutRequest;
class CheckIfPhoneNumberIsOptedOutResponse;
class ConfirmSubscriptionRequest;
class ConfirmSubscriptionResponse;
class CreatePlatformApplicationRequest;
class CreatePlatformApplicationResponse;
class CreatePlatformEndpointRequest;
class CreatePlatformEndpointResponse;
class CreateTopicRequest;
class CreateTopicResponse;
class DeleteEndpointRequest;
class DeleteEndpointResponse;
class DeletePlatformApplicationRequest;
class DeletePlatformApplicationResponse;
class DeleteTopicRequest;
class DeleteTopicResponse;
class GetEndpointAttributesRequest;
class GetEndpointAttributesResponse;
class GetPlatformApplicationAttributesRequest;
class GetPlatformApplicationAttributesResponse;
class GetSMSAttributesRequest;
class GetSMSAttributesResponse;
class GetSubscriptionAttributesRequest;
class GetSubscriptionAttributesResponse;
class GetTopicAttributesRequest;
class GetTopicAttributesResponse;
class ListEndpointsByPlatformApplicationRequest;
class ListEndpointsByPlatformApplicationResponse;
class ListPhoneNumbersOptedOutRequest;
class ListPhoneNumbersOptedOutResponse;
class ListPlatformApplicationsRequest;
class ListPlatformApplicationsResponse;
class ListSubscriptionsRequest;
class ListSubscriptionsResponse;
class ListSubscriptionsByTopicRequest;
class ListSubscriptionsByTopicResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTopicsRequest;
class ListTopicsResponse;
class OptInPhoneNumberRequest;
class OptInPhoneNumberResponse;
class PublishRequest;
class PublishResponse;
class RemovePermissionRequest;
class RemovePermissionResponse;
class SetEndpointAttributesRequest;
class SetEndpointAttributesResponse;
class SetPlatformApplicationAttributesRequest;
class SetPlatformApplicationAttributesResponse;
class SetSMSAttributesRequest;
class SetSMSAttributesResponse;
class SetSubscriptionAttributesRequest;
class SetSubscriptionAttributesResponse;
class SetTopicAttributesRequest;
class SetTopicAttributesResponse;
class SubscribeRequest;
class SubscribeResponse;
class TagResourceRequest;
class TagResourceResponse;
class UnsubscribeRequest;
class UnsubscribeResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWS_EXPORT SnsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SnsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SnsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
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
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
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
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UnsubscribeResponse * unsubscribe(const UnsubscribeRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(SnsClient)
    Q_DISABLE_COPY(SnsClient)

};

} // namespace SNS
} // namespace QtAws

#endif
