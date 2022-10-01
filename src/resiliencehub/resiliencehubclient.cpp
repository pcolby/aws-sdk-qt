// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resiliencehubclient.h"
#include "resiliencehubclient_p.h"

#include "core/awssignaturev4.h"
#include "adddraftappversionresourcemappingsrequest.h"
#include "adddraftappversionresourcemappingsresponse.h"
#include "createapprequest.h"
#include "createappresponse.h"
#include "createrecommendationtemplaterequest.h"
#include "createrecommendationtemplateresponse.h"
#include "createresiliencypolicyrequest.h"
#include "createresiliencypolicyresponse.h"
#include "deleteapprequest.h"
#include "deleteappresponse.h"
#include "deleteappassessmentrequest.h"
#include "deleteappassessmentresponse.h"
#include "deleterecommendationtemplaterequest.h"
#include "deleterecommendationtemplateresponse.h"
#include "deleteresiliencypolicyrequest.h"
#include "deleteresiliencypolicyresponse.h"
#include "describeapprequest.h"
#include "describeappresponse.h"
#include "describeappassessmentrequest.h"
#include "describeappassessmentresponse.h"
#include "describeappversionresourcesresolutionstatusrequest.h"
#include "describeappversionresourcesresolutionstatusresponse.h"
#include "describeappversiontemplaterequest.h"
#include "describeappversiontemplateresponse.h"
#include "describedraftappversionresourcesimportstatusrequest.h"
#include "describedraftappversionresourcesimportstatusresponse.h"
#include "describeresiliencypolicyrequest.h"
#include "describeresiliencypolicyresponse.h"
#include "importresourcestodraftappversionrequest.h"
#include "importresourcestodraftappversionresponse.h"
#include "listalarmrecommendationsrequest.h"
#include "listalarmrecommendationsresponse.h"
#include "listappassessmentsrequest.h"
#include "listappassessmentsresponse.h"
#include "listappcomponentcompliancesrequest.h"
#include "listappcomponentcompliancesresponse.h"
#include "listappcomponentrecommendationsrequest.h"
#include "listappcomponentrecommendationsresponse.h"
#include "listappversionresourcemappingsrequest.h"
#include "listappversionresourcemappingsresponse.h"
#include "listappversionresourcesrequest.h"
#include "listappversionresourcesresponse.h"
#include "listappversionsrequest.h"
#include "listappversionsresponse.h"
#include "listappsrequest.h"
#include "listappsresponse.h"
#include "listrecommendationtemplatesrequest.h"
#include "listrecommendationtemplatesresponse.h"
#include "listresiliencypoliciesrequest.h"
#include "listresiliencypoliciesresponse.h"
#include "listsoprecommendationsrequest.h"
#include "listsoprecommendationsresponse.h"
#include "listsuggestedresiliencypoliciesrequest.h"
#include "listsuggestedresiliencypoliciesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtestrecommendationsrequest.h"
#include "listtestrecommendationsresponse.h"
#include "listunsupportedappversionresourcesrequest.h"
#include "listunsupportedappversionresourcesresponse.h"
#include "publishappversionrequest.h"
#include "publishappversionresponse.h"
#include "putdraftappversiontemplaterequest.h"
#include "putdraftappversiontemplateresponse.h"
#include "removedraftappversionresourcemappingsrequest.h"
#include "removedraftappversionresourcemappingsresponse.h"
#include "resolveappversionresourcesrequest.h"
#include "resolveappversionresourcesresponse.h"
#include "startappassessmentrequest.h"
#include "startappassessmentresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateapprequest.h"
#include "updateappresponse.h"
#include "updateresiliencypolicyrequest.h"
#include "updateresiliencypolicyresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ResilienceHub
 * \brief Contains classess for accessing AWS Resilience Hub.
 *
 * \inmodule QtAwsResilienceHub
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ResilienceHubClient
 * \brief The ResilienceHubClient class provides access to the AWS Resilience Hub service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 */

