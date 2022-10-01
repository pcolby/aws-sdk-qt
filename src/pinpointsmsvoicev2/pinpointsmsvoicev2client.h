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

#ifndef QTAWS_PINPOINTSMSVOICEV2CLIENT_H
#define QTAWS_PINPOINTSMSVOICEV2CLIENT_H

#include "core/awsabstractclient.h"

#include "qtawspinpointsmsvoicev2global.h"

class QNetworkReply;

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class PinpointSmsVoiceV2ClientPrivate;
class AssociateOriginationIdentityRequest;
class AssociateOriginationIdentityResponse;
class CreateConfigurationSetRequest;
class CreateConfigurationSetResponse;
class CreateEventDestinationRequest;
class CreateEventDestinationResponse;
class CreateOptOutListRequest;
class CreateOptOutListResponse;
class CreatePoolRequest;
class CreatePoolResponse;
class DeleteConfigurationSetRequest;
class DeleteConfigurationSetResponse;
class DeleteDefaultMessageTypeRequest;
class DeleteDefaultMessageTypeResponse;
class DeleteDefaultSenderIdRequest;
class DeleteDefaultSenderIdResponse;
class DeleteEventDestinationRequest;
class DeleteEventDestinationResponse;
class DeleteKeywordRequest;
class DeleteKeywordResponse;
class DeleteOptOutListRequest;
class DeleteOptOutListResponse;
class DeleteOptedOutNumberRequest;
class DeleteOptedOutNumberResponse;
class DeletePoolRequest;
class DeletePoolResponse;
class DeleteTextMessageSpendLimitOverrideRequest;
class DeleteTextMessageSpendLimitOverrideResponse;
class DeleteVoiceMessageSpendLimitOverrideRequest;
class DeleteVoiceMessageSpendLimitOverrideResponse;
class DescribeAccountAttributesRequest;
class DescribeAccountAttributesResponse;
class DescribeAccountLimitsRequest;
class DescribeAccountLimitsResponse;
class DescribeConfigurationSetsRequest;
class DescribeConfigurationSetsResponse;
class DescribeKeywordsRequest;
class DescribeKeywordsResponse;
class DescribeOptOutListsRequest;
class DescribeOptOutListsResponse;
class DescribeOptedOutNumbersRequest;
class DescribeOptedOutNumbersResponse;
class DescribePhoneNumbersRequest;
class DescribePhoneNumbersResponse;
class DescribePoolsRequest;
class DescribePoolsResponse;
class DescribeSenderIdsRequest;
class DescribeSenderIdsResponse;
class DescribeSpendLimitsRequest;
class DescribeSpendLimitsResponse;
class DisassociateOriginationIdentityRequest;
class DisassociateOriginationIdentityResponse;
class ListPoolOriginationIdentitiesRequest;
class ListPoolOriginationIdentitiesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutKeywordRequest;
class PutKeywordResponse;
class PutOptedOutNumberRequest;
class PutOptedOutNumberResponse;
class ReleasePhoneNumberRequest;
class ReleasePhoneNumberResponse;
class RequestPhoneNumberRequest;
class RequestPhoneNumberResponse;
class SendTextMessageRequest;
class SendTextMessageResponse;
class SendVoiceMessageRequest;
class SendVoiceMessageResponse;
class SetDefaultMessageTypeRequest;
class SetDefaultMessageTypeResponse;
class SetDefaultSenderIdRequest;
class SetDefaultSenderIdResponse;
class SetTextMessageSpendLimitOverrideRequest;
class SetTextMessageSpendLimitOverrideResponse;
class SetVoiceMessageSpendLimitOverrideRequest;
class SetVoiceMessageSpendLimitOverrideResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateEventDestinationRequest;
class UpdateEventDestinationResponse;
class UpdatePhoneNumberRequest;
class UpdatePhoneNumberResponse;
class UpdatePoolRequest;
class UpdatePoolResponse;

