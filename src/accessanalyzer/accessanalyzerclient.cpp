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

#include "accessanalyzerclient.h"
#include "accessanalyzerclient_p.h"

#include "core/awssignaturev4.h"
#include "applyarchiverulerequest.h"
#include "applyarchiveruleresponse.h"
#include "cancelpolicygenerationrequest.h"
#include "cancelpolicygenerationresponse.h"
#include "createaccesspreviewrequest.h"
#include "createaccesspreviewresponse.h"
#include "createanalyzerrequest.h"
#include "createanalyzerresponse.h"
#include "createarchiverulerequest.h"
#include "createarchiveruleresponse.h"
#include "deleteanalyzerrequest.h"
#include "deleteanalyzerresponse.h"
#include "deletearchiverulerequest.h"
#include "deletearchiveruleresponse.h"
#include "getaccesspreviewrequest.h"
#include "getaccesspreviewresponse.h"
#include "getanalyzedresourcerequest.h"
#include "getanalyzedresourceresponse.h"
#include "getanalyzerrequest.h"
#include "getanalyzerresponse.h"
#include "getarchiverulerequest.h"
#include "getarchiveruleresponse.h"
#include "getfindingrequest.h"
#include "getfindingresponse.h"
#include "getgeneratedpolicyrequest.h"
#include "getgeneratedpolicyresponse.h"
#include "listaccesspreviewfindingsrequest.h"
#include "listaccesspreviewfindingsresponse.h"
#include "listaccesspreviewsrequest.h"
#include "listaccesspreviewsresponse.h"
#include "listanalyzedresourcesrequest.h"
#include "listanalyzedresourcesresponse.h"
#include "listanalyzersrequest.h"
#include "listanalyzersresponse.h"
#include "listarchiverulesrequest.h"
#include "listarchiverulesresponse.h"
#include "listfindingsrequest.h"
#include "listfindingsresponse.h"
#include "listpolicygenerationsrequest.h"
#include "listpolicygenerationsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "startpolicygenerationrequest.h"
#include "startpolicygenerationresponse.h"
#include "startresourcescanrequest.h"
#include "startresourcescanresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatearchiverulerequest.h"
#include "updatearchiveruleresponse.h"
#include "updatefindingsrequest.h"
#include "updatefindingsresponse.h"
#include "validatepolicyrequest.h"
#include "validatepolicyresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::AccessAnalyzer
 * \brief Contains classess for accessing Access Analyzer.
 *
 * \inmodule QtAwsAccessAnalyzer
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace AccessAnalyzer {

/*!
 * \class QtAws::AccessAnalyzer::AccessAnalyzerClient
 * \brief The AccessAnalyzerClient class provides access to the Access Analyzer service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAccessAnalyzer
 *
 *  AWS IAM Access Analyzer helps identify potential resource-access risks by enabling you to identify any policies that
 *  grant access to an external principal. It does this by using logic-based reasoning to analyze resource-based policies in
 *  your AWS environment. An external principal can be another AWS account, a root user, an IAM user or role, a federated
 *  user, an AWS service, or an anonymous user. You can also use Access Analyzer to preview and validate public and
 *  cross-account access to your resources before deploying permissions changes. This guide describes the AWS IAM Access
 *  Analyzer operations that you can call programmatically. For general information about Access Analyzer, see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/what-is-access-analyzer.html">AWS IAM Access Analyzer</a> in the
 *  <b>IAM User
 * 
 *  Guide</b>>
 * 
 *  To start using Access Analyzer, you first need to create an
 */

/*!
 * \brief Constructs a AccessAnalyzerClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AccessAnalyzerClient::AccessAnalyzerClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AccessAnalyzerClientPrivate(this), parent)
{
    Q_D(AccessAnalyzerClient);
    d->apiVersion = QStringLiteral("2019-11-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("access-analyzer");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Access Analyzer");
    d->serviceName = QStringLiteral("access-analyzer");
}

/*!
 * \overload AccessAnalyzerClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AccessAnalyzerClient::AccessAnalyzerClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AccessAnalyzerClientPrivate(this), parent)
{
    Q_D(AccessAnalyzerClient);
    d->apiVersion = QStringLiteral("2019-11-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("access-analyzer");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Access Analyzer");
    d->serviceName = QStringLiteral("access-analyzer");
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * ApplyArchiveRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retroactively applies the archive rule to existing findings that meet the archive rule
 */
ApplyArchiveRuleResponse * AccessAnalyzerClient::applyArchiveRule(const ApplyArchiveRuleRequest &request)
{
    return qobject_cast<ApplyArchiveRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * CancelPolicyGenerationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels the requested policy
 */
CancelPolicyGenerationResponse * AccessAnalyzerClient::cancelPolicyGeneration(const CancelPolicyGenerationRequest &request)
{
    return qobject_cast<CancelPolicyGenerationResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * CreateAccessPreviewResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an access preview that allows you to preview Access Analyzer findings for your resource before deploying
 * resource
 */
CreateAccessPreviewResponse * AccessAnalyzerClient::createAccessPreview(const CreateAccessPreviewRequest &request)
{
    return qobject_cast<CreateAccessPreviewResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * CreateAnalyzerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an analyzer for your
 */
CreateAnalyzerResponse * AccessAnalyzerClient::createAnalyzer(const CreateAnalyzerRequest &request)
{
    return qobject_cast<CreateAnalyzerResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * CreateArchiveRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an archive rule for the specified analyzer. Archive rules automatically archive new findings that meet the
 * criteria you define when you create the
 *
 * rule>
 *
 * To learn about filter keys that you can use to create an archive rule, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-reference-filter-keys.html">Access Analyzer
 * filter keys</a> in the <b>IAM User
 */
CreateArchiveRuleResponse * AccessAnalyzerClient::createArchiveRule(const CreateArchiveRuleRequest &request)
{
    return qobject_cast<CreateArchiveRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * DeleteAnalyzerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified analyzer. When you delete an analyzer, Access Analyzer is disabled for the account or organization
 * in the current or specific Region. All findings that were generated by the analyzer are deleted. You cannot undo this
 */
DeleteAnalyzerResponse * AccessAnalyzerClient::deleteAnalyzer(const DeleteAnalyzerRequest &request)
{
    return qobject_cast<DeleteAnalyzerResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * DeleteArchiveRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified archive
 */
DeleteArchiveRuleResponse * AccessAnalyzerClient::deleteArchiveRule(const DeleteArchiveRuleRequest &request)
{
    return qobject_cast<DeleteArchiveRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * GetAccessPreviewResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about an access preview for the specified
 */
GetAccessPreviewResponse * AccessAnalyzerClient::getAccessPreview(const GetAccessPreviewRequest &request)
{
    return qobject_cast<GetAccessPreviewResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * GetAnalyzedResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a resource that was
 */
GetAnalyzedResourceResponse * AccessAnalyzerClient::getAnalyzedResource(const GetAnalyzedResourceRequest &request)
{
    return qobject_cast<GetAnalyzedResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * GetAnalyzerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the specified
 */
GetAnalyzerResponse * AccessAnalyzerClient::getAnalyzer(const GetAnalyzerRequest &request)
{
    return qobject_cast<GetAnalyzerResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * GetArchiveRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about an archive
 *
 * rule>
 *
 * To learn about filter keys that you can use to create an archive rule, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-reference-filter-keys.html">Access Analyzer
 * filter keys</a> in the <b>IAM User
 */
GetArchiveRuleResponse * AccessAnalyzerClient::getArchiveRule(const GetArchiveRuleRequest &request)
{
    return qobject_cast<GetArchiveRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * GetFindingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the specified
 */
GetFindingResponse * AccessAnalyzerClient::getFinding(const GetFindingRequest &request)
{
    return qobject_cast<GetFindingResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * GetGeneratedPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the policy that was generated using <code>StartPolicyGeneration</code>.
 */
GetGeneratedPolicyResponse * AccessAnalyzerClient::getGeneratedPolicy(const GetGeneratedPolicyRequest &request)
{
    return qobject_cast<GetGeneratedPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * ListAccessPreviewFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of access preview findings generated by the specified access
 */
ListAccessPreviewFindingsResponse * AccessAnalyzerClient::listAccessPreviewFindings(const ListAccessPreviewFindingsRequest &request)
{
    return qobject_cast<ListAccessPreviewFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * ListAccessPreviewsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of access previews for the specified
 */
ListAccessPreviewsResponse * AccessAnalyzerClient::listAccessPreviews(const ListAccessPreviewsRequest &request)
{
    return qobject_cast<ListAccessPreviewsResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * ListAnalyzedResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of resources of the specified type that have been analyzed by the specified
 */
ListAnalyzedResourcesResponse * AccessAnalyzerClient::listAnalyzedResources(const ListAnalyzedResourcesRequest &request)
{
    return qobject_cast<ListAnalyzedResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * ListAnalyzersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of
 */
ListAnalyzersResponse * AccessAnalyzerClient::listAnalyzers(const ListAnalyzersRequest &request)
{
    return qobject_cast<ListAnalyzersResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * ListArchiveRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of archive rules created for the specified
 */
ListArchiveRulesResponse * AccessAnalyzerClient::listArchiveRules(const ListArchiveRulesRequest &request)
{
    return qobject_cast<ListArchiveRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * ListFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of findings generated by the specified
 *
 * analyzer>
 *
 * To learn about filter keys that you can use to retrieve a list of findings, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-reference-filter-keys.html">Access Analyzer
 * filter keys</a> in the <b>IAM User
 */
ListFindingsResponse * AccessAnalyzerClient::listFindings(const ListFindingsRequest &request)
{
    return qobject_cast<ListFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * ListPolicyGenerationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the policy generations requested in the last seven
 */
ListPolicyGenerationsResponse * AccessAnalyzerClient::listPolicyGenerations(const ListPolicyGenerationsRequest &request)
{
    return qobject_cast<ListPolicyGenerationsResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of tags applied to the specified
 */
ListTagsForResourceResponse * AccessAnalyzerClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * StartPolicyGenerationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the policy generation
 */
StartPolicyGenerationResponse * AccessAnalyzerClient::startPolicyGeneration(const StartPolicyGenerationRequest &request)
{
    return qobject_cast<StartPolicyGenerationResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * StartResourceScanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Immediately starts a scan of the policies applied to the specified
 */
StartResourceScanResponse * AccessAnalyzerClient::startResourceScan(const StartResourceScanRequest &request)
{
    return qobject_cast<StartResourceScanResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a tag to the specified
 */
TagResourceResponse * AccessAnalyzerClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag from the specified
 */
UntagResourceResponse * AccessAnalyzerClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * UpdateArchiveRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the criteria and values for the specified archive
 */
UpdateArchiveRuleResponse * AccessAnalyzerClient::updateArchiveRule(const UpdateArchiveRuleRequest &request)
{
    return qobject_cast<UpdateArchiveRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * UpdateFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the status for the specified
 */
UpdateFindingsResponse * AccessAnalyzerClient::updateFindings(const UpdateFindingsRequest &request)
{
    return qobject_cast<UpdateFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the AccessAnalyzerClient service, and returns a pointer to an
 * ValidatePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Requests the validation of a policy and returns a list of findings. The findings help you identify issues and provide
 * actionable recommendations to resolve the issue and enable you to author functional policies that meet security best
 * practices.
 */
ValidatePolicyResponse * AccessAnalyzerClient::validatePolicy(const ValidatePolicyRequest &request)
{
    return qobject_cast<ValidatePolicyResponse *>(send(request));
}

/*!
 * \class QtAws::AccessAnalyzer::AccessAnalyzerClientPrivate
 * \brief The AccessAnalyzerClientPrivate class provides private implementation for AccessAnalyzerClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a AccessAnalyzerClientPrivate object with public implementation \a q.
 */
AccessAnalyzerClientPrivate::AccessAnalyzerClientPrivate(AccessAnalyzerClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace AccessAnalyzer
} // namespace QtAws
