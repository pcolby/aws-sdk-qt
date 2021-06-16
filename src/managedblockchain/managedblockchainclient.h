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

#ifndef QTAWS_MANAGEDBLOCKCHAINCLIENT_H
#define QTAWS_MANAGEDBLOCKCHAINCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace ManagedBlockchain {

class ManagedBlockchainClientPrivate;
class CreateMemberRequest;
class CreateMemberResponse;
class CreateNetworkRequest;
class CreateNetworkResponse;
class CreateNodeRequest;
class CreateNodeResponse;
class CreateProposalRequest;
class CreateProposalResponse;
class DeleteMemberRequest;
class DeleteMemberResponse;
class DeleteNodeRequest;
class DeleteNodeResponse;
class GetMemberRequest;
class GetMemberResponse;
class GetNetworkRequest;
class GetNetworkResponse;
class GetNodeRequest;
class GetNodeResponse;
class GetProposalRequest;
class GetProposalResponse;
class ListInvitationsRequest;
class ListInvitationsResponse;
class ListMembersRequest;
class ListMembersResponse;
class ListNetworksRequest;
class ListNetworksResponse;
class ListNodesRequest;
class ListNodesResponse;
class ListProposalVotesRequest;
class ListProposalVotesResponse;
class ListProposalsRequest;
class ListProposalsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class RejectInvitationRequest;
class RejectInvitationResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateMemberRequest;
class UpdateMemberResponse;
class UpdateNodeRequest;
class UpdateNodeResponse;
class VoteOnProposalRequest;
class VoteOnProposalResponse;

class QTAWS_EXPORT ManagedBlockchainClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ManagedBlockchainClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ManagedBlockchainClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateMemberResponse * createMember(const CreateMemberRequest &request);
    CreateNetworkResponse * createNetwork(const CreateNetworkRequest &request);
    CreateNodeResponse * createNode(const CreateNodeRequest &request);
    CreateProposalResponse * createProposal(const CreateProposalRequest &request);
    DeleteMemberResponse * deleteMember(const DeleteMemberRequest &request);
    DeleteNodeResponse * deleteNode(const DeleteNodeRequest &request);
    GetMemberResponse * getMember(const GetMemberRequest &request);
    GetNetworkResponse * getNetwork(const GetNetworkRequest &request);
    GetNodeResponse * getNode(const GetNodeRequest &request);
    GetProposalResponse * getProposal(const GetProposalRequest &request);
    ListInvitationsResponse * listInvitations(const ListInvitationsRequest &request);
    ListMembersResponse * listMembers(const ListMembersRequest &request);
    ListNetworksResponse * listNetworks(const ListNetworksRequest &request);
    ListNodesResponse * listNodes(const ListNodesRequest &request);
    ListProposalVotesResponse * listProposalVotes(const ListProposalVotesRequest &request);
    ListProposalsResponse * listProposals(const ListProposalsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    RejectInvitationResponse * rejectInvitation(const RejectInvitationRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateMemberResponse * updateMember(const UpdateMemberRequest &request);
    UpdateNodeResponse * updateNode(const UpdateNodeRequest &request);
    VoteOnProposalResponse * voteOnProposal(const VoteOnProposalRequest &request);

private:
    Q_DECLARE_PRIVATE(ManagedBlockchainClient)
    Q_DISABLE_COPY(ManagedBlockchainClient)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
