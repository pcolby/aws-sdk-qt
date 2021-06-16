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

#include "wafv2client.h"
#include "wafv2client_p.h"

#include "core/awssignaturev4.h"
#include "associatewebaclrequest.h"
#include "associatewebaclresponse.h"
#include "checkcapacityrequest.h"
#include "checkcapacityresponse.h"
#include "createipsetrequest.h"
#include "createipsetresponse.h"
#include "createregexpatternsetrequest.h"
#include "createregexpatternsetresponse.h"
#include "createrulegrouprequest.h"
#include "createrulegroupresponse.h"
#include "createwebaclrequest.h"
#include "createwebaclresponse.h"
#include "deletefirewallmanagerrulegroupsrequest.h"
#include "deletefirewallmanagerrulegroupsresponse.h"
#include "deleteipsetrequest.h"
#include "deleteipsetresponse.h"
#include "deleteloggingconfigurationrequest.h"
#include "deleteloggingconfigurationresponse.h"
#include "deletepermissionpolicyrequest.h"
#include "deletepermissionpolicyresponse.h"
#include "deleteregexpatternsetrequest.h"
#include "deleteregexpatternsetresponse.h"
#include "deleterulegrouprequest.h"
#include "deleterulegroupresponse.h"
#include "deletewebaclrequest.h"
#include "deletewebaclresponse.h"
#include "describemanagedrulegrouprequest.h"
#include "describemanagedrulegroupresponse.h"
#include "disassociatewebaclrequest.h"
#include "disassociatewebaclresponse.h"
#include "getipsetrequest.h"
#include "getipsetresponse.h"
#include "getloggingconfigurationrequest.h"
#include "getloggingconfigurationresponse.h"
#include "getpermissionpolicyrequest.h"
#include "getpermissionpolicyresponse.h"
#include "getratebasedstatementmanagedkeysrequest.h"
#include "getratebasedstatementmanagedkeysresponse.h"
#include "getregexpatternsetrequest.h"
#include "getregexpatternsetresponse.h"
#include "getrulegrouprequest.h"
#include "getrulegroupresponse.h"
#include "getsampledrequestsrequest.h"
#include "getsampledrequestsresponse.h"
#include "getwebaclrequest.h"
#include "getwebaclresponse.h"
#include "getwebaclforresourcerequest.h"
#include "getwebaclforresourceresponse.h"
#include "listavailablemanagedrulegroupsrequest.h"
#include "listavailablemanagedrulegroupsresponse.h"
#include "listipsetsrequest.h"
#include "listipsetsresponse.h"
#include "listloggingconfigurationsrequest.h"
#include "listloggingconfigurationsresponse.h"
#include "listregexpatternsetsrequest.h"
#include "listregexpatternsetsresponse.h"
#include "listresourcesforwebaclrequest.h"
#include "listresourcesforwebaclresponse.h"
#include "listrulegroupsrequest.h"
#include "listrulegroupsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listwebaclsrequest.h"
#include "listwebaclsresponse.h"
#include "putloggingconfigurationrequest.h"
#include "putloggingconfigurationresponse.h"
#include "putpermissionpolicyrequest.h"
#include "putpermissionpolicyresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateipsetrequest.h"
#include "updateipsetresponse.h"
#include "updateregexpatternsetrequest.h"
#include "updateregexpatternsetresponse.h"
#include "updaterulegrouprequest.h"
#include "updaterulegroupresponse.h"
#include "updatewebaclrequest.h"
#include "updatewebaclresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::WAFV2
 * \brief Contains classess for accessing AWS WAFV2.
 *
 * \inmodule QtAwsWafv2
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace WAFV2 {

/*!
 * \class QtAws::WAFV2::Wafv2Client
 * \brief The Wafv2Client class provides access to the AWS WAFV2 service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWAFV2
 *
 *  <note>
 * 
 *  This is the latest version of the <b>AWS WAF</b> API, released in November, 2019. The names of the entities that you use
 *  to access this API, like endpoints and namespaces, all have the versioning information added, like "V2" or "v2", to
 *  distinguish from the prior version. We recommend migrating your resources to this version, because it has a number of
 *  significant
 * 
 *  improvements>
 * 
 *  If you used AWS WAF prior to this release, you can't use this AWS WAFV2 API to access any AWS WAF resources that you
 *  created before. You can access your old rules, web ACLs, and other AWS WAF resources only through the AWS WAF Classic
 *  APIs. The AWS WAF Classic APIs have retained the prior names, endpoints, and namespaces.
 * 
 *  </p
 * 
 *  For information, including how to migrate your AWS WAF resources to this version, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>.
 * 
 *  </p </note>
 * 
 *  AWS WAF is a web application firewall that lets you monitor the HTTP and HTTPS requests that are forwarded to Amazon
 *  CloudFront, an Amazon API Gateway REST API, an Application Load Balancer, or an AWS AppSync GraphQL API. AWS WAF also
 *  lets you control access to your content. Based on conditions that you specify, such as the IP addresses that requests
 *  originate from or the values of query strings, the API Gateway REST API, CloudFront distribution, the Application Load
 *  Balancer, or the AWS AppSync GraphQL API responds to requests either with the requested content or with an HTTP 403
 *  status code (Forbidden). You also can configure CloudFront to return a custom error page when a request is
 * 
 *  blocked>
 * 
 *  This API guide is for developers who need detailed information about AWS WAF API actions, data types, and errors. For
 *  detailed information about AWS WAF features and an overview of how to use AWS WAF, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 * 
 *  Guide</a>>
 * 
 *  You can make calls using the endpoints listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Service Endpoints for AWS WAF</a>.
 * 
 *  </p <ul> <li>
 * 
 *  For regional applications, you can use any of the endpoints in the list. A regional application can be an Application
 *  Load Balancer (ALB), an API Gateway REST API, or an AppSync GraphQL API.
 * 
 *  </p </li> <li>
 * 
 *  For AWS CloudFront applications, you must use the API endpoint listed for US East (N. Virginia):
 * 
 *  us-east-1> </li> </ul>
 * 
 *  Alternatively, you can use one of the AWS SDKs to access an API that's tailored to the programming language or platform
 *  that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS
 * 
 *  SDKs</a>>
 * 
 *  We currently provide two versions of the AWS WAF API: this API and the prior versions, the classic AWS WAF APIs. This
 *  new API provides the same functionality as the older versions, with the following major
 * 
 *  improvements> <ul> <li>
 * 
 *  You use one API for both global and regional applications. Where you need to distinguish the scope, you specify a
 *  <code>Scope</code> parameter and set it to <code>CLOUDFRONT</code> or <code>REGIONAL</code>.
 * 
 *  </p </li> <li>
 * 
 *  You can define a Web ACL or rule group with a single call, and update it with a single call. You define all rule
 *  specifications in JSON format, and pass them to your rule group or Web ACL
 * 
 *  calls> </li> <li>
 * 
 *  The limits AWS WAF places on the use of rules more closely reflects the cost of running each type of rule. Rule groups
 *  include capacity settings, so you know the maximum cost of a rule group when you use
 */

/*!
 * \brief Constructs a Wafv2Client object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
Wafv2Client::Wafv2Client(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new Wafv2ClientPrivate(this), parent)
{
    Q_D(Wafv2Client);
    d->apiVersion = QStringLiteral("2019-07-29");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("wafv2");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS WAFV2");
    d->serviceName = QStringLiteral("wafv2");
}

/*!
 * \overload Wafv2Client()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
Wafv2Client::Wafv2Client(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new Wafv2ClientPrivate(this), parent)
{
    Q_D(Wafv2Client);
    d->apiVersion = QStringLiteral("2019-07-29");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("wafv2");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS WAFV2");
    d->serviceName = QStringLiteral("wafv2");
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * AssociateWebACLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a Web ACL with a regional application resource, to protect the resource. A regional application can be an
 * Application Load Balancer (ALB), an API Gateway REST API, or an AppSync GraphQL API.
 *
 * </p
 *
 * For AWS CloudFront, don't use this call. Instead, use your CloudFront distribution configuration. To associate a Web
 * ACL, in the CloudFront call <code>UpdateDistribution</code>, set the web ACL ID to the Amazon Resource Name (ARN) of the
 * Web ACL. For information, see <a
 */
AssociateWebACLResponse * Wafv2Client::associateWebACL(const AssociateWebACLRequest &request)
{
    return qobject_cast<AssociateWebACLResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * CheckCapacityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the web ACL capacity unit (WCU) requirements for a specified scope and set of rules. You can use this to check
 * the capacity requirements for the rules you want to use in a <a>RuleGroup</a> or <a>WebACL</a>.
 *
 * </p
 *
 * AWS WAF uses WCUs to calculate and control the operating resources that are used to run your rules, rule groups, and web
 * ACLs. AWS WAF calculates capacity differently for each rule type, to reflect the relative cost of each rule. Simple
 * rules that cost little to run use fewer WCUs than more complex rules that use more processing power. Rule group capacity
 * is fixed at creation, which helps users plan their web ACL WCU usage when they use a rule group. The WCU limit for web
 * ACLs is 1,500.
 */
CheckCapacityResponse * Wafv2Client::checkCapacity(const CheckCapacityRequest &request)
{
    return qobject_cast<CheckCapacityResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * CreateIPSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an <a>IPSet</a>, which you use to identify web requests that originate from specific IP addresses or ranges of
 * IP addresses. For example, if you're receiving a lot of requests from a ranges of IP addresses, you can configure AWS
 * WAF to block them using an IPSet that lists those IP addresses.
 */
CreateIPSetResponse * Wafv2Client::createIPSet(const CreateIPSetRequest &request)
{
    return qobject_cast<CreateIPSetResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * CreateRegexPatternSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <a>RegexPatternSet</a>, which you reference in a <a>RegexPatternSetReferenceStatement</a>, to have AWS WAF
 * inspect a web request component for the specified
 */
CreateRegexPatternSetResponse * Wafv2Client::createRegexPatternSet(const CreateRegexPatternSetRequest &request)
{
    return qobject_cast<CreateRegexPatternSetResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * CreateRuleGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <a>RuleGroup</a> per the specifications provided.
 *
 * </p
 *
 * A rule group defines a collection of rules to inspect and control web requests that you can use in a <a>WebACL</a>. When
 * you create a rule group, you define an immutable capacity limit. If you update a rule group, you must stay within the
 * capacity. This allows others to reuse the rule group with confidence in its capacity requirements.
 */
CreateRuleGroupResponse * Wafv2Client::createRuleGroup(const CreateRuleGroupRequest &request)
{
    return qobject_cast<CreateRuleGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * CreateWebACLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <a>WebACL</a> per the specifications
 *
 * provided>
 *
 * A Web ACL defines a collection of rules to use to inspect and control web requests. Each rule has an action defined
 * (allow, block, or count) for requests that match the statement of the rule. In the Web ACL, you assign a default action
 * to take (allow, block) for any request that does not match any of the rules. The rules in a Web ACL can be a combination
 * of the types <a>Rule</a>, <a>RuleGroup</a>, and managed rule group. You can associate a Web ACL with one or more AWS
 * resources to protect. The resources can be Amazon CloudFront, an Amazon API Gateway REST API, an Application Load
 * Balancer, or an AWS AppSync GraphQL API.
 */
CreateWebACLResponse * Wafv2Client::createWebACL(const CreateWebACLRequest &request)
{
    return qobject_cast<CreateWebACLResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * DeleteFirewallManagerRuleGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes all rule groups that are managed by AWS Firewall Manager for the specified web ACL.
 *
 * </p
 *
 * You can only use this if <code>ManagedByFirewallManager</code> is false in the specified <a>WebACL</a>.
 */
DeleteFirewallManagerRuleGroupsResponse * Wafv2Client::deleteFirewallManagerRuleGroups(const DeleteFirewallManagerRuleGroupsRequest &request)
{
    return qobject_cast<DeleteFirewallManagerRuleGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * DeleteIPSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified <a>IPSet</a>.
 */
DeleteIPSetResponse * Wafv2Client::deleteIPSet(const DeleteIPSetRequest &request)
{
    return qobject_cast<DeleteIPSetResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * DeleteLoggingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the <a>LoggingConfiguration</a> from the specified web
 */
DeleteLoggingConfigurationResponse * Wafv2Client::deleteLoggingConfiguration(const DeleteLoggingConfigurationRequest &request)
{
    return qobject_cast<DeleteLoggingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * DeletePermissionPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Permanently deletes an IAM policy from the specified rule
 *
 * group>
 *
 * You must be the owner of the rule group to perform this
 */
DeletePermissionPolicyResponse * Wafv2Client::deletePermissionPolicy(const DeletePermissionPolicyRequest &request)
{
    return qobject_cast<DeletePermissionPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * DeleteRegexPatternSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 */
DeleteRegexPatternSetResponse * Wafv2Client::deleteRegexPatternSet(const DeleteRegexPatternSetRequest &request)
{
    return qobject_cast<DeleteRegexPatternSetResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * DeleteRuleGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 */
DeleteRuleGroupResponse * Wafv2Client::deleteRuleGroup(const DeleteRuleGroupRequest &request)
{
    return qobject_cast<DeleteRuleGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * DeleteWebACLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 *
 * <a>WebACL</a>>
 *
 * You can only use this if <code>ManagedByFirewallManager</code> is false in the specified <a>WebACL</a>.
 */
DeleteWebACLResponse * Wafv2Client::deleteWebACL(const DeleteWebACLRequest &request)
{
    return qobject_cast<DeleteWebACLResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * DescribeManagedRuleGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides high-level information for a managed rule group, including descriptions of the rules.
 */
DescribeManagedRuleGroupResponse * Wafv2Client::describeManagedRuleGroup(const DescribeManagedRuleGroupRequest &request)
{
    return qobject_cast<DescribeManagedRuleGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * DisassociateWebACLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a Web ACL from a regional application resource. A regional application can be an Application Load Balancer
 * (ALB), an API Gateway REST API, or an AppSync GraphQL API.
 *
 * </p
 *
 * For AWS CloudFront, don't use this call. Instead, use your CloudFront distribution configuration. To disassociate a Web
 * ACL, provide an empty web ACL ID in the CloudFront call <code>UpdateDistribution</code>. For information, see <a
 */
DisassociateWebACLResponse * Wafv2Client::disassociateWebACL(const DisassociateWebACLRequest &request)
{
    return qobject_cast<DisassociateWebACLResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * GetIPSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the specified
 */
GetIPSetResponse * Wafv2Client::getIPSet(const GetIPSetRequest &request)
{
    return qobject_cast<GetIPSetResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * GetLoggingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the <a>LoggingConfiguration</a> for the specified web
 */
GetLoggingConfigurationResponse * Wafv2Client::getLoggingConfiguration(const GetLoggingConfigurationRequest &request)
{
    return qobject_cast<GetLoggingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * GetPermissionPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the IAM policy that is attached to the specified rule
 *
 * group>
 *
 * You must be the owner of the rule group to perform this
 */
GetPermissionPolicyResponse * Wafv2Client::getPermissionPolicy(const GetPermissionPolicyRequest &request)
{
    return qobject_cast<GetPermissionPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * GetRateBasedStatementManagedKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the keys that are currently blocked by a rate-based rule. The maximum number of managed keys that can be
 * blocked for a single rate-based rule is 10,000. If more than 10,000 addresses exceed the rate limit, those with the
 * highest rates are
 */
GetRateBasedStatementManagedKeysResponse * Wafv2Client::getRateBasedStatementManagedKeys(const GetRateBasedStatementManagedKeysRequest &request)
{
    return qobject_cast<GetRateBasedStatementManagedKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * GetRegexPatternSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the specified
 */
GetRegexPatternSetResponse * Wafv2Client::getRegexPatternSet(const GetRegexPatternSetRequest &request)
{
    return qobject_cast<GetRegexPatternSetResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * GetRuleGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the specified
 */
GetRuleGroupResponse * Wafv2Client::getRuleGroup(const GetRuleGroupRequest &request)
{
    return qobject_cast<GetRuleGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * GetSampledRequestsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets detailed information about a specified number of requests--a sample--that AWS WAF randomly selects from among the
 * first 5,000 requests that your AWS resource received during a time range that you choose. You can specify a sample size
 * of up to 500 requests, and you can specify any time range in the previous three
 *
 * hours>
 *
 * <code>GetSampledRequests</code> returns a time range, which is usually the time range that you specified. However, if
 * your resource (such as a CloudFront distribution) received 5,000 requests before the specified time range elapsed,
 * <code>GetSampledRequests</code> returns an updated time range. This new time range indicates the actual period during
 * which AWS WAF selected the requests in the
 */
GetSampledRequestsResponse * Wafv2Client::getSampledRequests(const GetSampledRequestsRequest &request)
{
    return qobject_cast<GetSampledRequestsResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * GetWebACLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the specified
 */
GetWebACLResponse * Wafv2Client::getWebACL(const GetWebACLRequest &request)
{
    return qobject_cast<GetWebACLResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * GetWebACLForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the <a>WebACL</a> for the specified resource.
 */
GetWebACLForResourceResponse * Wafv2Client::getWebACLForResource(const GetWebACLForResourceRequest &request)
{
    return qobject_cast<GetWebACLForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * ListAvailableManagedRuleGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves an array of managed rule groups that are available for you to use. This list includes all AWS Managed Rules
 * rule groups and the AWS Marketplace managed rule groups that you're subscribed
 */
ListAvailableManagedRuleGroupsResponse * Wafv2Client::listAvailableManagedRuleGroups(const ListAvailableManagedRuleGroupsRequest &request)
{
    return qobject_cast<ListAvailableManagedRuleGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * ListIPSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves an array of <a>IPSetSummary</a> objects for the IP sets that you
 */
ListIPSetsResponse * Wafv2Client::listIPSets(const ListIPSetsRequest &request)
{
    return qobject_cast<ListIPSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * ListLoggingConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves an array of your <a>LoggingConfiguration</a>
 */
ListLoggingConfigurationsResponse * Wafv2Client::listLoggingConfigurations(const ListLoggingConfigurationsRequest &request)
{
    return qobject_cast<ListLoggingConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * ListRegexPatternSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves an array of <a>RegexPatternSetSummary</a> objects for the regex pattern sets that you
 */
ListRegexPatternSetsResponse * Wafv2Client::listRegexPatternSets(const ListRegexPatternSetsRequest &request)
{
    return qobject_cast<ListRegexPatternSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * ListResourcesForWebACLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves an array of the Amazon Resource Names (ARNs) for the regional resources that are associated with the specified
 * web ACL. If you want the list of AWS CloudFront resources, use the AWS CloudFront call
 * <code>ListDistributionsByWebACLId</code>.
 */
ListResourcesForWebACLResponse * Wafv2Client::listResourcesForWebACL(const ListResourcesForWebACLRequest &request)
{
    return qobject_cast<ListResourcesForWebACLResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * ListRuleGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves an array of <a>RuleGroupSummary</a> objects for the rule groups that you manage.
 */
ListRuleGroupsResponse * Wafv2Client::listRuleGroups(const ListRuleGroupsRequest &request)
{
    return qobject_cast<ListRuleGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the <a>TagInfoForResource</a> for the specified resource. Tags are key:value pairs that you can use to
 * categorize and manage your resources, for purposes like billing. For example, you might set the tag key to "customer"
 * and the value to the customer name or ID. You can specify one or more tags to add to each AWS resource, up to 50 tags
 * for a
 *
 * resource>
 *
 * You can tag the AWS resources that you manage through AWS WAF: web ACLs, rule groups, IP sets, and regex pattern sets.
 * You can't manage or view tags through the AWS WAF console.
 */
ListTagsForResourceResponse * Wafv2Client::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * ListWebACLsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves an array of <a>WebACLSummary</a> objects for the web ACLs that you
 */
ListWebACLsResponse * Wafv2Client::listWebACLs(const ListWebACLsRequest &request)
{
    return qobject_cast<ListWebACLsResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * PutLoggingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the specified <a>LoggingConfiguration</a>, to start logging from a web ACL, according to the configuration
 *
 * provided>
 *
 * You can access information about all traffic that AWS WAF inspects using the following
 *
 * steps> <ol> <li>
 *
 * Create an Amazon Kinesis Data Firehose.
 *
 * </p
 *
 * Create the data firehose with a PUT source and in the Region that you are operating. If you are capturing logs for
 * Amazon CloudFront, always create the firehose in US East (N. Virginia).
 *
 * </p
 *
 * Give the data firehose a name that starts with the prefix <code>aws-waf-logs-</code>. For example,
 *
 * <code>aws-waf-logs-us-east-2-analytics</code>> <note>
 *
 * Do not create the data firehose using a <code>Kinesis stream</code> as your
 *
 * source> </note> </li> <li>
 *
 * Associate that firehose to your web ACL using a <code>PutLoggingConfiguration</code>
 *
 * request> </li> </ol>
 *
 * When you successfully enable logging using a <code>PutLoggingConfiguration</code> request, AWS WAF will create a service
 * linked role with the necessary permissions to write logs to the Amazon Kinesis Data Firehose. For more information, see
 * <a href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging Web ACL Traffic Information</a> in
 * the <i>AWS WAF Developer
 */
PutLoggingConfigurationResponse * Wafv2Client::putLoggingConfiguration(const PutLoggingConfigurationRequest &request)
{
    return qobject_cast<PutLoggingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * PutPermissionPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches an IAM policy to the specified resource. Use this to share a rule group across
 *
 * accounts>
 *
 * You must be the owner of the rule group to perform this
 *
 * operation>
 *
 * This action is subject to the following
 *
 * restrictions> <ul> <li>
 *
 * You can attach only one policy with each <code>PutPermissionPolicy</code>
 *
 * request> </li> <li>
 *
 * The ARN in the request must be a valid WAF <a>RuleGroup</a> ARN and the rule group must exist in the same
 *
 * region> </li> <li>
 *
 * The user making the request must be the owner of the rule
 */
PutPermissionPolicyResponse * Wafv2Client::putPermissionPolicy(const PutPermissionPolicyRequest &request)
{
    return qobject_cast<PutPermissionPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates tags with the specified AWS resource. Tags are key:value pairs that you can use to categorize and manage your
 * resources, for purposes like billing. For example, you might set the tag key to "customer" and the value to the customer
 * name or ID. You can specify one or more tags to add to each AWS resource, up to 50 tags for a
 *
 * resource>
 *
 * You can tag the AWS resources that you manage through AWS WAF: web ACLs, rule groups, IP sets, and regex pattern sets.
 * You can't manage or view tags through the AWS WAF console.
 */
TagResourceResponse * Wafv2Client::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates tags from an AWS resource. Tags are key:value pairs that you can associate with AWS resources. For
 * example, the tag key might be "customer" and the tag value might be "companyA." You can specify one or more tags to add
 * to each container. You can add up to 50 tags to each AWS
 */
UntagResourceResponse * Wafv2Client::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * UpdateIPSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified <a>IPSet</a>.
 *
 * </p <note>
 *
 * This operation completely replaces any IP address specifications that you already have in the IP set with the ones that
 * you provide to this call. If you want to add to or modify the addresses that are already in the IP set, retrieve those
 * by calling <a>GetIPSet</a>, update them, and provide the complete updated array of IP addresses to this
 */
UpdateIPSetResponse * Wafv2Client::updateIPSet(const UpdateIPSetRequest &request)
{
    return qobject_cast<UpdateIPSetResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * UpdateRegexPatternSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified
 */
UpdateRegexPatternSetResponse * Wafv2Client::updateRegexPatternSet(const UpdateRegexPatternSetRequest &request)
{
    return qobject_cast<UpdateRegexPatternSetResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * UpdateRuleGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified
 *
 * <a>RuleGroup</a>>
 *
 * A rule group defines a collection of rules to inspect and control web requests that you can use in a <a>WebACL</a>. When
 * you create a rule group, you define an immutable capacity limit. If you update a rule group, you must stay within the
 * capacity. This allows others to reuse the rule group with confidence in its capacity requirements.
 */
UpdateRuleGroupResponse * Wafv2Client::updateRuleGroup(const UpdateRuleGroupRequest &request)
{
    return qobject_cast<UpdateRuleGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * UpdateWebACLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified
 *
 * <a>WebACL</a>>
 *
 * A Web ACL defines a collection of rules to use to inspect and control web requests. Each rule has an action defined
 * (allow, block, or count) for requests that match the statement of the rule. In the Web ACL, you assign a default action
 * to take (allow, block) for any request that does not match any of the rules. The rules in a Web ACL can be a combination
 * of the types <a>Rule</a>, <a>RuleGroup</a>, and managed rule group. You can associate a Web ACL with one or more AWS
 * resources to protect. The resources can be Amazon CloudFront, an Amazon API Gateway REST API, an Application Load
 * Balancer, or an AWS AppSync GraphQL API.
 */
UpdateWebACLResponse * Wafv2Client::updateWebACL(const UpdateWebACLRequest &request)
{
    return qobject_cast<UpdateWebACLResponse *>(send(request));
}

/*!
 * \class QtAws::WAFV2::Wafv2ClientPrivate
 * \brief The Wafv2ClientPrivate class provides private implementation for Wafv2Client.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWAFV2
 */

/*!
 * Constructs a Wafv2ClientPrivate object with public implementation \a q.
 */
Wafv2ClientPrivate::Wafv2ClientPrivate(Wafv2Client * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace WAFV2
} // namespace QtAws
