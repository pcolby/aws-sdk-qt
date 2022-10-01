// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ssmincidentsclient.h"
#include "ssmincidentsclient_p.h"

#include "core/awssignaturev4.h"
#include "createreplicationsetrequest.h"
#include "createreplicationsetresponse.h"
#include "createresponseplanrequest.h"
#include "createresponseplanresponse.h"
#include "createtimelineeventrequest.h"
#include "createtimelineeventresponse.h"
#include "deleteincidentrecordrequest.h"
#include "deleteincidentrecordresponse.h"
#include "deletereplicationsetrequest.h"
#include "deletereplicationsetresponse.h"
#include "deleteresourcepolicyrequest.h"
#include "deleteresourcepolicyresponse.h"
#include "deleteresponseplanrequest.h"
#include "deleteresponseplanresponse.h"
#include "deletetimelineeventrequest.h"
#include "deletetimelineeventresponse.h"
#include "getincidentrecordrequest.h"
#include "getincidentrecordresponse.h"
#include "getreplicationsetrequest.h"
#include "getreplicationsetresponse.h"
#include "getresourcepoliciesrequest.h"
#include "getresourcepoliciesresponse.h"
#include "getresponseplanrequest.h"
#include "getresponseplanresponse.h"
#include "gettimelineeventrequest.h"
#include "gettimelineeventresponse.h"
#include "listincidentrecordsrequest.h"
#include "listincidentrecordsresponse.h"
#include "listrelateditemsrequest.h"
#include "listrelateditemsresponse.h"
#include "listreplicationsetsrequest.h"
#include "listreplicationsetsresponse.h"
#include "listresponseplansrequest.h"
#include "listresponseplansresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtimelineeventsrequest.h"
#include "listtimelineeventsresponse.h"
#include "putresourcepolicyrequest.h"
#include "putresourcepolicyresponse.h"
#include "startincidentrequest.h"
#include "startincidentresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatedeletionprotectionrequest.h"
#include "updatedeletionprotectionresponse.h"
#include "updateincidentrecordrequest.h"
#include "updateincidentrecordresponse.h"
#include "updaterelateditemsrequest.h"
#include "updaterelateditemsresponse.h"
#include "updatereplicationsetrequest.h"
#include "updatereplicationsetresponse.h"
#include "updateresponseplanrequest.h"
#include "updateresponseplanresponse.h"
#include "updatetimelineeventrequest.h"
#include "updatetimelineeventresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SsmIncidents
 * \brief Contains classess for accessing AWS Systems Manager Incident Manager.
 *
 * \inmodule QtAwsSsmIncidents
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::SsmIncidentsClient
 * \brief The SsmIncidentsClient class provides access to the AWS Systems Manager Incident Manager service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSsmIncidents
 *
 *  Systems Manager Incident Manager is an incident management console designed to help users mitigate and recover from
 *  incidents affecting their Amazon Web Services-hosted applications. An incident is any unplanned interruption or
 *  reduction in quality of services.
 * 
 *  </p
 * 
 *  Incident Manager increases incident resolution by notifying responders of impact, highlighting relevant troubleshooting
 *  data, and providing collaboration tools to get services back up and running. To achieve the primary goal of reducing the
 *  time-to-resolution of critical incidents, Incident Manager automates response plans and enables responder team
 *  escalation.
 */

/*!
 * \brief Constructs a SsmIncidentsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SsmIncidentsClient::SsmIncidentsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SsmIncidentsClientPrivate(this), parent)
{
    Q_D(SsmIncidentsClient);
    d->apiVersion = QStringLiteral("2018-05-10");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Systems Manager Incident Manager");
    d->serviceName = QStringLiteral("ssm-incidents");
}

/*!
 * \overload SsmIncidentsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SsmIncidentsClient::SsmIncidentsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SsmIncidentsClientPrivate(this), parent)
{
    Q_D(SsmIncidentsClient);
    d->apiVersion = QStringLiteral("2018-05-10");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Systems Manager Incident Manager");
    d->serviceName = QStringLiteral("ssm-incidents");
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * CreateReplicationSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A replication set replicates and encrypts your data to the provided Regions with the provided KMS key.
 */
