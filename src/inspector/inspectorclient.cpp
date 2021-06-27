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

#include "inspectorclient.h"
#include "inspectorclient_p.h"

#include "core/awssignaturev4.h"
#include "addattributestofindingsrequest.h"
#include "addattributestofindingsresponse.h"
#include "createassessmenttargetrequest.h"
#include "createassessmenttargetresponse.h"
#include "createassessmenttemplaterequest.h"
#include "createassessmenttemplateresponse.h"
#include "createexclusionspreviewrequest.h"
#include "createexclusionspreviewresponse.h"
#include "createresourcegrouprequest.h"
#include "createresourcegroupresponse.h"
#include "deleteassessmentrunrequest.h"
#include "deleteassessmentrunresponse.h"
#include "deleteassessmenttargetrequest.h"
#include "deleteassessmenttargetresponse.h"
#include "deleteassessmenttemplaterequest.h"
#include "deleteassessmenttemplateresponse.h"
#include "describeassessmentrunsrequest.h"
#include "describeassessmentrunsresponse.h"
#include "describeassessmenttargetsrequest.h"
#include "describeassessmenttargetsresponse.h"
#include "describeassessmenttemplatesrequest.h"
#include "describeassessmenttemplatesresponse.h"
#include "describecrossaccountaccessrolerequest.h"
#include "describecrossaccountaccessroleresponse.h"
#include "describeexclusionsrequest.h"
#include "describeexclusionsresponse.h"
#include "describefindingsrequest.h"
#include "describefindingsresponse.h"
#include "describeresourcegroupsrequest.h"
#include "describeresourcegroupsresponse.h"
#include "describerulespackagesrequest.h"
#include "describerulespackagesresponse.h"
#include "getassessmentreportrequest.h"
#include "getassessmentreportresponse.h"
#include "getexclusionspreviewrequest.h"
#include "getexclusionspreviewresponse.h"
#include "gettelemetrymetadatarequest.h"
#include "gettelemetrymetadataresponse.h"
#include "listassessmentrunagentsrequest.h"
#include "listassessmentrunagentsresponse.h"
#include "listassessmentrunsrequest.h"
#include "listassessmentrunsresponse.h"
#include "listassessmenttargetsrequest.h"
#include "listassessmenttargetsresponse.h"
#include "listassessmenttemplatesrequest.h"
#include "listassessmenttemplatesresponse.h"
#include "listeventsubscriptionsrequest.h"
#include "listeventsubscriptionsresponse.h"
#include "listexclusionsrequest.h"
#include "listexclusionsresponse.h"
#include "listfindingsrequest.h"
#include "listfindingsresponse.h"
#include "listrulespackagesrequest.h"
#include "listrulespackagesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "previewagentsrequest.h"
#include "previewagentsresponse.h"
#include "registercrossaccountaccessrolerequest.h"
#include "registercrossaccountaccessroleresponse.h"
#include "removeattributesfromfindingsrequest.h"
#include "removeattributesfromfindingsresponse.h"
#include "settagsforresourcerequest.h"
#include "settagsforresourceresponse.h"
#include "startassessmentrunrequest.h"
#include "startassessmentrunresponse.h"
#include "stopassessmentrunrequest.h"
#include "stopassessmentrunresponse.h"
#include "subscribetoeventrequest.h"
#include "subscribetoeventresponse.h"
#include "unsubscribefromeventrequest.h"
#include "unsubscribefromeventresponse.h"
#include "updateassessmenttargetrequest.h"
#include "updateassessmenttargetresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Inspector
 * \brief Contains classess for accessing Amazon Inspector.
 *
 * \inmodule QtAwsInspector
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::InspectorClient
 * \brief The InspectorClient class provides access to the Amazon Inspector service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 */

/*!
 * \brief Constructs a InspectorClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
InspectorClient::InspectorClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2016-02-16"),
    QStringLiteral("inspector"),
    QStringLiteral("Amazon Inspector"),
    QStringLiteral("inspector"),
    parent), d_ptr(new InspectorClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload InspectorClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
InspectorClient::InspectorClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2016-02-16"),
    QStringLiteral("inspector"),
    QStringLiteral("Amazon Inspector"),
    QStringLiteral("inspector"),
    parent), d_ptr(new InspectorClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * AddAttributesToFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns attributes (key and value pairs) to the findings that are specified by the ARNs of the
 */
