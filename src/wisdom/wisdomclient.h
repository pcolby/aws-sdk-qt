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

#ifndef QTAWS_WISDOMCLIENT_H
#define QTAWS_WISDOMCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawswisdomglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Wisdom {

class WisdomClientPrivate;
class CreateAssistantRequest;
class CreateAssistantResponse;
class CreateAssistantAssociationRequest;
class CreateAssistantAssociationResponse;
class CreateContentRequest;
class CreateContentResponse;
class CreateKnowledgeBaseRequest;
class CreateKnowledgeBaseResponse;
class CreateSessionRequest;
class CreateSessionResponse;
class DeleteAssistantRequest;
class DeleteAssistantResponse;
class DeleteAssistantAssociationRequest;
class DeleteAssistantAssociationResponse;
class DeleteContentRequest;
class DeleteContentResponse;
class DeleteKnowledgeBaseRequest;
class DeleteKnowledgeBaseResponse;
class GetAssistantRequest;
class GetAssistantResponse;
class GetAssistantAssociationRequest;
class GetAssistantAssociationResponse;
class GetContentRequest;
class GetContentResponse;
class GetContentSummaryRequest;
class GetContentSummaryResponse;
class GetKnowledgeBaseRequest;
class GetKnowledgeBaseResponse;
class GetRecommendationsRequest;
class GetRecommendationsResponse;
class GetSessionRequest;
class GetSessionResponse;
class ListAssistantAssociationsRequest;
class ListAssistantAssociationsResponse;
class ListAssistantsRequest;
class ListAssistantsResponse;
class ListContentsRequest;
class ListContentsResponse;
class ListKnowledgeBasesRequest;
class ListKnowledgeBasesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class NotifyRecommendationsReceivedRequest;
class NotifyRecommendationsReceivedResponse;
class PutFeedbackRequest;
class PutFeedbackResponse;
class QueryAssistantRequest;
class QueryAssistantResponse;
class RemoveKnowledgeBaseTemplateUriRequest;
class RemoveKnowledgeBaseTemplateUriResponse;
class SearchContentRequest;
class SearchContentResponse;
class SearchSessionsRequest;
class SearchSessionsResponse;
class StartContentUploadRequest;
class StartContentUploadResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateContentRequest;
class UpdateContentResponse;
class UpdateKnowledgeBaseTemplateUriRequest;
class UpdateKnowledgeBaseTemplateUriResponse;

class QTAWSWISDOM_EXPORT WisdomClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    WisdomClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit WisdomClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateAssistantResponse * createAssistant(const CreateAssistantRequest &request);
    CreateAssistantAssociationResponse * createAssistantAssociation(const CreateAssistantAssociationRequest &request);
    CreateContentResponse * createContent(const CreateContentRequest &request);
    CreateKnowledgeBaseResponse * createKnowledgeBase(const CreateKnowledgeBaseRequest &request);
    CreateSessionResponse * createSession(const CreateSessionRequest &request);
    DeleteAssistantResponse * deleteAssistant(const DeleteAssistantRequest &request);
    DeleteAssistantAssociationResponse * deleteAssistantAssociation(const DeleteAssistantAssociationRequest &request);
    DeleteContentResponse * deleteContent(const DeleteContentRequest &request);
    DeleteKnowledgeBaseResponse * deleteKnowledgeBase(const DeleteKnowledgeBaseRequest &request);
    GetAssistantResponse * getAssistant(const GetAssistantRequest &request);
    GetAssistantAssociationResponse * getAssistantAssociation(const GetAssistantAssociationRequest &request);
    GetContentResponse * getContent(const GetContentRequest &request);
    GetContentSummaryResponse * getContentSummary(const GetContentSummaryRequest &request);
    GetKnowledgeBaseResponse * getKnowledgeBase(const GetKnowledgeBaseRequest &request);
    GetRecommendationsResponse * getRecommendations(const GetRecommendationsRequest &request);
    GetSessionResponse * getSession(const GetSessionRequest &request);
    ListAssistantAssociationsResponse * listAssistantAssociations(const ListAssistantAssociationsRequest &request);
    ListAssistantsResponse * listAssistants(const ListAssistantsRequest &request);
    ListContentsResponse * listContents(const ListContentsRequest &request);
    ListKnowledgeBasesResponse * listKnowledgeBases(const ListKnowledgeBasesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    NotifyRecommendationsReceivedResponse * notifyRecommendationsReceived(const NotifyRecommendationsReceivedRequest &request);
    PutFeedbackResponse * putFeedback(const PutFeedbackRequest &request);
    QueryAssistantResponse * queryAssistant(const QueryAssistantRequest &request);
    RemoveKnowledgeBaseTemplateUriResponse * removeKnowledgeBaseTemplateUri(const RemoveKnowledgeBaseTemplateUriRequest &request);
    SearchContentResponse * searchContent(const SearchContentRequest &request);
    SearchSessionsResponse * searchSessions(const SearchSessionsRequest &request);
    StartContentUploadResponse * startContentUpload(const StartContentUploadRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateContentResponse * updateContent(const UpdateContentRequest &request);
    UpdateKnowledgeBaseTemplateUriResponse * updateKnowledgeBaseTemplateUri(const UpdateKnowledgeBaseTemplateUriRequest &request);

private:
    Q_DECLARE_PRIVATE(WisdomClient)
    Q_DISABLE_COPY(WisdomClient)

};

} // namespace Wisdom
} // namespace QtAws

#endif
