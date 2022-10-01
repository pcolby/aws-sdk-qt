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

#ifndef QTAWS_SSMCONTACTSCLIENT_H
#define QTAWS_SSMCONTACTSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsssmcontactsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace SsmContacts {

class SsmContactsClientPrivate;
class AcceptPageRequest;
class AcceptPageResponse;
class ActivateContactChannelRequest;
class ActivateContactChannelResponse;
class CreateContactRequest;
class CreateContactResponse;
class CreateContactChannelRequest;
class CreateContactChannelResponse;
class DeactivateContactChannelRequest;
class DeactivateContactChannelResponse;
class DeleteContactRequest;
class DeleteContactResponse;
class DeleteContactChannelRequest;
class DeleteContactChannelResponse;
class DescribeEngagementRequest;
class DescribeEngagementResponse;
class DescribePageRequest;
class DescribePageResponse;
class GetContactRequest;
class GetContactResponse;
class GetContactChannelRequest;
class GetContactChannelResponse;
class GetContactPolicyRequest;
class GetContactPolicyResponse;
class ListContactChannelsRequest;
class ListContactChannelsResponse;
class ListContactsRequest;
class ListContactsResponse;
class ListEngagementsRequest;
class ListEngagementsResponse;
class ListPageReceiptsRequest;
class ListPageReceiptsResponse;
class ListPagesByContactRequest;
class ListPagesByContactResponse;
class ListPagesByEngagementRequest;
class ListPagesByEngagementResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutContactPolicyRequest;
class PutContactPolicyResponse;
class SendActivationCodeRequest;
class SendActivationCodeResponse;
class StartEngagementRequest;
class StartEngagementResponse;
class StopEngagementRequest;
class StopEngagementResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateContactRequest;
class UpdateContactResponse;
class UpdateContactChannelRequest;
class UpdateContactChannelResponse;

class QTAWSSSMCONTACTS_EXPORT SsmContactsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SsmContactsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit SsmContactsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptPageResponse * acceptPage(const AcceptPageRequest &request);
    ActivateContactChannelResponse * activateContactChannel(const ActivateContactChannelRequest &request);
    CreateContactResponse * createContact(const CreateContactRequest &request);
    CreateContactChannelResponse * createContactChannel(const CreateContactChannelRequest &request);
    DeactivateContactChannelResponse * deactivateContactChannel(const DeactivateContactChannelRequest &request);
    DeleteContactResponse * deleteContact(const DeleteContactRequest &request);
    DeleteContactChannelResponse * deleteContactChannel(const DeleteContactChannelRequest &request);
    DescribeEngagementResponse * describeEngagement(const DescribeEngagementRequest &request);
    DescribePageResponse * describePage(const DescribePageRequest &request);
    GetContactResponse * getContact(const GetContactRequest &request);
    GetContactChannelResponse * getContactChannel(const GetContactChannelRequest &request);
    GetContactPolicyResponse * getContactPolicy(const GetContactPolicyRequest &request);
    ListContactChannelsResponse * listContactChannels(const ListContactChannelsRequest &request);
    ListContactsResponse * listContacts(const ListContactsRequest &request);
    ListEngagementsResponse * listEngagements(const ListEngagementsRequest &request);
    ListPageReceiptsResponse * listPageReceipts(const ListPageReceiptsRequest &request);
    ListPagesByContactResponse * listPagesByContact(const ListPagesByContactRequest &request);
    ListPagesByEngagementResponse * listPagesByEngagement(const ListPagesByEngagementRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutContactPolicyResponse * putContactPolicy(const PutContactPolicyRequest &request);
    SendActivationCodeResponse * sendActivationCode(const SendActivationCodeRequest &request);
    StartEngagementResponse * startEngagement(const StartEngagementRequest &request);
    StopEngagementResponse * stopEngagement(const StopEngagementRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateContactResponse * updateContact(const UpdateContactRequest &request);
    UpdateContactChannelResponse * updateContactChannel(const UpdateContactChannelRequest &request);

private:
    Q_DECLARE_PRIVATE(SsmContactsClient)
    Q_DISABLE_COPY(SsmContactsClient)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