/*!
 * \brief Constructs a ResilienceHubClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ResilienceHubClient::ResilienceHubClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ResilienceHubClientPrivate(this), parent)
{
    Q_D(ResilienceHubClient);
    d->apiVersion = QStringLiteral("2020-04-30");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("resiliencehub");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Resilience Hub");
    d->serviceName = QStringLiteral("resiliencehub");
}

/*!
 * \overload ResilienceHubClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ResilienceHubClient::ResilienceHubClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ResilienceHubClientPrivate(this), parent)
{
    Q_D(ResilienceHubClient);
    d->apiVersion = QStringLiteral("2020-04-30");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("resiliencehub");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Resilience Hub");
    d->serviceName = QStringLiteral("resiliencehub");
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * AddDraftAppVersionResourceMappingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the resource mapping for the draft application
 */
AddDraftAppVersionResourceMappingsResponse * ResilienceHubClient::addDraftAppVersionResourceMappings(const AddDraftAppVersionResourceMappingsRequest &request)
{
    return qobject_cast<AddDraftAppVersionResourceMappingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * CreateAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Resilience Hub application. A Resilience Hub application is a collection of Amazon Web Services resources
 * structured to prevent and recover Amazon Web Services application disruptions. To describe a Resilience Hub application,
 * you provide an application name, resources from one or more–up to five–CloudFormation stacks, and an appropriate
 * resiliency
 *
 * policy>
 *
 * After you create a Resilience Hub application, you publish it so that you can run a resiliency assessment on it. You can
 * then use recommendations from the assessment to improve resiliency by running another assessment, comparing results, and
 * then iterating the process until you achieve your goals for recovery time objective (RTO) and recovery point objective
 */
CreateAppResponse * ResilienceHubClient::createApp(const CreateAppRequest &request)
{
    return qobject_cast<CreateAppResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * CreateRecommendationTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new recommendation
 */
CreateRecommendationTemplateResponse * ResilienceHubClient::createRecommendationTemplate(const CreateRecommendationTemplateRequest &request)
{
    return qobject_cast<CreateRecommendationTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * CreateResiliencyPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a resiliency policy for an
 */
CreateResiliencyPolicyResponse * ResilienceHubClient::createResiliencyPolicy(const CreateResiliencyPolicyRequest &request)
{
    return qobject_cast<CreateResiliencyPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * DeleteAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an AWS Resilience Hub application. This is a destructive action that can't be
 */
DeleteAppResponse * ResilienceHubClient::deleteApp(const DeleteAppRequest &request)
{
    return qobject_cast<DeleteAppResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * DeleteAppAssessmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an AWS Resilience Hub application assessment. This is a destructive action that can't be
 */
DeleteAppAssessmentResponse * ResilienceHubClient::deleteAppAssessment(const DeleteAppAssessmentRequest &request)
{
    return qobject_cast<DeleteAppAssessmentResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * DeleteRecommendationTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a recommendation template. This is a destructive action that can't be
 */
DeleteRecommendationTemplateResponse * ResilienceHubClient::deleteRecommendationTemplate(const DeleteRecommendationTemplateRequest &request)
{
    return qobject_cast<DeleteRecommendationTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * DeleteResiliencyPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a resiliency policy. This is a destructive action that can't be
 */
DeleteResiliencyPolicyResponse * ResilienceHubClient::deleteResiliencyPolicy(const DeleteResiliencyPolicyRequest &request)
{
    return qobject_cast<DeleteResiliencyPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * DescribeAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an AWS Resilience Hub
 */
DescribeAppResponse * ResilienceHubClient::describeApp(const DescribeAppRequest &request)
{
    return qobject_cast<DescribeAppResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * DescribeAppAssessmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an assessment for an AWS Resilience Hub
 */
DescribeAppAssessmentResponse * ResilienceHubClient::describeAppAssessment(const DescribeAppAssessmentRequest &request)
{
    return qobject_cast<DescribeAppAssessmentResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * DescribeAppVersionResourcesResolutionStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the resolution status for the specified resolution identifier for an application version. If
 * <code>resolutionId</code> is not specified, the current resolution status is
 */
DescribeAppVersionResourcesResolutionStatusResponse * ResilienceHubClient::describeAppVersionResourcesResolutionStatus(const DescribeAppVersionResourcesResolutionStatusRequest &request)
{
    return qobject_cast<DescribeAppVersionResourcesResolutionStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * DescribeAppVersionTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes details about an AWS Resilience Hub
 */
DescribeAppVersionTemplateResponse * ResilienceHubClient::describeAppVersionTemplate(const DescribeAppVersionTemplateRequest &request)
{
    return qobject_cast<DescribeAppVersionTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * DescribeDraftAppVersionResourcesImportStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the status of importing resources to an application
 */
DescribeDraftAppVersionResourcesImportStatusResponse * ResilienceHubClient::describeDraftAppVersionResourcesImportStatus(const DescribeDraftAppVersionResourcesImportStatusRequest &request)
{
    return qobject_cast<DescribeDraftAppVersionResourcesImportStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * DescribeResiliencyPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a specified resiliency policy for an AWS Resilience Hub application. The returned policy object includes
 * creation time, data location constraints, the Amazon Resource Name (ARN) for the policy, tags, tier, and
 */
DescribeResiliencyPolicyResponse * ResilienceHubClient::describeResiliencyPolicy(const DescribeResiliencyPolicyRequest &request)
{
    return qobject_cast<DescribeResiliencyPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * ImportResourcesToDraftAppVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports resources from sources such as a CloudFormation stack, resource-groups, or application registry app to a draft
 * application
 */
ImportResourcesToDraftAppVersionResponse * ResilienceHubClient::importResourcesToDraftAppVersion(const ImportResourcesToDraftAppVersionRequest &request)
{
    return qobject_cast<ImportResourcesToDraftAppVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * ListAlarmRecommendationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the alarm recommendations for a AWS Resilience Hub
 */
ListAlarmRecommendationsResponse * ResilienceHubClient::listAlarmRecommendations(const ListAlarmRecommendationsRequest &request)
{
    return qobject_cast<ListAlarmRecommendationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * ListAppAssessmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the assessments for an AWS Resilience Hub application. You can use request parameters to refine the results for
 * the response
 */
ListAppAssessmentsResponse * ResilienceHubClient::listAppAssessments(const ListAppAssessmentsRequest &request)
{
    return qobject_cast<ListAppAssessmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * ListAppComponentCompliancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the compliances for an AWS Resilience Hub
 */
ListAppComponentCompliancesResponse * ResilienceHubClient::listAppComponentCompliances(const ListAppComponentCompliancesRequest &request)
{
    return qobject_cast<ListAppComponentCompliancesResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * ListAppComponentRecommendationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the recommendations for an AWS Resilience Hub
 */
ListAppComponentRecommendationsResponse * ResilienceHubClient::listAppComponentRecommendations(const ListAppComponentRecommendationsRequest &request)
{
    return qobject_cast<ListAppComponentRecommendationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * ListAppVersionResourceMappingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists how the resources in an application version are mapped/sourced from. Mappings can be physical resource
 * identifiers, CloudFormation stacks, resource-groups, or an application registry
 */
ListAppVersionResourceMappingsResponse * ResilienceHubClient::listAppVersionResourceMappings(const ListAppVersionResourceMappingsRequest &request)
{
    return qobject_cast<ListAppVersionResourceMappingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * ListAppVersionResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the resources in an application
 */
ListAppVersionResourcesResponse * ResilienceHubClient::listAppVersionResources(const ListAppVersionResourcesRequest &request)
{
    return qobject_cast<ListAppVersionResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * ListAppVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the different versions for the Resilience Hub
 */
ListAppVersionsResponse * ResilienceHubClient::listAppVersions(const ListAppVersionsRequest &request)
{
    return qobject_cast<ListAppVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * ListAppsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists your Resilience Hub
 */
ListAppsResponse * ResilienceHubClient::listApps(const ListAppsRequest &request)
{
    return qobject_cast<ListAppsResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * ListRecommendationTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the recommendation templates for the Resilience Hub
 */
ListRecommendationTemplatesResponse * ResilienceHubClient::listRecommendationTemplates(const ListRecommendationTemplatesRequest &request)
{
    return qobject_cast<ListRecommendationTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * ListResiliencyPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the resiliency policies for the Resilience Hub
 */
ListResiliencyPoliciesResponse * ResilienceHubClient::listResiliencyPolicies(const ListResiliencyPoliciesRequest &request)
{
    return qobject_cast<ListResiliencyPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * ListSopRecommendationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the standard operating procedure (SOP) recommendations for the Resilience Hub
 */
ListSopRecommendationsResponse * ResilienceHubClient::listSopRecommendations(const ListSopRecommendationsRequest &request)
{
    return qobject_cast<ListSopRecommendationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * ListSuggestedResiliencyPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the suggested resiliency policies for the Resilience Hub
 */
ListSuggestedResiliencyPoliciesResponse * ResilienceHubClient::listSuggestedResiliencyPolicies(const ListSuggestedResiliencyPoliciesRequest &request)
{
    return qobject_cast<ListSuggestedResiliencyPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for your resources in your Resilience Hub
 */
ListTagsForResourceResponse * ResilienceHubClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * ListTestRecommendationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the test recommendations for the Resilience Hub
 */
ListTestRecommendationsResponse * ResilienceHubClient::listTestRecommendations(const ListTestRecommendationsRequest &request)
{
    return qobject_cast<ListTestRecommendationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * ListUnsupportedAppVersionResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the resources that are not currently supported in AWS Resilience Hub. An unsupported resource is a resource that
 * exists in the object that was used to create an app, but is not supported by Resilience
 */
ListUnsupportedAppVersionResourcesResponse * ResilienceHubClient::listUnsupportedAppVersionResources(const ListUnsupportedAppVersionResourcesRequest &request)
{
    return qobject_cast<ListUnsupportedAppVersionResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * PublishAppVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Publishes a new version of a specific Resilience Hub
 */
PublishAppVersionResponse * ResilienceHubClient::publishAppVersion(const PublishAppVersionRequest &request)
{
    return qobject_cast<PublishAppVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * PutDraftAppVersionTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates the app template for a draft version of a Resilience Hub
 */
PutDraftAppVersionTemplateResponse * ResilienceHubClient::putDraftAppVersionTemplate(const PutDraftAppVersionTemplateRequest &request)
{
    return qobject_cast<PutDraftAppVersionTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * RemoveDraftAppVersionResourceMappingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes resource mappings from a draft application
 */
RemoveDraftAppVersionResourceMappingsResponse * ResilienceHubClient::removeDraftAppVersionResourceMappings(const RemoveDraftAppVersionResourceMappingsRequest &request)
{
    return qobject_cast<RemoveDraftAppVersionResourceMappingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * ResolveAppVersionResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resolves the resources for an application
 */
ResolveAppVersionResourcesResponse * ResilienceHubClient::resolveAppVersionResources(const ResolveAppVersionResourcesRequest &request)
{
    return qobject_cast<ResolveAppVersionResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * StartAppAssessmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new application assessment for an
 */
StartAppAssessmentResponse * ResilienceHubClient::startAppAssessment(const StartAppAssessmentRequest &request)
{
    return qobject_cast<StartAppAssessmentResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies one or more tags to a
 */
TagResourceResponse * ResilienceHubClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from a
 */
UntagResourceResponse * ResilienceHubClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * UpdateAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an
 */
UpdateAppResponse * ResilienceHubClient::updateApp(const UpdateAppRequest &request)
{
    return qobject_cast<UpdateAppResponse *>(send(request));
}

/*!
 * Sends \a request to the ResilienceHubClient service, and returns a pointer to an
 * UpdateResiliencyPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a resiliency
 */
UpdateResiliencyPolicyResponse * ResilienceHubClient::updateResiliencyPolicy(const UpdateResiliencyPolicyRequest &request)
{
    return qobject_cast<UpdateResiliencyPolicyResponse *>(send(request));
}

/*!
 * \class QtAws::ResilienceHub::ResilienceHubClientPrivate
 * \brief The ResilienceHubClientPrivate class provides private implementation for ResilienceHubClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ResilienceHubClientPrivate object with public implementation \a q.
 */
ResilienceHubClientPrivate::ResilienceHubClientPrivate(ResilienceHubClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ResilienceHub
} // namespace QtAws
