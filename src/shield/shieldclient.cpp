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

#include "shieldclient.h"
#include "shieldclient_p.h"

#include "core/awssignaturev4.h"
#include "associatedrtlogbucketrequest.h"
#include "associatedrtlogbucketresponse.h"
#include "associatedrtrolerequest.h"
#include "associatedrtroleresponse.h"
#include "associatehealthcheckrequest.h"
#include "associatehealthcheckresponse.h"
#include "associateproactiveengagementdetailsrequest.h"
#include "associateproactiveengagementdetailsresponse.h"
#include "createprotectionrequest.h"
#include "createprotectionresponse.h"
#include "createprotectiongrouprequest.h"
#include "createprotectiongroupresponse.h"
#include "createsubscriptionrequest.h"
#include "createsubscriptionresponse.h"
#include "deleteprotectionrequest.h"
#include "deleteprotectionresponse.h"
#include "deleteprotectiongrouprequest.h"
#include "deleteprotectiongroupresponse.h"
#include "deletesubscriptionrequest.h"
#include "deletesubscriptionresponse.h"
#include "describeattackrequest.h"
#include "describeattackresponse.h"
#include "describeattackstatisticsrequest.h"
#include "describeattackstatisticsresponse.h"
#include "describedrtaccessrequest.h"
#include "describedrtaccessresponse.h"
#include "describeemergencycontactsettingsrequest.h"
#include "describeemergencycontactsettingsresponse.h"
#include "describeprotectionrequest.h"
#include "describeprotectionresponse.h"
#include "describeprotectiongrouprequest.h"
#include "describeprotectiongroupresponse.h"
#include "describesubscriptionrequest.h"
#include "describesubscriptionresponse.h"
#include "disableproactiveengagementrequest.h"
#include "disableproactiveengagementresponse.h"
#include "disassociatedrtlogbucketrequest.h"
#include "disassociatedrtlogbucketresponse.h"
#include "disassociatedrtrolerequest.h"
#include "disassociatedrtroleresponse.h"
#include "disassociatehealthcheckrequest.h"
#include "disassociatehealthcheckresponse.h"
#include "enableproactiveengagementrequest.h"
#include "enableproactiveengagementresponse.h"
#include "getsubscriptionstaterequest.h"
#include "getsubscriptionstateresponse.h"
#include "listattacksrequest.h"
#include "listattacksresponse.h"
#include "listprotectiongroupsrequest.h"
#include "listprotectiongroupsresponse.h"
#include "listprotectionsrequest.h"
#include "listprotectionsresponse.h"
#include "listresourcesinprotectiongrouprequest.h"
#include "listresourcesinprotectiongroupresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateemergencycontactsettingsrequest.h"
#include "updateemergencycontactsettingsresponse.h"
#include "updateprotectiongrouprequest.h"
#include "updateprotectiongroupresponse.h"
#include "updatesubscriptionrequest.h"
#include "updatesubscriptionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Shield
 * \brief Contains classess for accessing AWS Shield.
 *
 * \inmodule QtAwsShield
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::ShieldClient
 * \brief The ShieldClient class provides access to the AWS Shield service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsShield
 *
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
 */

/*!
 * \brief Constructs a ShieldClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ShieldClient::ShieldClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2016-06-02"),
    QStringLiteral("shield"),
    QStringLiteral("AWS Shield"),
    QStringLiteral("shield"),
    parent), d_ptr(new ShieldClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload ShieldClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ShieldClient::ShieldClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2016-06-02"),
    QStringLiteral("shield"),
    QStringLiteral("AWS Shield"),
    QStringLiteral("shield"),
    parent), d_ptr(new ShieldClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * AssociateDRTLogBucketResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Authorizes the DDoS Response Team (DRT) to access the specified Amazon S3 bucket containing your AWS WAF logs. You can
 * associate up to 10 Amazon S3 buckets with your
 *
 * subscription>
 *
 * To use the services of the DRT and make an <code>AssociateDRTLogBucket</code> request, you must be subscribed to the <a
 * href="https://aws.amazon.com/premiumsupport/business-support/">Business Support plan</a> or the <a
 * href="https://aws.amazon.com/premiumsupport/enterprise-support/">Enterprise Support
 */