AddAttributesToFindingsResponse * InspectorClient::addAttributesToFindings(const AddAttributesToFindingsRequest &request)
{
    return qobject_cast<AddAttributesToFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * CreateAssessmentTargetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new assessment target using the ARN of the resource group that is generated by <a>CreateResourceGroup</a>. If
 * resourceGroupArn is not specified, all EC2 instances in the current AWS account and region are included in the
 * assessment target. If the <a
 * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_slr.html">service-linked role</a> isn’t already
 * registered, this action also creates and registers a service-linked role to grant Amazon Inspector access to AWS
 * Services needed to perform security assessments. You can create up to 50 assessment targets per AWS account. You can run
 * up to 500 concurrent agents per AWS account. For more information, see <a
 * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_applications.html"> Amazon Inspector Assessment
 */
CreateAssessmentTargetResponse * InspectorClient::createAssessmentTarget(const CreateAssessmentTargetRequest &request)
{
    return qobject_cast<CreateAssessmentTargetResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * CreateAssessmentTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an assessment template for the assessment target that is specified by the ARN of the assessment target. If the
 * <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_slr.html">service-linked role</a> isn’t
 * already registered, this action also creates and registers a service-linked role to grant Amazon Inspector access to AWS
 * Services needed to perform security
 */
CreateAssessmentTemplateResponse * InspectorClient::createAssessmentTemplate(const CreateAssessmentTemplateRequest &request)
{
    return qobject_cast<CreateAssessmentTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * CreateExclusionsPreviewResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the generation of an exclusions preview for the specified assessment template. The exclusions preview lists the
 * potential exclusions (ExclusionPreview) that Inspector can detect before it runs the assessment.
 */
CreateExclusionsPreviewResponse * InspectorClient::createExclusionsPreview(const CreateExclusionsPreviewRequest &request)
{
    return qobject_cast<CreateExclusionsPreviewResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * CreateResourceGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a resource group using the specified set of tags (key and value pairs) that are used to select the EC2 instances
 * to be included in an Amazon Inspector assessment target. The created resource group is then used to create an Amazon
 * Inspector assessment target. For more information, see
 */
CreateResourceGroupResponse * InspectorClient::createResourceGroup(const CreateResourceGroupRequest &request)
{
    return qobject_cast<CreateResourceGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * DeleteAssessmentRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the assessment run that is specified by the ARN of the assessment
 */
DeleteAssessmentRunResponse * InspectorClient::deleteAssessmentRun(const DeleteAssessmentRunRequest &request)
{
    return qobject_cast<DeleteAssessmentRunResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * DeleteAssessmentTargetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the assessment target that is specified by the ARN of the assessment
 */
DeleteAssessmentTargetResponse * InspectorClient::deleteAssessmentTarget(const DeleteAssessmentTargetRequest &request)
{
    return qobject_cast<DeleteAssessmentTargetResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * DeleteAssessmentTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the assessment template that is specified by the ARN of the assessment
 */
DeleteAssessmentTemplateResponse * InspectorClient::deleteAssessmentTemplate(const DeleteAssessmentTemplateRequest &request)
{
    return qobject_cast<DeleteAssessmentTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * DescribeAssessmentRunsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the assessment runs that are specified by the ARNs of the assessment
 */
DescribeAssessmentRunsResponse * InspectorClient::describeAssessmentRuns(const DescribeAssessmentRunsRequest &request)
{
    return qobject_cast<DescribeAssessmentRunsResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * DescribeAssessmentTargetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the assessment targets that are specified by the ARNs of the assessment
 */
DescribeAssessmentTargetsResponse * InspectorClient::describeAssessmentTargets(const DescribeAssessmentTargetsRequest &request)
{
    return qobject_cast<DescribeAssessmentTargetsResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * DescribeAssessmentTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the assessment templates that are specified by the ARNs of the assessment
 */
DescribeAssessmentTemplatesResponse * InspectorClient::describeAssessmentTemplates(const DescribeAssessmentTemplatesRequest &request)
{
    return qobject_cast<DescribeAssessmentTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * DescribeCrossAccountAccessRoleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the IAM role that enables Amazon Inspector to access your AWS
 */
DescribeCrossAccountAccessRoleResponse * InspectorClient::describeCrossAccountAccessRole(const DescribeCrossAccountAccessRoleRequest &request)
{
    return qobject_cast<DescribeCrossAccountAccessRoleResponse *>(send(request));
}

/*!
 * Sends a DescribeCrossAccountAccessRole request to the InspectorClient service, and returns a pointer to an
 * DescribeCrossAccountAccessRoleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the IAM role that enables Amazon Inspector to access your AWS
 */
DescribeCrossAccountAccessRoleResponse * InspectorClient::describeCrossAccountAccessRole()
{
    return describeCrossAccountAccessRole(DescribeCrossAccountAccessRoleRequest());
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * DescribeExclusionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the exclusions that are specified by the exclusions'
 */
DescribeExclusionsResponse * InspectorClient::describeExclusions(const DescribeExclusionsRequest &request)
{
    return qobject_cast<DescribeExclusionsResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * DescribeFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the findings that are specified by the ARNs of the
 */
DescribeFindingsResponse * InspectorClient::describeFindings(const DescribeFindingsRequest &request)
{
    return qobject_cast<DescribeFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * DescribeResourceGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the resource groups that are specified by the ARNs of the resource
 */
DescribeResourceGroupsResponse * InspectorClient::describeResourceGroups(const DescribeResourceGroupsRequest &request)
{
    return qobject_cast<DescribeResourceGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * DescribeRulesPackagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the rules packages that are specified by the ARNs of the rules
 */
DescribeRulesPackagesResponse * InspectorClient::describeRulesPackages(const DescribeRulesPackagesRequest &request)
{
    return qobject_cast<DescribeRulesPackagesResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * GetAssessmentReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Produces an assessment report that includes detailed and comprehensive results of a specified assessment run.
 */
GetAssessmentReportResponse * InspectorClient::getAssessmentReport(const GetAssessmentReportRequest &request)
{
    return qobject_cast<GetAssessmentReportResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * GetExclusionsPreviewResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the exclusions preview (a list of ExclusionPreview objects) specified by the preview token. You can obtain the
 * preview token by running the CreateExclusionsPreview
 */
GetExclusionsPreviewResponse * InspectorClient::getExclusionsPreview(const GetExclusionsPreviewRequest &request)
{
    return qobject_cast<GetExclusionsPreviewResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * GetTelemetryMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Information about the data that is collected for the specified assessment
 */
GetTelemetryMetadataResponse * InspectorClient::getTelemetryMetadata(const GetTelemetryMetadataRequest &request)
{
    return qobject_cast<GetTelemetryMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * ListAssessmentRunAgentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the agents of the assessment runs that are specified by the ARNs of the assessment
 */
ListAssessmentRunAgentsResponse * InspectorClient::listAssessmentRunAgents(const ListAssessmentRunAgentsRequest &request)
{
    return qobject_cast<ListAssessmentRunAgentsResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * ListAssessmentRunsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the assessment runs that correspond to the assessment templates that are specified by the ARNs of the assessment
 */
ListAssessmentRunsResponse * InspectorClient::listAssessmentRuns(const ListAssessmentRunsRequest &request)
{
    return qobject_cast<ListAssessmentRunsResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * ListAssessmentTargetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the ARNs of the assessment targets within this AWS account. For more information about assessment targets, see <a
 * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_applications.html">Amazon Inspector Assessment
 */
ListAssessmentTargetsResponse * InspectorClient::listAssessmentTargets(const ListAssessmentTargetsRequest &request)
{
    return qobject_cast<ListAssessmentTargetsResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * ListAssessmentTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the assessment templates that correspond to the assessment targets that are specified by the ARNs of the
 * assessment
 */
ListAssessmentTemplatesResponse * InspectorClient::listAssessmentTemplates(const ListAssessmentTemplatesRequest &request)
{
    return qobject_cast<ListAssessmentTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * ListEventSubscriptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the event subscriptions for the assessment template that is specified by the ARN of the assessment template.
 * For more information, see <a>SubscribeToEvent</a> and
 */
ListEventSubscriptionsResponse * InspectorClient::listEventSubscriptions(const ListEventSubscriptionsRequest &request)
{
    return qobject_cast<ListEventSubscriptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * ListExclusionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List exclusions that are generated by the assessment
 */
ListExclusionsResponse * InspectorClient::listExclusions(const ListExclusionsRequest &request)
{
    return qobject_cast<ListExclusionsResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * ListFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists findings that are generated by the assessment runs that are specified by the ARNs of the assessment
 */
ListFindingsResponse * InspectorClient::listFindings(const ListFindingsRequest &request)
{
    return qobject_cast<ListFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * ListRulesPackagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all available Amazon Inspector rules
 */
ListRulesPackagesResponse * InspectorClient::listRulesPackages(const ListRulesPackagesRequest &request)
{
    return qobject_cast<ListRulesPackagesResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all tags associated with an assessment
 */
ListTagsForResourceResponse * InspectorClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * PreviewAgentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Previews the agents installed on the EC2 instances that are part of the specified assessment
 */
PreviewAgentsResponse * InspectorClient::previewAgents(const PreviewAgentsRequest &request)
{
    return qobject_cast<PreviewAgentsResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * RegisterCrossAccountAccessRoleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers the IAM role that grants Amazon Inspector access to AWS Services needed to perform security
 */
RegisterCrossAccountAccessRoleResponse * InspectorClient::registerCrossAccountAccessRole(const RegisterCrossAccountAccessRoleRequest &request)
{
    return qobject_cast<RegisterCrossAccountAccessRoleResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * RemoveAttributesFromFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes entire attributes (key and value pairs) from the findings that are specified by the ARNs of the findings where
 * an attribute with the specified key
 */
RemoveAttributesFromFindingsResponse * InspectorClient::removeAttributesFromFindings(const RemoveAttributesFromFindingsRequest &request)
{
    return qobject_cast<RemoveAttributesFromFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * SetTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets tags (key and value pairs) to the assessment template that is specified by the ARN of the assessment
 */
SetTagsForResourceResponse * InspectorClient::setTagsForResource(const SetTagsForResourceRequest &request)
{
    return qobject_cast<SetTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * StartAssessmentRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the assessment run specified by the ARN of the assessment template. For this API to function properly, you must
 * not exceed the limit of running up to 500 concurrent agents per AWS
 */
StartAssessmentRunResponse * InspectorClient::startAssessmentRun(const StartAssessmentRunRequest &request)
{
    return qobject_cast<StartAssessmentRunResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * StopAssessmentRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the assessment run that is specified by the ARN of the assessment
 */
StopAssessmentRunResponse * InspectorClient::stopAssessmentRun(const StopAssessmentRunRequest &request)
{
    return qobject_cast<StopAssessmentRunResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * SubscribeToEventResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the process of sending Amazon Simple Notification Service (SNS) notifications about a specified event to a
 * specified SNS
 */
SubscribeToEventResponse * InspectorClient::subscribeToEvent(const SubscribeToEventRequest &request)
{
    return qobject_cast<SubscribeToEventResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * UnsubscribeFromEventResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the process of sending Amazon Simple Notification Service (SNS) notifications about a specified event to a
 * specified SNS
 */
UnsubscribeFromEventResponse * InspectorClient::unsubscribeFromEvent(const UnsubscribeFromEventRequest &request)
{
    return qobject_cast<UnsubscribeFromEventResponse *>(send(request));
}

/*!
 * Sends \a request to the InspectorClient service, and returns a pointer to an
 * UpdateAssessmentTargetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the assessment target that is specified by the ARN of the assessment
 *
 * target>
 *
 * If resourceGroupArn is not specified, all EC2 instances in the current AWS account and region are included in the
 * assessment
 */
UpdateAssessmentTargetResponse * InspectorClient::updateAssessmentTarget(const UpdateAssessmentTargetRequest &request)
{
    return qobject_cast<UpdateAssessmentTargetResponse *>(send(request));
}

/*!
 * \class QtAws::Inspector::InspectorClientPrivate
 * \brief The InspectorClientPrivate class provides private implementation for InspectorClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a InspectorClientPrivate object with public implementation \a q.
 */
InspectorClientPrivate::InspectorClientPrivate(InspectorClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace Inspector
} // namespace QtAws
