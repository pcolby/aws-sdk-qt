// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "kendraclient.h"
#include "kendraclient_p.h"

#include "core/awssignaturev4.h"
#include "associateentitiestoexperiencerequest.h"
#include "associateentitiestoexperienceresponse.h"
#include "associatepersonastoentitiesrequest.h"
#include "associatepersonastoentitiesresponse.h"
#include "batchdeletedocumentrequest.h"
#include "batchdeletedocumentresponse.h"
#include "batchgetdocumentstatusrequest.h"
#include "batchgetdocumentstatusresponse.h"
#include "batchputdocumentrequest.h"
#include "batchputdocumentresponse.h"
#include "clearquerysuggestionsrequest.h"
#include "clearquerysuggestionsresponse.h"
#include "createaccesscontrolconfigurationrequest.h"
#include "createaccesscontrolconfigurationresponse.h"
#include "createdatasourcerequest.h"
#include "createdatasourceresponse.h"
#include "createexperiencerequest.h"
#include "createexperienceresponse.h"
#include "createfaqrequest.h"
#include "createfaqresponse.h"
#include "createindexrequest.h"
#include "createindexresponse.h"
#include "createquerysuggestionsblocklistrequest.h"
#include "createquerysuggestionsblocklistresponse.h"
#include "createthesaurusrequest.h"
#include "createthesaurusresponse.h"
#include "deleteaccesscontrolconfigurationrequest.h"
#include "deleteaccesscontrolconfigurationresponse.h"
#include "deletedatasourcerequest.h"
#include "deletedatasourceresponse.h"
#include "deleteexperiencerequest.h"
#include "deleteexperienceresponse.h"
#include "deletefaqrequest.h"
#include "deletefaqresponse.h"
#include "deleteindexrequest.h"
#include "deleteindexresponse.h"
#include "deleteprincipalmappingrequest.h"
#include "deleteprincipalmappingresponse.h"
#include "deletequerysuggestionsblocklistrequest.h"
#include "deletequerysuggestionsblocklistresponse.h"
#include "deletethesaurusrequest.h"
#include "deletethesaurusresponse.h"
#include "describeaccesscontrolconfigurationrequest.h"
#include "describeaccesscontrolconfigurationresponse.h"
#include "describedatasourcerequest.h"
#include "describedatasourceresponse.h"
#include "describeexperiencerequest.h"
#include "describeexperienceresponse.h"
#include "describefaqrequest.h"
#include "describefaqresponse.h"
#include "describeindexrequest.h"
#include "describeindexresponse.h"
#include "describeprincipalmappingrequest.h"
#include "describeprincipalmappingresponse.h"
#include "describequerysuggestionsblocklistrequest.h"
#include "describequerysuggestionsblocklistresponse.h"
#include "describequerysuggestionsconfigrequest.h"
#include "describequerysuggestionsconfigresponse.h"
#include "describethesaurusrequest.h"
#include "describethesaurusresponse.h"
#include "disassociateentitiesfromexperiencerequest.h"
#include "disassociateentitiesfromexperienceresponse.h"
#include "disassociatepersonasfromentitiesrequest.h"
#include "disassociatepersonasfromentitiesresponse.h"
#include "getquerysuggestionsrequest.h"
#include "getquerysuggestionsresponse.h"
#include "getsnapshotsrequest.h"
#include "getsnapshotsresponse.h"
#include "listaccesscontrolconfigurationsrequest.h"
#include "listaccesscontrolconfigurationsresponse.h"
#include "listdatasourcesyncjobsrequest.h"
#include "listdatasourcesyncjobsresponse.h"
#include "listdatasourcesrequest.h"
#include "listdatasourcesresponse.h"
#include "listentitypersonasrequest.h"
#include "listentitypersonasresponse.h"
#include "listexperienceentitiesrequest.h"
#include "listexperienceentitiesresponse.h"
#include "listexperiencesrequest.h"
#include "listexperiencesresponse.h"
#include "listfaqsrequest.h"
#include "listfaqsresponse.h"
#include "listgroupsolderthanorderingidrequest.h"
#include "listgroupsolderthanorderingidresponse.h"
#include "listindicesrequest.h"
#include "listindicesresponse.h"
#include "listquerysuggestionsblocklistsrequest.h"
#include "listquerysuggestionsblocklistsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listthesaurirequest.h"
#include "listthesauriresponse.h"
#include "putprincipalmappingrequest.h"
#include "putprincipalmappingresponse.h"
#include "queryrequest.h"
#include "queryresponse.h"
#include "startdatasourcesyncjobrequest.h"
#include "startdatasourcesyncjobresponse.h"
#include "stopdatasourcesyncjobrequest.h"
#include "stopdatasourcesyncjobresponse.h"
#include "submitfeedbackrequest.h"
#include "submitfeedbackresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateaccesscontrolconfigurationrequest.h"
#include "updateaccesscontrolconfigurationresponse.h"
#include "updatedatasourcerequest.h"
#include "updatedatasourceresponse.h"
#include "updateexperiencerequest.h"
#include "updateexperienceresponse.h"
#include "updateindexrequest.h"
#include "updateindexresponse.h"
#include "updatequerysuggestionsblocklistrequest.h"
#include "updatequerysuggestionsblocklistresponse.h"
#include "updatequerysuggestionsconfigrequest.h"
#include "updatequerysuggestionsconfigresponse.h"
#include "updatethesaurusrequest.h"
#include "updatethesaurusresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Kendra
 * \brief Contains classess for accessing AWSKendraFrontendService.
 *
 * \inmodule QtAwsKendra
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::KendraClient
 * \brief The KendraClient class provides access to the AWSKendraFrontendService service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 */

