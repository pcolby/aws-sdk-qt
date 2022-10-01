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

#include "wisdomclient.h"
#include "wisdomclient_p.h"

#include "core/awssignaturev4.h"
#include "createassistantrequest.h"
#include "createassistantresponse.h"
#include "createassistantassociationrequest.h"
#include "createassistantassociationresponse.h"
#include "createcontentrequest.h"
#include "createcontentresponse.h"
#include "createknowledgebaserequest.h"
#include "createknowledgebaseresponse.h"
#include "createsessionrequest.h"
#include "createsessionresponse.h"
#include "deleteassistantrequest.h"
#include "deleteassistantresponse.h"
#include "deleteassistantassociationrequest.h"
#include "deleteassistantassociationresponse.h"
#include "deletecontentrequest.h"
#include "deletecontentresponse.h"
#include "deleteknowledgebaserequest.h"
#include "deleteknowledgebaseresponse.h"
#include "getassistantrequest.h"
#include "getassistantresponse.h"
#include "getassistantassociationrequest.h"
#include "getassistantassociationresponse.h"
#include "getcontentrequest.h"
#include "getcontentresponse.h"
#include "getcontentsummaryrequest.h"
#include "getcontentsummaryresponse.h"
#include "getknowledgebaserequest.h"
#include "getknowledgebaseresponse.h"
#include "getrecommendationsrequest.h"
#include "getrecommendationsresponse.h"
#include "getsessionrequest.h"
#include "getsessionresponse.h"
#include "listassistantassociationsrequest.h"
#include "listassistantassociationsresponse.h"
#include "listassistantsrequest.h"
#include "listassistantsresponse.h"
#include "listcontentsrequest.h"
#include "listcontentsresponse.h"
#include "listknowledgebasesrequest.h"
#include "listknowledgebasesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "notifyrecommendationsreceivedrequest.h"
#include "notifyrecommendationsreceivedresponse.h"
#include "putfeedbackrequest.h"
#include "putfeedbackresponse.h"
#include "queryassistantrequest.h"
#include "queryassistantresponse.h"
#include "removeknowledgebasetemplateurirequest.h"
#include "removeknowledgebasetemplateuriresponse.h"
#include "searchcontentrequest.h"
#include "searchcontentresponse.h"
#include "searchsessionsrequest.h"
#include "searchsessionsresponse.h"
#include "startcontentuploadrequest.h"
#include "startcontentuploadresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatecontentrequest.h"
#include "updatecontentresponse.h"
#include "updateknowledgebasetemplateurirequest.h"
#include "updateknowledgebasetemplateuriresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Wisdom
 * \brief Contains classess for accessing Amazon Connect Wisdom Service.
 *
 * \inmodule QtAwsWisdom
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::WisdomClient
 * \brief The WisdomClient class provides access to the Amazon Connect Wisdom Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 */

/*!
 * \brief Constructs a WisdomClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
WisdomClient::WisdomClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new WisdomClientPrivate(this), parent)
{
    Q_D(WisdomClient);
    d->apiVersion = QStringLiteral("2020-10-19");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Connect Wisdom Service");
    d->serviceName = QStringLiteral("wisdom");
}

/*!
 * \overload WisdomClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
WisdomClient::WisdomClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new WisdomClientPrivate(this), parent)
{
    Q_D(WisdomClient);
    d->apiVersion = QStringLiteral("2020-10-19");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Connect Wisdom Service");
    d->serviceName = QStringLiteral("wisdom");
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * CreateAssistantResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Connect Wisdom
 */