CreateReplicationSetResponse * SsmIncidentsClient::createReplicationSet(const CreateReplicationSetRequest &request)
{
    return qobject_cast<CreateReplicationSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * CreateResponsePlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a response plan that automates the initial response to incidents. A response plan engages contacts, starts chat
 * channel collaboration, and initiates runbooks at the beginning of an
 */
CreateResponsePlanResponse * SsmIncidentsClient::createResponsePlan(const CreateResponsePlanRequest &request)
{
    return qobject_cast<CreateResponsePlanResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * CreateTimelineEventResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a custom timeline event on the incident details page of an incident record. Timeline events are automatically
 * created by Incident Manager, marking key moment during an incident. You can create custom timeline events to mark
 * important events that are automatically detected by Incident
 */
CreateTimelineEventResponse * SsmIncidentsClient::createTimelineEvent(const CreateTimelineEventRequest &request)
{
    return qobject_cast<CreateTimelineEventResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * DeleteIncidentRecordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an incident record from Incident Manager.
 */
DeleteIncidentRecordResponse * SsmIncidentsClient::deleteIncidentRecord(const DeleteIncidentRecordRequest &request)
{
    return qobject_cast<DeleteIncidentRecordResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * DeleteReplicationSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes all Regions in your replication set. Deleting the replication set deletes all Incident Manager
 */
DeleteReplicationSetResponse * SsmIncidentsClient::deleteReplicationSet(const DeleteReplicationSetRequest &request)
{
    return qobject_cast<DeleteReplicationSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * DeleteResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the resource policy that Resource Access Manager uses to share your Incident Manager
 */
DeleteResourcePolicyResponse * SsmIncidentsClient::deleteResourcePolicy(const DeleteResourcePolicyRequest &request)
{
    return qobject_cast<DeleteResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * DeleteResponsePlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified response plan. Deleting a response plan stops all linked CloudWatch alarms and EventBridge events
 * from creating an incident with this response
 */
DeleteResponsePlanResponse * SsmIncidentsClient::deleteResponsePlan(const DeleteResponsePlanRequest &request)
{
    return qobject_cast<DeleteResponsePlanResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * DeleteTimelineEventResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a timeline event from an
 */
DeleteTimelineEventResponse * SsmIncidentsClient::deleteTimelineEvent(const DeleteTimelineEventRequest &request)
{
    return qobject_cast<DeleteTimelineEventResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * GetIncidentRecordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the details for the specified incident
 */
GetIncidentRecordResponse * SsmIncidentsClient::getIncidentRecord(const GetIncidentRecordRequest &request)
{
    return qobject_cast<GetIncidentRecordResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * GetReplicationSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve your Incident Manager replication
 */
GetReplicationSetResponse * SsmIncidentsClient::getReplicationSet(const GetReplicationSetRequest &request)
{
    return qobject_cast<GetReplicationSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * GetResourcePoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the resource policies attached to the specified response
 */
GetResourcePoliciesResponse * SsmIncidentsClient::getResourcePolicies(const GetResourcePoliciesRequest &request)
{
    return qobject_cast<GetResourcePoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * GetResponsePlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the details of the specified response
 */
GetResponsePlanResponse * SsmIncidentsClient::getResponsePlan(const GetResponsePlanRequest &request)
{
    return qobject_cast<GetResponsePlanResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * GetTimelineEventResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a timeline event based on its ID and incident
 */
GetTimelineEventResponse * SsmIncidentsClient::getTimelineEvent(const GetTimelineEventRequest &request)
{
    return qobject_cast<GetTimelineEventResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * ListIncidentRecordsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all incident records in your account. Use this command to retrieve the Amazon Resource Name (ARN) of the incident
 * record you want to update.
 */
ListIncidentRecordsResponse * SsmIncidentsClient::listIncidentRecords(const ListIncidentRecordsRequest &request)
{
    return qobject_cast<ListIncidentRecordsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * ListRelatedItemsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all related items for an incident
 */
ListRelatedItemsResponse * SsmIncidentsClient::listRelatedItems(const ListRelatedItemsRequest &request)
{
    return qobject_cast<ListRelatedItemsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * ListReplicationSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists details about the replication set configured in your account.
 */
ListReplicationSetsResponse * SsmIncidentsClient::listReplicationSets(const ListReplicationSetsRequest &request)
{
    return qobject_cast<ListReplicationSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * ListResponsePlansResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all response plans in your
 */
ListResponsePlansResponse * SsmIncidentsClient::listResponsePlans(const ListResponsePlansRequest &request)
{
    return qobject_cast<ListResponsePlansResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags that are attached to the specified response
 */
ListTagsForResourceResponse * SsmIncidentsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * ListTimelineEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists timeline events for the specified incident
 */
ListTimelineEventsResponse * SsmIncidentsClient::listTimelineEvents(const ListTimelineEventsRequest &request)
{
    return qobject_cast<ListTimelineEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * PutResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a resource policy to the specified response plan. The resource policy is used to share the response plan using
 * Resource Access Manager (RAM). For more information about cross-account sharing, see <a
 * href="https://docs.aws.amazon.com/incident-manager/latest/userguide/xa.html">Setting up cross-account
 */
PutResourcePolicyResponse * SsmIncidentsClient::putResourcePolicy(const PutResourcePolicyRequest &request)
{
    return qobject_cast<PutResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * StartIncidentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used to start an incident from CloudWatch alarms, EventBridge events, or manually.
 */
StartIncidentResponse * SsmIncidentsClient::startIncident(const StartIncidentRequest &request)
{
    return qobject_cast<StartIncidentResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a tag to a response
 */
TagResourceResponse * SsmIncidentsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag from a
 */
UntagResourceResponse * SsmIncidentsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * UpdateDeletionProtectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update deletion protection to either allow or deny deletion of the final Region in a replication
 */
UpdateDeletionProtectionResponse * SsmIncidentsClient::updateDeletionProtection(const UpdateDeletionProtectionRequest &request)
{
    return qobject_cast<UpdateDeletionProtectionResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * UpdateIncidentRecordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update the details of an incident record. You can use this operation to update an incident record from the defined chat
 * channel. For more information about using actions in chat channels, see <a
 * href="https://docs.aws.amazon.com/incident-manager/latest/userguide/chat.html#chat-interact">Interacting through
 */
UpdateIncidentRecordResponse * SsmIncidentsClient::updateIncidentRecord(const UpdateIncidentRecordRequest &request)
{
    return qobject_cast<UpdateIncidentRecordResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * UpdateRelatedItemsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Add or remove related items from the related items tab of an incident
 */
UpdateRelatedItemsResponse * SsmIncidentsClient::updateRelatedItems(const UpdateRelatedItemsRequest &request)
{
    return qobject_cast<UpdateRelatedItemsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * UpdateReplicationSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Add or delete Regions from your replication
 */
UpdateReplicationSetResponse * SsmIncidentsClient::updateReplicationSet(const UpdateReplicationSetRequest &request)
{
    return qobject_cast<UpdateReplicationSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * UpdateResponsePlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified response
 */
UpdateResponsePlanResponse * SsmIncidentsClient::updateResponsePlan(const UpdateResponsePlanRequest &request)
{
    return qobject_cast<UpdateResponsePlanResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmIncidentsClient service, and returns a pointer to an
 * UpdateTimelineEventResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a timeline event. You can update events of type <code>Custom
 */
UpdateTimelineEventResponse * SsmIncidentsClient::updateTimelineEvent(const UpdateTimelineEventRequest &request)
{
    return qobject_cast<UpdateTimelineEventResponse *>(send(request));
}

/*!
 * \class QtAws::SsmIncidents::SsmIncidentsClientPrivate
 * \brief The SsmIncidentsClientPrivate class provides private implementation for SsmIncidentsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a SsmIncidentsClientPrivate object with public implementation \a q.
 */
SsmIncidentsClientPrivate::SsmIncidentsClientPrivate(SsmIncidentsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SsmIncidents
} // namespace QtAws