AssociateDRTLogBucketResponse * ShieldClient::associateDRTLogBucket(const AssociateDRTLogBucketRequest &request)
{
    return qobject_cast<AssociateDRTLogBucketResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * AssociateDRTRoleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Authorizes the DDoS Response Team (DRT), using the specified role, to access your AWS account to assist with DDoS attack
 * mitigation during potential attacks. This enables the DRT to inspect your AWS WAF configuration and create or update AWS
 * WAF rules and web
 *
 * ACLs>
 *
 * You can associate only one <code>RoleArn</code> with your subscription. If you submit an <code>AssociateDRTRole</code>
 * request for an account that already has an associated role, the new <code>RoleArn</code> will replace the existing
 * <code>RoleArn</code>.
 *
 * </p
 *
 * Prior to making the <code>AssociateDRTRole</code> request, you must attach the <a
 * href="https://console.aws.amazon.com/iam/home?#/policies/arn:aws:iam::aws:policy/service-role/AWSShieldDRTAccessPolicy">AWSShieldDRTAccessPolicy</a>
 * managed policy to the role you will specify in the request. For more information see <a href="
 * https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_manage-attach-detach.html">Attaching and Detaching IAM
 * Policies</a>. The role must also trust the service principal <code> drt.shield.amazonaws.com</code>. For more
 * information, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">IAM JSON Policy
 * Elements:
 *
 * Principal</a>>
 *
 * The DRT will have access only to your AWS WAF and Shield resources. By submitting this request, you authorize the DRT to
 * inspect your AWS WAF and Shield configuration and create and update AWS WAF rules and web ACLs on your behalf. The DRT
 * takes these actions only if explicitly authorized by
 *
 * you>
 *
 * You must have the <code>iam:PassRole</code> permission to make an <code>AssociateDRTRole</code> request. For more
 * information, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use_passrole.html">Granting a User
 * Permissions to Pass a Role to an AWS Service</a>.
 *
 * </p
 *
 * To use the services of the DRT and make an <code>AssociateDRTRole</code> request, you must be subscribed to the <a
 * href="https://aws.amazon.com/premiumsupport/business-support/">Business Support plan</a> or the <a
 * href="https://aws.amazon.com/premiumsupport/enterprise-support/">Enterprise Support
 */
AssociateDRTRoleResponse * ShieldClient::associateDRTRole(const AssociateDRTRoleRequest &request)
{
    return qobject_cast<AssociateDRTRoleResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * AssociateHealthCheckResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds health-based detection to the Shield Advanced protection for a resource. Shield Advanced health-based detection
 * uses the health of your AWS resource to improve responsiveness and accuracy in attack detection and mitigation.
 *
 * </p
 *
 * You define the health check in Route 53 and then associate it with your Shield Advanced protection. For more
 * information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/ddos-overview.html#ddos-advanced-health-check-option">Shield
 * Advanced Health-Based Detection</a> in the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and
 * AWS Shield Developer Guide</a>.
 */
AssociateHealthCheckResponse * ShieldClient::associateHealthCheck(const AssociateHealthCheckRequest &request)
{
    return qobject_cast<AssociateHealthCheckResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * AssociateProactiveEngagementDetailsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initializes proactive engagement and sets the list of contacts for the DDoS Response Team (DRT) to use. You must provide
 * at least one phone number in the emergency contact list.
 *
 * </p
 *
 * After you have initialized proactive engagement using this call, to disable or enable proactive engagement, use the
 * calls <code>DisableProactiveEngagement</code> and <code>EnableProactiveEngagement</code>.
 *
 * </p <note>
 *
 * This call defines the list of email addresses and phone numbers that the DDoS Response Team (DRT) can use to contact you
 * for escalations to the DRT and to initiate proactive customer
 *
 * support>
 *
 * The contacts that you provide in the request replace any contacts that were already defined. If you already have
 * contacts defined and want to use them, retrieve the list using <code>DescribeEmergencyContactSettings</code> and then
 * provide it to this call.
 */
AssociateProactiveEngagementDetailsResponse * ShieldClient::associateProactiveEngagementDetails(const AssociateProactiveEngagementDetailsRequest &request)
{
    return qobject_cast<AssociateProactiveEngagementDetailsResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * CreateProtectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables AWS Shield Advanced for a specific AWS resource. The resource can be an Amazon CloudFront distribution, Elastic
 * Load Balancing load balancer, AWS Global Accelerator accelerator, Elastic IP Address, or an Amazon Route 53 hosted
 *
 * zone>
 *
 * You can add protection to only a single resource with each CreateProtection request. If you want to add protection to
 * multiple resources at once, use the <a href="https://console.aws.amazon.com/waf/">AWS WAF console</a>. For more
 * information see <a href="https://docs.aws.amazon.com/waf/latest/developerguide/getting-started-ddos.html">Getting
 * Started with AWS Shield Advanced</a> and <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/configure-new-protection.html">Add AWS Shield Advanced
 * Protection to more AWS
 */
CreateProtectionResponse * ShieldClient::createProtection(const CreateProtectionRequest &request)
{
    return qobject_cast<CreateProtectionResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * CreateProtectionGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a grouping of protected resources so they can be handled as a collective. This resource grouping improves the
 * accuracy of detection and reduces false positives.
 */
CreateProtectionGroupResponse * ShieldClient::createProtectionGroup(const CreateProtectionGroupRequest &request)
{
    return qobject_cast<CreateProtectionGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * CreateSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Activates AWS Shield Advanced for an
 *
 * account>
 *
 * When you initally create a subscription, your subscription is set to be automatically renewed at the end of the existing
 * subscription period. You can change this by submitting an <code>UpdateSubscription</code> request.
 */
CreateSubscriptionResponse * ShieldClient::createSubscription(const CreateSubscriptionRequest &request)
{
    return qobject_cast<CreateSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * DeleteProtectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an AWS Shield Advanced
 */
DeleteProtectionResponse * ShieldClient::deleteProtection(const DeleteProtectionRequest &request)
{
    return qobject_cast<DeleteProtectionResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * DeleteProtectionGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified protection
 */
DeleteProtectionGroupResponse * ShieldClient::deleteProtectionGroup(const DeleteProtectionGroupRequest &request)
{
    return qobject_cast<DeleteProtectionGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * DeleteSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes AWS Shield Advanced from an account. AWS Shield Advanced requires a 1-year subscription commitment. You cannot
 * delete a subscription prior to the completion of that commitment.
 */
DeleteSubscriptionResponse * ShieldClient::deleteSubscription(const DeleteSubscriptionRequest &request)
{
    return qobject_cast<DeleteSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * DescribeAttackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the details of a DDoS attack.
 */
DescribeAttackResponse * ShieldClient::describeAttack(const DescribeAttackRequest &request)
{
    return qobject_cast<DescribeAttackResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * DescribeAttackStatisticsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about the number and type of attacks AWS Shield has detected in the last year for all resources
 * that belong to your account, regardless of whether you've defined Shield protections for them. This operation is
 * available to Shield customers as well as to Shield Advanced
 *
 * customers>
 *
 * The operation returns data for the time range of midnight UTC, one year ago, to midnight UTC, today. For example, if the
 * current time is <code>2020-10-26 15:39:32 PDT</code>, equal to <code>2020-10-26 22:39:32 UTC</code>, then the time range
 * for the attack data returned is from <code>2019-10-26 00:00:00 UTC</code> to <code>2020-10-26 00:00:00 UTC</code>.
 *
 * </p
 *
 * The time range indicates the period covered by the attack statistics data
 */
DescribeAttackStatisticsResponse * ShieldClient::describeAttackStatistics(const DescribeAttackStatisticsRequest &request)
{
    return qobject_cast<DescribeAttackStatisticsResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * DescribeDRTAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the current role and list of Amazon S3 log buckets used by the DDoS Response Team (DRT) to access your AWS
 * account while assisting with attack
 */
DescribeDRTAccessResponse * ShieldClient::describeDRTAccess(const DescribeDRTAccessRequest &request)
{
    return qobject_cast<DescribeDRTAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * DescribeEmergencyContactSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A list of email addresses and phone numbers that the DDoS Response Team (DRT) can use to contact you if you have
 * proactive engagement enabled, for escalations to the DRT and to initiate proactive customer
 */
DescribeEmergencyContactSettingsResponse * ShieldClient::describeEmergencyContactSettings(const DescribeEmergencyContactSettingsRequest &request)
{
    return qobject_cast<DescribeEmergencyContactSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * DescribeProtectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the details of a <a>Protection</a>
 */
DescribeProtectionResponse * ShieldClient::describeProtection(const DescribeProtectionRequest &request)
{
    return qobject_cast<DescribeProtectionResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * DescribeProtectionGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the specification for the specified protection
 */
DescribeProtectionGroupResponse * ShieldClient::describeProtectionGroup(const DescribeProtectionGroupRequest &request)
{
    return qobject_cast<DescribeProtectionGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * DescribeSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides details about the AWS Shield Advanced subscription for an
 */
DescribeSubscriptionResponse * ShieldClient::describeSubscription(const DescribeSubscriptionRequest &request)
{
    return qobject_cast<DescribeSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * DisableProactiveEngagementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes authorization from the DDoS Response Team (DRT) to notify contacts about escalations to the DRT and to initiate
 * proactive customer
 */
DisableProactiveEngagementResponse * ShieldClient::disableProactiveEngagement(const DisableProactiveEngagementRequest &request)
{
    return qobject_cast<DisableProactiveEngagementResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * DisassociateDRTLogBucketResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the DDoS Response Team's (DRT) access to the specified Amazon S3 bucket containing your AWS WAF
 *
 * logs>
 *
 * To make a <code>DisassociateDRTLogBucket</code> request, you must be subscribed to the <a
 * href="https://aws.amazon.com/premiumsupport/business-support/">Business Support plan</a> or the <a
 * href="https://aws.amazon.com/premiumsupport/enterprise-support/">Enterprise Support plan</a>. However, if you are not
 * subscribed to one of these support plans, but had been previously and had granted the DRT access to your account, you
 * can submit a <code>DisassociateDRTLogBucket</code> request to remove this
 */
DisassociateDRTLogBucketResponse * ShieldClient::disassociateDRTLogBucket(const DisassociateDRTLogBucketRequest &request)
{
    return qobject_cast<DisassociateDRTLogBucketResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * DisassociateDRTRoleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the DDoS Response Team's (DRT) access to your AWS
 *
 * account>
 *
 * To make a <code>DisassociateDRTRole</code> request, you must be subscribed to the <a
 * href="https://aws.amazon.com/premiumsupport/business-support/">Business Support plan</a> or the <a
 * href="https://aws.amazon.com/premiumsupport/enterprise-support/">Enterprise Support plan</a>. However, if you are not
 * subscribed to one of these support plans, but had been previously and had granted the DRT access to your account, you
 * can submit a <code>DisassociateDRTRole</code> request to remove this
 */
DisassociateDRTRoleResponse * ShieldClient::disassociateDRTRole(const DisassociateDRTRoleRequest &request)
{
    return qobject_cast<DisassociateDRTRoleResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * DisassociateHealthCheckResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes health-based detection from the Shield Advanced protection for a resource. Shield Advanced health-based
 * detection uses the health of your AWS resource to improve responsiveness and accuracy in attack detection and
 * mitigation.
 *
 * </p
 *
 * You define the health check in Route 53 and then associate or disassociate it with your Shield Advanced protection. For
 * more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/ddos-overview.html#ddos-advanced-health-check-option">Shield
 * Advanced Health-Based Detection</a> in the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and
 * AWS Shield Developer Guide</a>.
 */
DisassociateHealthCheckResponse * ShieldClient::disassociateHealthCheck(const DisassociateHealthCheckRequest &request)
{
    return qobject_cast<DisassociateHealthCheckResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * EnableProactiveEngagementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Authorizes the DDoS Response Team (DRT) to use email and phone to notify contacts about escalations to the DRT and to
 * initiate proactive customer
 */
EnableProactiveEngagementResponse * ShieldClient::enableProactiveEngagement(const EnableProactiveEngagementRequest &request)
{
    return qobject_cast<EnableProactiveEngagementResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * GetSubscriptionStateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the <code>SubscriptionState</code>, either <code>Active</code> or
 */
GetSubscriptionStateResponse * ShieldClient::getSubscriptionState(const GetSubscriptionStateRequest &request)
{
    return qobject_cast<GetSubscriptionStateResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * ListAttacksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all ongoing DDoS attacks or all DDoS attacks during a specified time
 */
ListAttacksResponse * ShieldClient::listAttacks(const ListAttacksRequest &request)
{
    return qobject_cast<ListAttacksResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * ListProtectionGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the <a>ProtectionGroup</a> objects for the
 */
ListProtectionGroupsResponse * ShieldClient::listProtectionGroups(const ListProtectionGroupsRequest &request)
{
    return qobject_cast<ListProtectionGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * ListProtectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all <a>Protection</a> objects for the
 */
ListProtectionsResponse * ShieldClient::listProtections(const ListProtectionsRequest &request)
{
    return qobject_cast<ListProtectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * ListResourcesInProtectionGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the resources that are included in the protection group.
 */
ListResourcesInProtectionGroupResponse * ShieldClient::listResourcesInProtectionGroup(const ListResourcesInProtectionGroupRequest &request)
{
    return qobject_cast<ListResourcesInProtectionGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about AWS tags for a specified Amazon Resource Name (ARN) in AWS
 */
ListTagsForResourceResponse * ShieldClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates tags for a resource in AWS
 */
TagResourceResponse * ShieldClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from a resource in AWS
 */
UntagResourceResponse * ShieldClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * UpdateEmergencyContactSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the details of the list of email addresses and phone numbers that the DDoS Response Team (DRT) can use to
 * contact you if you have proactive engagement enabled, for escalations to the DRT and to initiate proactive customer
 */
UpdateEmergencyContactSettingsResponse * ShieldClient::updateEmergencyContactSettings(const UpdateEmergencyContactSettingsRequest &request)
{
    return qobject_cast<UpdateEmergencyContactSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * UpdateProtectionGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing protection group. A protection group is a grouping of protected resources so they can be handled as
 * a collective. This resource grouping improves the accuracy of detection and reduces false positives.
 */
UpdateProtectionGroupResponse * ShieldClient::updateProtectionGroup(const UpdateProtectionGroupRequest &request)
{
    return qobject_cast<UpdateProtectionGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ShieldClient service, and returns a pointer to an
 * UpdateSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the details of an existing subscription. Only enter values for parameters you want to change. Empty parameters
 * are not
 */
UpdateSubscriptionResponse * ShieldClient::updateSubscription(const UpdateSubscriptionRequest &request)
{
    return qobject_cast<UpdateSubscriptionResponse *>(send(request));
}

/*!
 * \class QtAws::Shield::ShieldClientPrivate
 * \brief The ShieldClientPrivate class provides private implementation for ShieldClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a ShieldClientPrivate object with public implementation \a q.
 */
ShieldClientPrivate::ShieldClientPrivate(ShieldClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace Shield
} // namespace QtAws