CreateAssistantResponse * WisdomClient::createAssistant(const CreateAssistantRequest &request)
{
    return qobject_cast<CreateAssistantResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * CreateAssistantAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an association between an Amazon Connect Wisdom assistant and another resource. Currently, the only supported
 * association is with a knowledge base. An assistant can have only a single
 */
CreateAssistantAssociationResponse * WisdomClient::createAssistantAssociation(const CreateAssistantAssociationRequest &request)
{
    return qobject_cast<CreateAssistantAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * CreateContentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates Wisdom content. Before to calling this API, use <a
 * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_StartContentUpload.html">StartContentUpload</a> to
 * upload an
 */
CreateContentResponse * WisdomClient::createContent(const CreateContentRequest &request)
{
    return qobject_cast<CreateContentResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * CreateKnowledgeBaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a knowledge
 *
 * base> <note>
 *
 * When using this API, you cannot reuse <a
 * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/Welcome.html">Amazon AppIntegrations</a>
 * DataIntegrations with external knowledge bases such as Salesforce and ServiceNow. If you do, you'll get an
 * <code>InvalidRequestException</code> error.
 *
 * </p
 *
 * For example, you're programmatically managing your external knowledge base, and you want to add or remove one of the
 * fields that is being ingested from Salesforce. Do the
 *
 * following> <ol> <li>
 *
 * Call <a
 *
 * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_DeleteKnowledgeBase.html">DeleteKnowledgeBase</a>>
 * </li> <li>
 *
 * Call <a
 *
 * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_DeleteDataIntegration.html">DeleteDataIntegration</a>>
 * </li> <li>
 *
 * Call <a
 * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_CreateDataIntegration.html">CreateDataIntegration</a>
 * to recreate the DataIntegration or a create different
 *
 * one> </li> <li>
 *
 * Call
 */
CreateKnowledgeBaseResponse * WisdomClient::createKnowledgeBase(const CreateKnowledgeBaseRequest &request)
{
    return qobject_cast<CreateKnowledgeBaseResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * CreateSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a session. A session is a contextual container used for generating recommendations. Amazon Connect creates a new
 * Wisdom session for each contact on which Wisdom is
 */
CreateSessionResponse * WisdomClient::createSession(const CreateSessionRequest &request)
{
    return qobject_cast<CreateSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * DeleteAssistantResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an
 */
DeleteAssistantResponse * WisdomClient::deleteAssistant(const DeleteAssistantRequest &request)
{
    return qobject_cast<DeleteAssistantResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * DeleteAssistantAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an assistant
 */
DeleteAssistantAssociationResponse * WisdomClient::deleteAssistantAssociation(const DeleteAssistantAssociationRequest &request)
{
    return qobject_cast<DeleteAssistantAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * DeleteContentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the
 */
DeleteContentResponse * WisdomClient::deleteContent(const DeleteContentRequest &request)
{
    return qobject_cast<DeleteContentResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * DeleteKnowledgeBaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the knowledge
 *
 * base> <note>
 *
 * When you use this API to delete an external knowledge base such as Salesforce or ServiceNow, you must also delete the <a
 * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/Welcome.html">Amazon AppIntegrations</a>
 * DataIntegration. This is because you can't reuse the DataIntegration after it's been associated with an external
 * knowledge base. However, you can delete and recreate it. See <a
 * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_DeleteDataIntegration.html">DeleteDataIntegration</a>
 * and <a
 * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_CreateDataIntegration.html">CreateDataIntegration</a>
 * in the <i>Amazon AppIntegrations API
 */
DeleteKnowledgeBaseResponse * WisdomClient::deleteKnowledgeBase(const DeleteKnowledgeBaseRequest &request)
{
    return qobject_cast<DeleteKnowledgeBaseResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * GetAssistantResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about an
 */
GetAssistantResponse * WisdomClient::getAssistant(const GetAssistantRequest &request)
{
    return qobject_cast<GetAssistantResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * GetAssistantAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about an assistant
 */
GetAssistantAssociationResponse * WisdomClient::getAssistantAssociation(const GetAssistantAssociationRequest &request)
{
    return qobject_cast<GetAssistantAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * GetContentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves content, including a pre-signed URL to download the
 */
GetContentResponse * WisdomClient::getContent(const GetContentRequest &request)
{
    return qobject_cast<GetContentResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * GetContentSummaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves summary information about the
 */
GetContentSummaryResponse * WisdomClient::getContentSummary(const GetContentSummaryRequest &request)
{
    return qobject_cast<GetContentSummaryResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * GetKnowledgeBaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the knowledge
 */
GetKnowledgeBaseResponse * WisdomClient::getKnowledgeBase(const GetKnowledgeBaseRequest &request)
{
    return qobject_cast<GetKnowledgeBaseResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * GetRecommendationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves recommendations for the specified session. To avoid retrieving the same recommendations in subsequent calls,
 * use <a
 * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_NotifyRecommendationsReceived.html">NotifyRecommendationsReceived</a>.
 * This API supports long-polling behavior with the <code>waitTimeSeconds</code> parameter. Short poll is the default
 * behavior and only returns recommendations already available. To perform a manual query against an assistant, use <a
 */
GetRecommendationsResponse * WisdomClient::getRecommendations(const GetRecommendationsRequest &request)
{
    return qobject_cast<GetRecommendationsResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * GetSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information for a specified
 */
GetSessionResponse * WisdomClient::getSession(const GetSessionRequest &request)
{
    return qobject_cast<GetSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * ListAssistantAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists information about assistant
 */
ListAssistantAssociationsResponse * WisdomClient::listAssistantAssociations(const ListAssistantAssociationsRequest &request)
{
    return qobject_cast<ListAssistantAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * ListAssistantsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists information about
 */
ListAssistantsResponse * WisdomClient::listAssistants(const ListAssistantsRequest &request)
{
    return qobject_cast<ListAssistantsResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * ListContentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the
 */
ListContentsResponse * WisdomClient::listContents(const ListContentsRequest &request)
{
    return qobject_cast<ListContentsResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * ListKnowledgeBasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the knowledge
 */
ListKnowledgeBasesResponse * WisdomClient::listKnowledgeBases(const ListKnowledgeBasesRequest &request)
{
    return qobject_cast<ListKnowledgeBasesResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for the specified
 */
ListTagsForResourceResponse * WisdomClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * NotifyRecommendationsReceivedResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified recommendations from the specified assistant's queue of newly available recommendations. You can
 * use this API in conjunction with <a
 * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_GetRecommendations.html">GetRecommendations</a> and a
 * <code>waitTimeSeconds</code> input for long-polling behavior and avoiding duplicate
 */
NotifyRecommendationsReceivedResponse * WisdomClient::notifyRecommendationsReceived(const NotifyRecommendationsReceivedRequest &request)
{
    return qobject_cast<NotifyRecommendationsReceivedResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * PutFeedbackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Submits feedback to Wisdom. The feedback is used to improve future recommendations from <a
 * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_GetRecommendations.html">GetRecommendations</a> or
 * results from <a
 * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_QueryAssistant.html">QueryAssistant</a>. Feedback can
 * be resubmitted up to 6 hours after submission.
 */
PutFeedbackResponse * WisdomClient::putFeedback(const PutFeedbackRequest &request)
{
    return qobject_cast<PutFeedbackResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * QueryAssistantResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Performs a manual search against the specified assistant. To retrieve recommendations for an assistant, use <a
 * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_GetRecommendations.html">GetRecommendations</a>.
 */
QueryAssistantResponse * WisdomClient::queryAssistant(const QueryAssistantRequest &request)
{
    return qobject_cast<QueryAssistantResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * RemoveKnowledgeBaseTemplateUriResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a URI template from a knowledge
 */
RemoveKnowledgeBaseTemplateUriResponse * WisdomClient::removeKnowledgeBaseTemplateUri(const RemoveKnowledgeBaseTemplateUriRequest &request)
{
    return qobject_cast<RemoveKnowledgeBaseTemplateUriResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * SearchContentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches for content in a specified knowledge base. Can be used to get a specific content resource by its
 */
SearchContentResponse * WisdomClient::searchContent(const SearchContentRequest &request)
{
    return qobject_cast<SearchContentResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * SearchSessionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches for
 */
SearchSessionsResponse * WisdomClient::searchSessions(const SearchSessionsRequest &request)
{
    return qobject_cast<SearchSessionsResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * StartContentUploadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get a URL to upload content to a knowledge base. To upload content, first make a PUT request to the returned URL with
 * your file, making sure to include the required headers. Then use <a
 * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_CreateContent.html">CreateContent</a> to finalize the
 * content creation process or <a
 * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_UpdateContent.html">UpdateContent</a> to modify an
 * existing resource. You can only upload content to a knowledge base of type
 */
StartContentUploadResponse * WisdomClient::startContentUpload(const StartContentUploadRequest &request)
{
    return qobject_cast<StartContentUploadResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified tags to the specified
 */
TagResourceResponse * WisdomClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the specified
 */
UntagResourceResponse * WisdomClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * UpdateContentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates information about the
 */
UpdateContentResponse * WisdomClient::updateContent(const UpdateContentRequest &request)
{
    return qobject_cast<UpdateContentResponse *>(send(request));
}

/*!
 * Sends \a request to the WisdomClient service, and returns a pointer to an
 * UpdateKnowledgeBaseTemplateUriResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the template URI of a knowledge base. This is only supported for knowledge bases of type EXTERNAL. Include a
 * single variable in <code>${variable}</code> format; this interpolated by Wisdom using ingested content. For example, if
 * you ingest a Salesforce article, it has an <code>Id</code> value, and you can set the template URI to
 * <code>https://myInstanceName.lightning.force.com/lightning/r/Knowledge__kav/&ast;${Id}&ast;/view</code>.
 */
UpdateKnowledgeBaseTemplateUriResponse * WisdomClient::updateKnowledgeBaseTemplateUri(const UpdateKnowledgeBaseTemplateUriRequest &request)
{
    return qobject_cast<UpdateKnowledgeBaseTemplateUriResponse *>(send(request));
}

/*!
 * \class QtAws::Wisdom::WisdomClientPrivate
 * \brief The WisdomClientPrivate class provides private implementation for WisdomClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a WisdomClientPrivate object with public implementation \a q.
 */
WisdomClientPrivate::WisdomClientPrivate(WisdomClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Wisdom
} // namespace QtAws
