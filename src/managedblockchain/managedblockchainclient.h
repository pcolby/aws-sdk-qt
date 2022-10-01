// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MANAGEDBLOCKCHAINCLIENT_H
#define QTAWS_MANAGEDBLOCKCHAINCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmanagedblockchainglobal.h"

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

class QTAWSMANAGEDBLOCKCHAIN_EXPORT ManagedBlockchainClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ManagedBlockchainClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ManagedBlockchainClient(
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