class QTAWSPINPOINTSMSVOICEV2_EXPORT PinpointSmsVoiceV2Client : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    PinpointSmsVoiceV2Client(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit PinpointSmsVoiceV2Client(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateOriginationIdentityResponse * associateOriginationIdentity(const AssociateOriginationIdentityRequest &request);
    CreateConfigurationSetResponse * createConfigurationSet(const CreateConfigurationSetRequest &request);
    CreateEventDestinationResponse * createEventDestination(const CreateEventDestinationRequest &request);
    CreateOptOutListResponse * createOptOutList(const CreateOptOutListRequest &request);
    CreatePoolResponse * createPool(const CreatePoolRequest &request);
    DeleteConfigurationSetResponse * deleteConfigurationSet(const DeleteConfigurationSetRequest &request);
    DeleteDefaultMessageTypeResponse * deleteDefaultMessageType(const DeleteDefaultMessageTypeRequest &request);
    DeleteDefaultSenderIdResponse * deleteDefaultSenderId(const DeleteDefaultSenderIdRequest &request);
    DeleteEventDestinationResponse * deleteEventDestination(const DeleteEventDestinationRequest &request);
    DeleteKeywordResponse * deleteKeyword(const DeleteKeywordRequest &request);
    DeleteOptOutListResponse * deleteOptOutList(const DeleteOptOutListRequest &request);
    DeleteOptedOutNumberResponse * deleteOptedOutNumber(const DeleteOptedOutNumberRequest &request);
    DeletePoolResponse * deletePool(const DeletePoolRequest &request);
    DeleteTextMessageSpendLimitOverrideResponse * deleteTextMessageSpendLimitOverride(const DeleteTextMessageSpendLimitOverrideRequest &request);
    DeleteVoiceMessageSpendLimitOverrideResponse * deleteVoiceMessageSpendLimitOverride(const DeleteVoiceMessageSpendLimitOverrideRequest &request);
    DescribeAccountAttributesResponse * describeAccountAttributes(const DescribeAccountAttributesRequest &request);
    DescribeAccountLimitsResponse * describeAccountLimits(const DescribeAccountLimitsRequest &request);
    DescribeConfigurationSetsResponse * describeConfigurationSets(const DescribeConfigurationSetsRequest &request);
    DescribeKeywordsResponse * describeKeywords(const DescribeKeywordsRequest &request);
    DescribeOptOutListsResponse * describeOptOutLists(const DescribeOptOutListsRequest &request);
    DescribeOptedOutNumbersResponse * describeOptedOutNumbers(const DescribeOptedOutNumbersRequest &request);
    DescribePhoneNumbersResponse * describePhoneNumbers(const DescribePhoneNumbersRequest &request);
    DescribePoolsResponse * describePools(const DescribePoolsRequest &request);
    DescribeSenderIdsResponse * describeSenderIds(const DescribeSenderIdsRequest &request);
    DescribeSpendLimitsResponse * describeSpendLimits(const DescribeSpendLimitsRequest &request);
    DisassociateOriginationIdentityResponse * disassociateOriginationIdentity(const DisassociateOriginationIdentityRequest &request);
    ListPoolOriginationIdentitiesResponse * listPoolOriginationIdentities(const ListPoolOriginationIdentitiesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutKeywordResponse * putKeyword(const PutKeywordRequest &request);
    PutOptedOutNumberResponse * putOptedOutNumber(const PutOptedOutNumberRequest &request);
    ReleasePhoneNumberResponse * releasePhoneNumber(const ReleasePhoneNumberRequest &request);
    RequestPhoneNumberResponse * requestPhoneNumber(const RequestPhoneNumberRequest &request);
    SendTextMessageResponse * sendTextMessage(const SendTextMessageRequest &request);
    SendVoiceMessageResponse * sendVoiceMessage(const SendVoiceMessageRequest &request);
    SetDefaultMessageTypeResponse * setDefaultMessageType(const SetDefaultMessageTypeRequest &request);
    SetDefaultSenderIdResponse * setDefaultSenderId(const SetDefaultSenderIdRequest &request);
    SetTextMessageSpendLimitOverrideResponse * setTextMessageSpendLimitOverride(const SetTextMessageSpendLimitOverrideRequest &request);
    SetVoiceMessageSpendLimitOverrideResponse * setVoiceMessageSpendLimitOverride(const SetVoiceMessageSpendLimitOverrideRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateEventDestinationResponse * updateEventDestination(const UpdateEventDestinationRequest &request);
    UpdatePhoneNumberResponse * updatePhoneNumber(const UpdatePhoneNumberRequest &request);
    UpdatePoolResponse * updatePool(const UpdatePoolRequest &request);

private:
    Q_DECLARE_PRIVATE(PinpointSmsVoiceV2Client)
    Q_DISABLE_COPY(PinpointSmsVoiceV2Client)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