/*!
 * \brief Constructs a KendraClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
KendraClient::KendraClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KendraClientPrivate(this), parent)
{
    Q_D(KendraClient);
    d->apiVersion = QStringLiteral("2019-02-03");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("kendra");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWSKendraFrontendService");
    d->serviceName = QStringLiteral("kendra");
}

/*!
 * \overload KendraClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
KendraClient::KendraClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KendraClientPrivate(this), parent)
{
    Q_D(KendraClient);
    d->apiVersion = QStringLiteral("2019-02-03");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("kendra");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWSKendraFrontendService");
    d->serviceName = QStringLiteral("kendra");
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * AssociateEntitiesToExperienceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Grants users or groups in your Amazon Web Services SSO identity source access to your Amazon Kendra experience. You can
 * create an Amazon Kendra experience such as a search application. For more information on creating a search application
 * experience, see <a href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building
 * a search experience with no
 */
AssociateEntitiesToExperienceResponse * KendraClient::associateEntitiesToExperience(const AssociateEntitiesToExperienceRequest &request)
{
    return qobject_cast<AssociateEntitiesToExperienceResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * AssociatePersonasToEntitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Defines the specific permissions of users or groups in your Amazon Web Services SSO identity source with access to your
 * Amazon Kendra experience. You can create an Amazon Kendra experience such as a search application. For more information
 * on creating a search application experience, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building a search
 * experience with no
 */
AssociatePersonasToEntitiesResponse * KendraClient::associatePersonasToEntities(const AssociatePersonasToEntitiesRequest &request)
{
    return qobject_cast<AssociatePersonasToEntitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * BatchDeleteDocumentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more documents from an index. The documents must have been added with the <code>BatchPutDocument</code>
 *
 * API>
 *
 * The documents are deleted asynchronously. You can see the progress of the deletion by using Amazon Web Services
 * CloudWatch. Any error messages related to the processing of the batch are sent to you CloudWatch
 */
BatchDeleteDocumentResponse * KendraClient::batchDeleteDocument(const BatchDeleteDocumentRequest &request)
{
    return qobject_cast<BatchDeleteDocumentResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * BatchGetDocumentStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the indexing status for one or more documents submitted with the <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/API_BatchPutDocument.html"> BatchPutDocument</a>
 *
 * API>
 *
 * When you use the <code>BatchPutDocument</code> API, documents are indexed asynchronously. You can use the
 * <code>BatchGetDocumentStatus</code> API to get the current status of a list of documents so that you can determine if
 * they have been successfully
 *
 * indexed>
 *
 * You can also use the <code>BatchGetDocumentStatus</code> API to check the status of the <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/API_BatchDeleteDocument.html"> BatchDeleteDocument</a> API. When a
 * document is deleted from the index, Amazon Kendra returns <code>NOT_FOUND</code> as the
 */
BatchGetDocumentStatusResponse * KendraClient::batchGetDocumentStatus(const BatchGetDocumentStatusRequest &request)
{
    return qobject_cast<BatchGetDocumentStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * BatchPutDocumentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more documents to an
 *
 * index>
 *
 * The <code>BatchPutDocument</code> API enables you to ingest inline documents or a set of documents stored in an Amazon
 * S3 bucket. Use this API to ingest your text and unstructured text into an index, add custom attributes to the documents,
 * and to attach an access control list to the documents added to the
 *
 * index>
 *
 * The documents are indexed asynchronously. You can see the progress of the batch using Amazon Web Services CloudWatch.
 * Any error messages related to processing the batch are sent to your Amazon Web Services CloudWatch
 *
 * log>
 *
 * For an example of ingesting inline documents using Python and Java SDKs, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/in-adding-binary-doc.html">Adding files directly to an
 */
BatchPutDocumentResponse * KendraClient::batchPutDocument(const BatchPutDocumentRequest &request)
{
    return qobject_cast<BatchPutDocumentResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * ClearQuerySuggestionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Clears existing query suggestions from an
 *
 * index>
 *
 * This deletes existing suggestions only, not the queries in the query log. After you clear suggestions, Amazon Kendra
 * learns new suggestions based on new queries added to the query log from the time you cleared suggestions. If you do not
 * see any new suggestions, then please allow Amazon Kendra to collect enough queries to learn new
 *
 * suggestions>
 *
 * <code>ClearQuerySuggestions</code> is currently not supported in the Amazon Web Services GovCloud (US-West)
 */
ClearQuerySuggestionsResponse * KendraClient::clearQuerySuggestions(const ClearQuerySuggestionsRequest &request)
{
    return qobject_cast<ClearQuerySuggestionsResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * CreateAccessControlConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an access configuration for your documents. This includes user and group access information for your documents.
 * This is useful for user context filtering, where search results are filtered based on the user or their group access to
 *
 * documents>
 *
 * You can use this to re-configure your existing document level access control without indexing all of your documents
 * again. For example, your index contains top-secret company documents that only certain employees or users should access.
 * One of these users leaves the company or switches to a team that should be blocked from accessing top-secret documents.
 * The user still has access to top-secret documents because the user had access when your documents were previously
 * indexed. You can create a specific access control configuration for the user with deny access. You can later update the
 * access control configuration to allow access if the user returns to the company and re-joins the 'top-secret' team. You
 * can re-configure access control for your documents as circumstances
 *
 * change>
 *
 * To apply your access control configuration to certain documents, you call the <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/API_BatchPutDocument.html">BatchPutDocument</a> API with the
 * <code>AccessControlConfigurationId</code> included in the <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Document.html">Document</a> object. If you use an S3 bucket as a
 * data source, you update the <code>.metadata.json</code> with the <code>AccessControlConfigurationId</code> and
 * synchronize your data source. Amazon Kendra currently only supports access control configuration for S3 data sources and
 * documents indexed using the <code>BatchPutDocument</code>
 */
CreateAccessControlConfigurationResponse * KendraClient::createAccessControlConfiguration(const CreateAccessControlConfigurationRequest &request)
{
    return qobject_cast<CreateAccessControlConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * CreateDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a data source connector that you want to use with an Amazon Kendra
 *
 * index>
 *
 * You specify a name, data source connector type and description for your data source. You also specify configuration
 * information for the data source
 *
 * connector>
 *
 * <code>CreateDataSource</code> is a synchronous operation. The operation returns 200 if the data source was successfully
 * created. Otherwise, an exception is
 *
 * raised>
 *
 * Amazon S3 and <a href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-custom.html">custom</a> data sources are
 * the only supported data sources in the Amazon Web Services GovCloud (US-West)
 *
 * region>
 *
 * For an example of creating an index and data source using the Python SDK, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/gs-python.html">Getting started with Python SDK</a>. For an example
 * of creating an index and data source using the Java SDK, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/gs-java.html">Getting started with Java
 */
CreateDataSourceResponse * KendraClient::createDataSource(const CreateDataSourceRequest &request)
{
    return qobject_cast<CreateDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * CreateExperienceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Kendra experience such as a search application. For more information on creating a search application
 * experience, including using the Python and Java SDKs, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building a search
 * experience with no
 */
CreateExperienceResponse * KendraClient::createExperience(const CreateExperienceRequest &request)
{
    return qobject_cast<CreateExperienceResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * CreateFaqResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an new set of frequently asked question (FAQ) questions and
 *
 * answers>
 *
 * Adding FAQs to an index is an asynchronous
 *
 * operation>
 *
 * For an example of adding an FAQ to an index using Python and Java SDKs, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/in-creating-faq.html#using-faq-file">Using your FAQ
 */
CreateFaqResponse * KendraClient::createFaq(const CreateFaqRequest &request)
{
    return qobject_cast<CreateFaqResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * CreateIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Kendra index. Index creation is an asynchronous API. To determine if index creation has completed,
 * check the <code>Status</code> field returned from a call to <code>DescribeIndex</code>. The <code>Status</code> field is
 * set to <code>ACTIVE</code> when the index is ready to
 *
 * use>
 *
 * Once the index is active you can index your documents using the <code>BatchPutDocument</code> API or using one of the
 * supported data
 *
 * sources>
 *
 * For an example of creating an index and data source using the Python SDK, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/gs-python.html">Getting started with Python SDK</a>. For an example
 * of creating an index and data source using the Java SDK, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/gs-java.html">Getting started with Java
 */
CreateIndexResponse * KendraClient::createIndex(const CreateIndexRequest &request)
{
    return qobject_cast<CreateIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * CreateQuerySuggestionsBlockListResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a block list to exlcude certain queries from
 *
 * suggestions>
 *
 * Any query that contains words or phrases specified in the block list is blocked or filtered out from being shown as a
 *
 * suggestion>
 *
 * You need to provide the file location of your block list text file in your S3 bucket. In your text file, enter each
 * block word or phrase on a separate
 *
 * line>
 *
 * For information on the current quota limits for block lists, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for Amazon
 *
 * Kendra</a>>
 *
 * <code>CreateQuerySuggestionsBlockList</code> is currently not supported in the Amazon Web Services GovCloud (US-West)
 *
 * region>
 *
 * For an example of creating a block list for query suggestions using the Python SDK, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/query-suggestions.html#suggestions-block-list">Query suggestions
 * block
 */
CreateQuerySuggestionsBlockListResponse * KendraClient::createQuerySuggestionsBlockList(const CreateQuerySuggestionsBlockListRequest &request)
{
    return qobject_cast<CreateQuerySuggestionsBlockListResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * CreateThesaurusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a thesaurus for an index. The thesaurus contains a list of synonyms in Solr
 *
 * format>
 *
 * For an example of adding a thesaurus file to an index, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/index-synonyms-adding-thesaurus-file.html">Adding custom synonyms to
 * an
 */
CreateThesaurusResponse * KendraClient::createThesaurus(const CreateThesaurusRequest &request)
{
    return qobject_cast<CreateThesaurusResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * DeleteAccessControlConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an access control configuration that you created for your documents in an index. This includes user and group
 * access information for your documents. This is useful for user context filtering, where search results are filtered
 * based on the user or their group access to
 */
DeleteAccessControlConfigurationResponse * KendraClient::deleteAccessControlConfiguration(const DeleteAccessControlConfigurationRequest &request)
{
    return qobject_cast<DeleteAccessControlConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * DeleteDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon Kendra data source connector. An exception is not thrown if the data source is already being deleted.
 * While the data source is being deleted, the <code>Status</code> field returned by a call to the
 * <code>DescribeDataSource</code> API is set to <code>DELETING</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/delete-data-source.html">Deleting Data
 */
DeleteDataSourceResponse * KendraClient::deleteDataSource(const DeleteDataSourceRequest &request)
{
    return qobject_cast<DeleteDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * DeleteExperienceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes your Amazon Kendra experience such as a search application. For more information on creating a search
 * application experience, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building a search
 * experience with no
 */
DeleteExperienceResponse * KendraClient::deleteExperience(const DeleteExperienceRequest &request)
{
    return qobject_cast<DeleteExperienceResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * DeleteFaqResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes an FAQ from an
 */
DeleteFaqResponse * KendraClient::deleteFaq(const DeleteFaqRequest &request)
{
    return qobject_cast<DeleteFaqResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * DeleteIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing Amazon Kendra index. An exception is not thrown if the index is already being deleted. While the
 * index is being deleted, the <code>Status</code> field returned by a call to the <code>DescribeIndex</code> API is set to
 */
DeleteIndexResponse * KendraClient::deleteIndex(const DeleteIndexRequest &request)
{
    return qobject_cast<DeleteIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * DeletePrincipalMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a group so that all users and sub groups that belong to the group can no longer access documents only available
 * to that
 *
 * group>
 *
 * For example, after deleting the group "Summer Interns", all interns who belonged to that group no longer see intern-only
 * documents in their search
 *
 * results>
 *
 * If you want to delete or replace users or sub groups of a group, you need to use the <code>PutPrincipalMapping</code>
 * operation. For example, if a user in the group "Engineering" leaves the engineering team and another user takes their
 * place, you provide an updated list of users or sub groups that belong to the "Engineering" group when calling
 * <code>PutPrincipalMapping</code>. You can update your internal list of users or sub groups and input this list when
 * calling
 *
 * <code>PutPrincipalMapping</code>>
 *
 * <code>DeletePrincipalMapping</code> is currently not supported in the Amazon Web Services GovCloud (US-West)
 */
DeletePrincipalMappingResponse * KendraClient::deletePrincipalMapping(const DeletePrincipalMappingRequest &request)
{
    return qobject_cast<DeletePrincipalMappingResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * DeleteQuerySuggestionsBlockListResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a block list used for query suggestions for an
 *
 * index>
 *
 * A deleted block list might not take effect right away. Amazon Kendra needs to refresh the entire suggestions list to add
 * back the queries that were previously
 *
 * blocked>
 *
 * <code>DeleteQuerySuggestionsBlockList</code> is currently not supported in the Amazon Web Services GovCloud (US-West)
 */
DeleteQuerySuggestionsBlockListResponse * KendraClient::deleteQuerySuggestionsBlockList(const DeleteQuerySuggestionsBlockListRequest &request)
{
    return qobject_cast<DeleteQuerySuggestionsBlockListResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * DeleteThesaurusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing Amazon Kendra thesaurus.
 */
DeleteThesaurusResponse * KendraClient::deleteThesaurus(const DeleteThesaurusRequest &request)
{
    return qobject_cast<DeleteThesaurusResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * DescribeAccessControlConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about an access control configuration that you created for your documents in an index. This includes
 * user and group access information for your documents. This is useful for user context filtering, where search results
 * are filtered based on the user or their group access to
 */
DescribeAccessControlConfigurationResponse * KendraClient::describeAccessControlConfiguration(const DescribeAccessControlConfigurationRequest &request)
{
    return qobject_cast<DescribeAccessControlConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * DescribeDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about an Amazon Kendra data source
 */
DescribeDataSourceResponse * KendraClient::describeDataSource(const DescribeDataSourceRequest &request)
{
    return qobject_cast<DescribeDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * DescribeExperienceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about your Amazon Kendra experience such as a search application. For more information on creating a
 * search application experience, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building a search
 * experience with no
 */
DescribeExperienceResponse * KendraClient::describeExperience(const DescribeExperienceRequest &request)
{
    return qobject_cast<DescribeExperienceResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * DescribeFaqResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about an FAQ
 */
DescribeFaqResponse * KendraClient::describeFaq(const DescribeFaqRequest &request)
{
    return qobject_cast<DescribeFaqResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * DescribeIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about an existing Amazon Kendra
 */
DescribeIndexResponse * KendraClient::describeIndex(const DescribeIndexRequest &request)
{
    return qobject_cast<DescribeIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * DescribePrincipalMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the processing of <code>PUT</code> and <code>DELETE</code> actions for mapping users to their groups. This
 * includes information on the status of actions currently processing or yet to be processed, when actions were last
 * updated, when actions were received by Amazon Kendra, the latest action that should process and apply after other
 * actions, and useful error messages if an action could not be
 *
 * processed>
 *
 * <code>DescribePrincipalMapping</code> is currently not supported in the Amazon Web Services GovCloud (US-West)
 */
DescribePrincipalMappingResponse * KendraClient::describePrincipalMapping(const DescribePrincipalMappingRequest &request)
{
    return qobject_cast<DescribePrincipalMappingResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * DescribeQuerySuggestionsBlockListResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a block list used for query suggestions for an
 *
 * index>
 *
 * This is used to check the current settings that are applied to a block
 *
 * list>
 *
 * <code>DescribeQuerySuggestionsBlockList</code> is currently not supported in the Amazon Web Services GovCloud (US-West)
 */
DescribeQuerySuggestionsBlockListResponse * KendraClient::describeQuerySuggestionsBlockList(const DescribeQuerySuggestionsBlockListRequest &request)
{
    return qobject_cast<DescribeQuerySuggestionsBlockListResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * DescribeQuerySuggestionsConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information on the settings of query suggestions for an
 *
 * index>
 *
 * This is used to check the current settings applied to query
 *
 * suggestions>
 *
 * <code>DescribeQuerySuggestionsConfig</code> is currently not supported in the Amazon Web Services GovCloud (US-West)
 */
DescribeQuerySuggestionsConfigResponse * KendraClient::describeQuerySuggestionsConfig(const DescribeQuerySuggestionsConfigRequest &request)
{
    return qobject_cast<DescribeQuerySuggestionsConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * DescribeThesaurusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about an existing Amazon Kendra
 */
DescribeThesaurusResponse * KendraClient::describeThesaurus(const DescribeThesaurusRequest &request)
{
    return qobject_cast<DescribeThesaurusResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * DisassociateEntitiesFromExperienceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Prevents users or groups in your Amazon Web Services SSO identity source from accessing your Amazon Kendra experience.
 * You can create an Amazon Kendra experience such as a search application. For more information on creating a search
 * application experience, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building a search
 * experience with no
 */
DisassociateEntitiesFromExperienceResponse * KendraClient::disassociateEntitiesFromExperience(const DisassociateEntitiesFromExperienceRequest &request)
{
    return qobject_cast<DisassociateEntitiesFromExperienceResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * DisassociatePersonasFromEntitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specific permissions of users or groups in your Amazon Web Services SSO identity source with access to your
 * Amazon Kendra experience. You can create an Amazon Kendra experience such as a search application. For more information
 * on creating a search application experience, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building a search
 * experience with no
 */
DisassociatePersonasFromEntitiesResponse * KendraClient::disassociatePersonasFromEntities(const DisassociatePersonasFromEntitiesRequest &request)
{
    return qobject_cast<DisassociatePersonasFromEntitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * GetQuerySuggestionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Fetches the queries that are suggested to your
 *
 * users>
 *
 * <code>GetQuerySuggestions</code> is currently not supported in the Amazon Web Services GovCloud (US-West)
 */
GetQuerySuggestionsResponse * KendraClient::getQuerySuggestions(const GetQuerySuggestionsRequest &request)
{
    return qobject_cast<GetQuerySuggestionsResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * GetSnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves search metrics data. The data provides a snapshot of how your users interact with your search application and
 * how effective the application
 */
GetSnapshotsResponse * KendraClient::getSnapshots(const GetSnapshotsRequest &request)
{
    return qobject_cast<GetSnapshotsResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * ListAccessControlConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists one or more access control configurations for an index. This includes user and group access information for your
 * documents. This is useful for user context filtering, where search results are filtered based on the user or their group
 * access to
 */
ListAccessControlConfigurationsResponse * KendraClient::listAccessControlConfigurations(const ListAccessControlConfigurationsRequest &request)
{
    return qobject_cast<ListAccessControlConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * ListDataSourceSyncJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets statistics about synchronizing a data source
 */
ListDataSourceSyncJobsResponse * KendraClient::listDataSourceSyncJobs(const ListDataSourceSyncJobsRequest &request)
{
    return qobject_cast<ListDataSourceSyncJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * ListDataSourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the data source connectors that you have
 */
ListDataSourcesResponse * KendraClient::listDataSources(const ListDataSourcesRequest &request)
{
    return qobject_cast<ListDataSourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * ListEntityPersonasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists specific permissions of users and groups with access to your Amazon Kendra
 */
ListEntityPersonasResponse * KendraClient::listEntityPersonas(const ListEntityPersonasRequest &request)
{
    return qobject_cast<ListEntityPersonasResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * ListExperienceEntitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists users or groups in your Amazon Web Services SSO identity source that are granted access to your Amazon Kendra
 * experience. You can create an Amazon Kendra experience such as a search application. For more information on creating a
 * search application experience, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building a search
 * experience with no
 */
ListExperienceEntitiesResponse * KendraClient::listExperienceEntities(const ListExperienceEntitiesRequest &request)
{
    return qobject_cast<ListExperienceEntitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * ListExperiencesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists one or more Amazon Kendra experiences. You can create an Amazon Kendra experience such as a search application.
 * For more information on creating a search application experience, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building a search
 * experience with no
 */
ListExperiencesResponse * KendraClient::listExperiences(const ListExperiencesRequest &request)
{
    return qobject_cast<ListExperiencesResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * ListFaqsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of FAQ lists associated with an
 */
ListFaqsResponse * KendraClient::listFaqs(const ListFaqsRequest &request)
{
    return qobject_cast<ListFaqsResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * ListGroupsOlderThanOrderingIdResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of groups that are mapped to users before a given ordering or timestamp
 *
 * identifier>
 *
 * <code>ListGroupsOlderThanOrderingId</code> is currently not supported in the Amazon Web Services GovCloud (US-West)
 */
ListGroupsOlderThanOrderingIdResponse * KendraClient::listGroupsOlderThanOrderingId(const ListGroupsOlderThanOrderingIdRequest &request)
{
    return qobject_cast<ListGroupsOlderThanOrderingIdResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * ListIndicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Amazon Kendra indexes that you
 */
ListIndicesResponse * KendraClient::listIndices(const ListIndicesRequest &request)
{
    return qobject_cast<ListIndicesResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * ListQuerySuggestionsBlockListsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the block lists used for query suggestions for an
 *
 * index>
 *
 * For information on the current quota limits for block lists, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for Amazon
 *
 * Kendra</a>>
 *
 * <code>ListQuerySuggestionsBlockLists</code> is currently not supported in the Amazon Web Services GovCloud (US-West)
 */
ListQuerySuggestionsBlockListsResponse * KendraClient::listQuerySuggestionsBlockLists(const ListQuerySuggestionsBlockListsRequest &request)
{
    return qobject_cast<ListQuerySuggestionsBlockListsResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of tags associated with a specified resource. Indexes, FAQs, and data sources can have tags associated with
 */
ListTagsForResourceResponse * KendraClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * ListThesauriResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the thesauri for an
 */
ListThesauriResponse * KendraClient::listThesauri(const ListThesauriRequest &request)
{
    return qobject_cast<ListThesauriResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * PutPrincipalMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Maps users to their groups so that you only need to provide the user ID when you issue the
 *
 * query>
 *
 * You can also map sub groups to groups. For example, the group "Company Intellectual Property Teams" includes sub groups
 * "Research" and "Engineering". These sub groups include their own list of users or people who work in these teams. Only
 * users who work in research and engineering, and therefore belong in the intellectual property group, can see top-secret
 * company documents in their search
 *
 * results>
 *
 * This is useful for user context filtering, where search results are filtered based on the user or their group access to
 * documents. For more information, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/user-context-filter.html">Filtering on user
 *
 * context</a>>
 *
 * If more than five <code>PUT</code> actions for a group are currently processing, a validation exception is
 *
 * thrown>
 *
 * <code>PutPrincipalMapping</code> is currently not supported in the Amazon Web Services GovCloud (US-West)
 */
PutPrincipalMappingResponse * KendraClient::putPrincipalMapping(const PutPrincipalMappingRequest &request)
{
    return qobject_cast<PutPrincipalMappingResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * QueryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches an active index. Use this API to search your documents using query. The <code>Query</code> API enables to do
 * faceted search and to filter results based on document
 *
 * attributes>
 *
 * It also enables you to provide user context that Amazon Kendra uses to enforce document access control in the search
 *
 * results>
 *
 * Amazon Kendra searches your index for text content and question and answer (FAQ) content. By default the response
 * contains three types of
 *
 * results> <ul> <li>
 *
 * Relevant
 *
 * passage> </li> <li>
 *
 * Matching
 *
 * FAQ> </li> <li>
 *
 * Relevant
 *
 * document> </li> </ul>
 *
 * You can specify that the query return only one type of result using the <code>QueryResultTypeConfig</code>
 *
 * parameter>
 *
 * Each query returns the 100 most relevant results.
 */
QueryResponse * KendraClient::query(const QueryRequest &request)
{
    return qobject_cast<QueryResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * StartDataSourceSyncJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a synchronization job for a data source connector. If a synchronization job is already in progress, Amazon Kendra
 * returns a <code>ResourceInUseException</code>
 */
StartDataSourceSyncJobResponse * KendraClient::startDataSourceSyncJob(const StartDataSourceSyncJobRequest &request)
{
    return qobject_cast<StartDataSourceSyncJobResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * StopDataSourceSyncJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a synchronization job that is currently running. You can't stop a scheduled synchronization
 */
StopDataSourceSyncJobResponse * KendraClient::stopDataSourceSyncJob(const StopDataSourceSyncJobRequest &request)
{
    return qobject_cast<StopDataSourceSyncJobResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * SubmitFeedbackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables you to provide feedback to Amazon Kendra to improve the performance of your
 *
 * index>
 *
 * <code>SubmitFeedback</code> is currently not supported in the Amazon Web Services GovCloud (US-West)
 */
SubmitFeedbackResponse * KendraClient::submitFeedback(const SubmitFeedbackRequest &request)
{
    return qobject_cast<SubmitFeedbackResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified tag to the specified index, FAQ, or data source resource. If the tag already exists, the existing
 * value is replaced with the new
 */
TagResourceResponse * KendraClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag from an index, FAQ, or a data
 */
UntagResourceResponse * KendraClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * UpdateAccessControlConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an access control configuration for your documents in an index. This includes user and group access information
 * for your documents. This is useful for user context filtering, where search results are filtered based on the user or
 * their group access to
 *
 * documents>
 *
 * You can update an access control configuration you created without indexing all of your documents again. For example,
 * your index contains top-secret company documents that only certain employees or users should access. You created an
 * 'allow' access control configuration for one user who recently joined the 'top-secret' team, switching from a team with
 * 'deny' access to top-secret documents. However, the user suddenly returns to their previous team and should no longer
 * have access to top secret documents. You can update the access control configuration to re-configure access control for
 * your documents as circumstances
 *
 * change>
 *
 * You call the <a href="https://docs.aws.amazon.com/kendra/latest/dg/API_BatchPutDocument.html">BatchPutDocument</a> API
 * to apply the updated access control configuration, with the <code>AccessControlConfigurationId</code> included in the <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Document.html">Document</a> object. If you use an S3 bucket as a
 * data source, you synchronize your data source to apply the <code>AccessControlConfigurationId</code> in the
 * <code>.metadata.json</code> file. Amazon Kendra currently only supports access control configuration for S3 data sources
 * and documents indexed using the <code>BatchPutDocument</code>
 */
UpdateAccessControlConfigurationResponse * KendraClient::updateAccessControlConfiguration(const UpdateAccessControlConfigurationRequest &request)
{
    return qobject_cast<UpdateAccessControlConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * UpdateDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing Amazon Kendra data source
 */
UpdateDataSourceResponse * KendraClient::updateDataSource(const UpdateDataSourceRequest &request)
{
    return qobject_cast<UpdateDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * UpdateExperienceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates your Amazon Kendra experience such as a search application. For more information on creating a search
 * application experience, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building a search
 * experience with no
 */
UpdateExperienceResponse * KendraClient::updateExperience(const UpdateExperienceRequest &request)
{
    return qobject_cast<UpdateExperienceResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * UpdateIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing Amazon Kendra
 */
UpdateIndexResponse * KendraClient::updateIndex(const UpdateIndexRequest &request)
{
    return qobject_cast<UpdateIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * UpdateQuerySuggestionsBlockListResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a block list used for query suggestions for an
 *
 * index>
 *
 * Updates to a block list might not take effect right away. Amazon Kendra needs to refresh the entire suggestions list to
 * apply any updates to the block list. Other changes not related to the block list apply
 *
 * immediately>
 *
 * If a block list is updating, then you need to wait for the first update to finish before submitting another
 *
 * update>
 *
 * Amazon Kendra supports partial updates, so you only need to provide the fields you want to
 *
 * update>
 *
 * <code>UpdateQuerySuggestionsBlockList</code> is currently not supported in the Amazon Web Services GovCloud (US-West)
 */
UpdateQuerySuggestionsBlockListResponse * KendraClient::updateQuerySuggestionsBlockList(const UpdateQuerySuggestionsBlockListRequest &request)
{
    return qobject_cast<UpdateQuerySuggestionsBlockListResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * UpdateQuerySuggestionsConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the settings of query suggestions for an
 *
 * index>
 *
 * Amazon Kendra supports partial updates, so you only need to provide the fields you want to
 *
 * update>
 *
 * If an update is currently processing (i.e. 'happening'), you need to wait for the update to finish before making another
 *
 * update>
 *
 * Updates to query suggestions settings might not take effect right away. The time for your updated settings to take
 * effect depends on the updates made and the number of search queries in your
 *
 * index>
 *
 * You can still enable/disable query suggestions at any
 *
 * time>
 *
 * <code>UpdateQuerySuggestionsConfig</code> is currently not supported in the Amazon Web Services GovCloud (US-West)
 */
UpdateQuerySuggestionsConfigResponse * KendraClient::updateQuerySuggestionsConfig(const UpdateQuerySuggestionsConfigRequest &request)
{
    return qobject_cast<UpdateQuerySuggestionsConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the KendraClient service, and returns a pointer to an
 * UpdateThesaurusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a thesaurus for an
 */
UpdateThesaurusResponse * KendraClient::updateThesaurus(const UpdateThesaurusRequest &request)
{
    return qobject_cast<UpdateThesaurusResponse *>(send(request));
}

/*!
 * \class QtAws::Kendra::KendraClientPrivate
 * \brief The KendraClientPrivate class provides private implementation for KendraClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a KendraClientPrivate object with public implementation \a q.
 */
KendraClientPrivate::KendraClientPrivate(KendraClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Kendra
} // namespace QtAws
