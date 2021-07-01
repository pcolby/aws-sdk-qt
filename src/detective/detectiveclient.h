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

#ifndef QTAWS_DETECTIVECLIENT_H
#define QTAWS_DETECTIVECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsdetectiveglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Detective {

class DetectiveClientPrivate;
class AcceptInvitationRequest;
class AcceptInvitationResponse;
class CreateGraphRequest;
class CreateGraphResponse;
class CreateMembersRequest;
class CreateMembersResponse;
class DeleteGraphRequest;
class DeleteGraphResponse;
class DeleteMembersRequest;
class DeleteMembersResponse;
class DisassociateMembershipRequest;
class DisassociateMembershipResponse;
class GetMembersRequest;
class GetMembersResponse;
class ListGraphsRequest;
class ListGraphsResponse;
class ListInvitationsRequest;
class ListInvitationsResponse;
class ListMembersRequest;
class ListMembersResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class RejectInvitationRequest;
class RejectInvitationResponse;
class StartMonitoringMemberRequest;
class StartMonitoringMemberResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWSDETECTIVE_EXPORT DetectiveClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    DetectiveClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit DetectiveClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptInvitationResponse * acceptInvitation(const AcceptInvitationRequest &request);
    CreateGraphResponse * createGraph(const CreateGraphRequest &request);
    CreateMembersResponse * createMembers(const CreateMembersRequest &request);
    DeleteGraphResponse * deleteGraph(const DeleteGraphRequest &request);
    DeleteMembersResponse * deleteMembers(const DeleteMembersRequest &request);
    DisassociateMembershipResponse * disassociateMembership(const DisassociateMembershipRequest &request);
    GetMembersResponse * getMembers(const GetMembersRequest &request);
    ListGraphsResponse * listGraphs(const ListGraphsRequest &request);
    ListInvitationsResponse * listInvitations(const ListInvitationsRequest &request);
    ListMembersResponse * listMembers(const ListMembersRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    RejectInvitationResponse * rejectInvitation(const RejectInvitationRequest &request);
    StartMonitoringMemberResponse * startMonitoringMember(const StartMonitoringMemberRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(DetectiveClient)
    Q_DISABLE_COPY(DetectiveClient)

};

} // namespace Detective
} // namespace QtAws

#endif
