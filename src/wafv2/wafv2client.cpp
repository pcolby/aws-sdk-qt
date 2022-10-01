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
#include "generatemobilesdkreleaseurlrequest.h"
#include "generatemobilesdkreleaseurlresponse.h"
#include "getipsetrequest.h"
#include "getipsetresponse.h"
#include "getloggingconfigurationrequest.h"
#include "getloggingconfigurationresponse.h"
#include "getmanagedrulesetrequest.h"
#include "getmanagedrulesetresponse.h"
#include "getmobilesdkreleaserequest.h"
#include "getmobilesdkreleaseresponse.h"
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
#include "listavailablemanagedrulegroupversionsrequest.h"
#include "listavailablemanagedrulegroupversionsresponse.h"
#include "listavailablemanagedrulegroupsrequest.h"
#include "listavailablemanagedrulegroupsresponse.h"
#include "listipsetsrequest.h"
#include "listipsetsresponse.h"
#include "listloggingconfigurationsrequest.h"
#include "listloggingconfigurationsresponse.h"
#include "listmanagedrulesetsrequest.h"
#include "listmanagedrulesetsresponse.h"
#include "listmobilesdkreleasesrequest.h"
#include "listmobilesdkreleasesresponse.h"
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
#include "putmanagedrulesetversionsrequest.h"
#include "putmanagedrulesetversionsresponse.h"
#include "putpermissionpolicyrequest.h"
#include "putpermissionpolicyresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateipsetrequest.h"
#include "updateipsetresponse.h"
#include "updatemanagedrulesetversionexpirydaterequest.h"
#include "updatemanagedrulesetversionexpirydateresponse.h"
#include "updateregexpatternsetrequest.h"
#include "updateregexpatternsetresponse.h"
#include "updaterulegrouprequest.h"
#include "updaterulegroupresponse.h"
#include "updatewebaclrequest.h"
#include "updatewebaclresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Wafv2
 * \brief Contains classess for accessing AWS WAFV2.
 *
 * \inmodule QtAwsWafv2
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Wafv2 {

/*!
 * \class QtAws::Wafv2::Wafv2Client
 * \brief The Wafv2Client class provides access to the AWS WAFV2 service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWafv2
 *
 *  <fullname>WAF</fullname> <note>
 * 
 *  This is the latest version of the <b>WAF</b> API, released in November, 2019. The names of the entities that you use to
 *  access this API, like endpoints and namespaces, all have the versioning information added, like "V2" or "v2", to
 *  distinguish from the prior version. We recommend migrating your resources to this version, because it has a number of
 *  significant
 * 
 *  improvements>
 * 
 *  If you used WAF prior to this release, you can't use this WAFV2 API to access any WAF resources that you created before.
 *  You can access your old rules, web ACLs, and other WAF resources only through the WAF Classic APIs. The WAF Classic APIs
 *  have retained the prior names, endpoints, and namespaces.
 * 
 *  </p
 * 
 *  For information, including how to migrate your WAF resources to this version, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF Developer Guide</a>.
 * 
 *  </p </note>
 * 
 *  WAF is a web application firewall that lets you monitor the HTTP and HTTPS requests that are forwarded to Amazon
 *  CloudFront, an Amazon API Gateway REST API, an Application Load Balancer, an AppSync GraphQL API, or an Amazon Cognito
 *  user pool. WAF also lets you control access to your content. Based on conditions that you specify, such as the IP
 *  addresses that requests originate from or the values of query strings, the Amazon API Gateway REST API, CloudFront
 *  distribution, the Application Load Balancer, the AppSync GraphQL API, or the Amazon Cognito user pool responds to
 *  requests either with the requested content or with an HTTP 403 status code (Forbidden). You also can configure
 *  CloudFront to return a custom error page when a request is
 * 
 *  blocked>
 * 
 *  This API guide is for developers who need detailed information about WAF API actions, data types, and errors. For
 *  detailed information about WAF features and an overview of how to use WAF, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/what-is-aws-waf.html">WAF Developer
 * 
 *  Guide</a>>
 * 
 *  You can make calls using the endpoints listed in <a href="https://docs.aws.amazon.com/general/latest/gr/waf.html">WAF
 *  endpoints and quotas</a>.
 * 
 *  </p <ul> <li>
 * 
 *  For regional applications, you can use any of the endpoints in the list. A regional application can be an Application
 *  Load Balancer (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon Cognito user pool.
 * 
 *  </p </li> <li>
 * 
 *  For Amazon CloudFront applications, you must use the API endpoint listed for US East (N. Virginia):
 * 
 *  us-east-1> </li> </ul>
 * 
 *  Alternatively, you can use one of the Amazon Web Services SDKs to access an API that's tailored to the programming
 *  language or platform that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">Amazon Web
 *  Services
 * 
 *  SDKs</a>>
 * 
 *  We currently provide two versions of the WAF API: this API and the prior versions, the classic WAF APIs. This new API
 *  provides the same functionality as the older versions, with the following major
 * 
 *  improvements> <ul> <li>
 * 
 *  You use one API for both global and regional applications. Where you need to distinguish the scope, you specify a
 *  <code>Scope</code> parameter and set it to <code>CLOUDFRONT</code> or <code>REGIONAL</code>.
 * 
 *  </p </li> <li>
 * 
 *  You can define a web ACL or rule group with a single call, and update it with a single call. You define all rule
 *  specifications in JSON format, and pass them to your rule group or web ACL
 * 
 *  calls> </li> <li>
 * 
 *  The limits WAF places on the use of rules more closely reflects the cost of running each type of rule. Rule groups
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
 * Associates a web ACL with a regional application resource, to protect the resource. A regional application can be an
 * Application Load Balancer (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon Cognito user pool.
 *
 * </p
 *
 * For Amazon CloudFront, don't use this call. Instead, use your CloudFront distribution configuration. To associate a web
 * ACL, in the CloudFront call <code>UpdateDistribution</code>, set the web ACL ID to the Amazon Resource Name (ARN) of the
 * web ACL. For information, see <a
 *
 * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_UpdateDistribution.html">UpdateDistribution</a>>
 *
 * When you make changes to web ACLs or web ACL components, like rules and rule groups, WAF propagates the changes
 * everywhere that the web ACL and its components are stored and used. Your changes are applied within seconds, but there
 * might be a brief period of inconsistency when the changes have arrived in some places and not in others. So, for
 * example, if you change a rule action setting, the action might be the old action in one area and the new action in
 * another area. Or if you add an IP address to an IP set used in a blocking rule, the new address might briefly be blocked
 * in one area while still allowed in another. This temporary inconsistency can occur when you first associate a web ACL
 * with an Amazon Web Services resource and when you change a web ACL that is already associated with a resource.
 * Generally, any inconsistencies of this type last only a few
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
 * WAF uses WCUs to calculate and control the operating resources that are used to run your rules, rule groups, and web
 * ACLs. WAF calculates capacity differently for each rule type, to reflect the relative cost of each rule. Simple rules
 * that cost little to run use fewer WCUs than more complex rules that use more processing power. Rule group capacity is
 * fixed at creation, which helps users plan their web ACL WCU usage when they use a rule group. The WCU limit for web ACLs
 * is 1,500.
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
 * IP addresses. For example, if you're receiving a lot of requests from a ranges of IP addresses, you can configure WAF to
 * block them using an IPSet that lists those IP addresses.
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
 * Creates a <a>RegexPatternSet</a>, which you reference in a <a>RegexPatternSetReferenceStatement</a>, to have WAF inspect
 * a web request component for the specified
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
 * A web ACL defines a collection of rules to use to inspect and control web requests. Each rule has an action defined
 * (allow, block, or count) for requests that match the statement of the rule. In the web ACL, you assign a default action
 * to take (allow, block) for any request that does not match any of the rules. The rules in a web ACL can be a combination
 * of the types <a>Rule</a>, <a>RuleGroup</a>, and managed rule group. You can associate a web ACL with one or more Amazon
 * Web Services resources to protect. The resources can be an Amazon CloudFront distribution, an Amazon API Gateway REST
 * API, an Application Load Balancer, an AppSync GraphQL API, or an Amazon Cognito user pool.
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
 * Deletes all rule groups that are managed by Firewall Manager for the specified web ACL.
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
 * Deletes the specified <a>WebACL</a>.
 *
 * </p
 *
 * You can only use this if <code>ManagedByFirewallManager</code> is false in the specified <a>WebACL</a>.
 *
 * </p <note>
 *
 * Before deleting any web ACL, first disassociate it from all
 *
 * resources> <ul> <li>
 *
 * To retrieve a list of the resources that are associated with a web ACL, use the following
 *
 * calls> <ul> <li>
 *
 * For regional resources, call
 *
 * <a>ListResourcesForWebACL</a>> </li> <li>
 *
 * For Amazon CloudFront distributions, use the CloudFront call <code>ListDistributionsByWebACLId</code>. For information,
 * see <a
 *
 * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_ListDistributionsByWebACLId.html">ListDistributionsByWebACLId</a>>
 * </li> </ul> </li> <li>
 *
 * To disassociate a resource from a web ACL, use the following
 *
 * calls> <ul> <li>
 *
 * For regional resources, call
 *
 * <a>DisassociateWebACL</a>> </li> <li>
 *
 * For Amazon CloudFront distributions, provide an empty web ACL ID in the CloudFront call <code>UpdateDistribution</code>.
 * For information, see <a
 *
 * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_UpdateDistribution.html">UpdateDistribution</a>>
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
 * Disassociates the specified regional application resource from any existing web ACL association. A resource can have at
 * most one web ACL association. A regional application can be an Application Load Balancer (ALB), an Amazon API Gateway
 * REST API, an AppSync GraphQL API, or an Amazon Cognito user pool.
 *
 * </p
 *
 * For Amazon CloudFront, don't use this call. Instead, use your CloudFront distribution configuration. To disassociate a
 * web ACL, provide an empty web ACL ID in the CloudFront call <code>UpdateDistribution</code>. For information, see <a
 */
DisassociateWebACLResponse * Wafv2Client::disassociateWebACL(const DisassociateWebACLRequest &request)
{
    return qobject_cast<DisassociateWebACLResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * GenerateMobileSdkReleaseUrlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a presigned download URL for the specified release of the mobile
 *
 * SDK>
 *
 * The mobile SDK is not generally available. Customers who have access to the mobile SDK can use it to establish and
 * manage Security Token Service (STS) security tokens for use in HTTP(S) requests from a mobile device to WAF. For more
 * information, see <a href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-application-integration.html">WAF
 * client application integration</a> in the <i>WAF Developer
 */
GenerateMobileSdkReleaseUrlResponse * Wafv2Client::generateMobileSdkReleaseUrl(const GenerateMobileSdkReleaseUrlRequest &request)
{
    return qobject_cast<GenerateMobileSdkReleaseUrlResponse *>(send(request));
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
 * GetManagedRuleSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the specified managed rule set.
 *
 * </p <note>
 *
 * This is intended for use only by vendors of managed rule sets. Vendors are Amazon Web Services and Amazon Web Services
 * Marketplace sellers.
 *
 * </p
 *
 * Vendors, you can use the managed rule set APIs to provide controlled rollout of your versioned managed rule group
 * offerings for your customers. The APIs are <code>ListManagedRuleSets</code>, <code>GetManagedRuleSet</code>,
 * <code>PutManagedRuleSetVersions</code>, and
 */
GetManagedRuleSetResponse * Wafv2Client::getManagedRuleSet(const GetManagedRuleSetRequest &request)
{
    return qobject_cast<GetManagedRuleSetResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * GetMobileSdkReleaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information for the specified mobile SDK release, including release notes and
 *
 * tags>
 *
 * The mobile SDK is not generally available. Customers who have access to the mobile SDK can use it to establish and
 * manage Security Token Service (STS) security tokens for use in HTTP(S) requests from a mobile device to WAF. For more
 * information, see <a href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-application-integration.html">WAF
 * client application integration</a> in the <i>WAF Developer
 */
GetMobileSdkReleaseResponse * Wafv2Client::getMobileSdkRelease(const GetMobileSdkReleaseRequest &request)
{
    return qobject_cast<GetMobileSdkReleaseResponse *>(send(request));
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
 * Retrieves the keys that are currently blocked by a rate-based rule instance. The maximum number of managed keys that can
 * be blocked for a single rate-based rule instance is 10,000. If more than 10,000 addresses exceed the rate limit, those
 * with the highest rates are
 *
 * blocked>
 *
 * For a rate-based rule that you've defined inside a rule group, provide the name of the rule group reference statement in
 * your request, in addition to the rate-based rule name and the web ACL name.
 *
 * </p
 *
 * WAF monitors web requests and manages keys independently for each unique combination of web ACL, optional rule group,
 * and rate-based rule. For example, if you define a rate-based rule inside a rule group, and then use the rule group in a
 * web ACL, WAF monitors web requests and manages keys for that web ACL, rule group reference statement, and rate-based
 * rule instance. If you use the same rule group in a second web ACL, WAF monitors web requests and manages keys for this
 * second usage completely independent of your first.
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
 * Gets detailed information about a specified number of requests--a sample--that WAF randomly selects from among the first
 * 5,000 requests that your Amazon Web Services resource received during a time range that you choose. You can specify a
 * sample size of up to 500 requests, and you can specify any time range in the previous three
 *
 * hours>
 *
 * <code>GetSampledRequests</code> returns a time range, which is usually the time range that you specified. However, if
 * your resource (such as a CloudFront distribution) received 5,000 requests before the specified time range elapsed,
 * <code>GetSampledRequests</code> returns an updated time range. This new time range indicates the actual period during
 * which WAF selected the requests in the
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
 * ListAvailableManagedRuleGroupVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the available versions for the specified managed rule group.
 */
ListAvailableManagedRuleGroupVersionsResponse * Wafv2Client::listAvailableManagedRuleGroupVersions(const ListAvailableManagedRuleGroupVersionsRequest &request)
{
    return qobject_cast<ListAvailableManagedRuleGroupVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * ListAvailableManagedRuleGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves an array of managed rule groups that are available for you to use. This list includes all Amazon Web Services
 * Managed Rules rule groups and all of the Amazon Web Services Marketplace managed rule groups that you're subscribed
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
 * ListManagedRuleSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the managed rule sets that you own.
 *
 * </p <note>
 *
 * This is intended for use only by vendors of managed rule sets. Vendors are Amazon Web Services and Amazon Web Services
 * Marketplace sellers.
 *
 * </p
 *
 * Vendors, you can use the managed rule set APIs to provide controlled rollout of your versioned managed rule group
 * offerings for your customers. The APIs are <code>ListManagedRuleSets</code>, <code>GetManagedRuleSet</code>,
 * <code>PutManagedRuleSetVersions</code>, and
 */
ListManagedRuleSetsResponse * Wafv2Client::listManagedRuleSets(const ListManagedRuleSetsRequest &request)
{
    return qobject_cast<ListManagedRuleSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * ListMobileSdkReleasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of the available releases for the mobile SDK and the specified device platform.
 *
 * </p
 *
 * The mobile SDK is not generally available. Customers who have access to the mobile SDK can use it to establish and
 * manage Security Token Service (STS) security tokens for use in HTTP(S) requests from a mobile device to WAF. For more
 * information, see <a href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-application-integration.html">WAF
 * client application integration</a> in the <i>WAF Developer
 */
ListMobileSdkReleasesResponse * Wafv2Client::listMobileSdkReleases(const ListMobileSdkReleasesRequest &request)
{
    return qobject_cast<ListMobileSdkReleasesResponse *>(send(request));
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
 * web ACL. If you want the list of Amazon CloudFront resources, use the CloudFront call
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
 * and the value to the customer name or ID. You can specify one or more tags to add to each Amazon Web Services resource,
 * up to 50 tags for a
 *
 * resource>
 *
 * You can tag the Amazon Web Services resources that you manage through WAF: web ACLs, rule groups, IP sets, and regex
 * pattern sets. You can't manage or view tags through the WAF console.
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
 * provided.
 *
 * </p <note>
 *
 * You can define one logging destination per web
 *
 * ACL> </note>
 *
 * You can access information about the traffic that WAF inspects using the following
 *
 * steps> <ol> <li>
 *
 * Create your logging destination. You can use an Amazon CloudWatch Logs log group, an Amazon Simple Storage Service
 * (Amazon S3) bucket, or an Amazon Kinesis Data Firehose. For information about configuring logging destinations and the
 * permissions that are required for each, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging web ACL traffic information</a> in the
 * <i>WAF Developer
 *
 * Guide</i>> </li> <li>
 *
 * Associate your logging destination to your web ACL using a <code>PutLoggingConfiguration</code>
 *
 * request> </li> </ol>
 *
 * When you successfully enable logging using a <code>PutLoggingConfiguration</code> request, WAF creates an additional
 * role or policy that is required to write logs to the logging destination. For an Amazon CloudWatch Logs log group, WAF
 * creates a resource policy on the log group. For an Amazon S3 bucket, WAF creates a bucket policy. For an Amazon Kinesis
 * Data Firehose, WAF creates a service-linked
 *
 * role>
 *
 * For additional information about web ACL logging, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging web ACL traffic information</a> in the
 * <i>WAF Developer
 *
 * Guide</i>> <note>
 *
 * This operation completely replaces the mutable specifications that you already have for the logging configuration with
 * the ones that you provide to this call. To modify the logging configuration, retrieve it by calling
 * <a>GetLoggingConfiguration</a>, update the settings as needed, and then provide the complete logging configuration
 * specification to this
 */
PutLoggingConfigurationResponse * Wafv2Client::putLoggingConfiguration(const PutLoggingConfigurationRequest &request)
{
    return qobject_cast<PutLoggingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * PutManagedRuleSetVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Defines the versions of your managed rule set that you are offering to the customers. Customers see your offerings as
 * managed rule groups with
 *
 * versioning> <note>
 *
 * This is intended for use only by vendors of managed rule sets. Vendors are Amazon Web Services and Amazon Web Services
 * Marketplace sellers.
 *
 * </p
 *
 * Vendors, you can use the managed rule set APIs to provide controlled rollout of your versioned managed rule group
 * offerings for your customers. The APIs are <code>ListManagedRuleSets</code>, <code>GetManagedRuleSet</code>,
 * <code>PutManagedRuleSetVersions</code>, and
 *
 * <code>UpdateManagedRuleSetVersionExpiryDate</code>> </note>
 *
 * Customers retrieve their managed rule group list by calling <a>ListAvailableManagedRuleGroups</a>. The name that you
 * provide here for your managed rule set is the name the customer sees for the corresponding managed rule group. Customers
 * can retrieve the available versions for a managed rule group by calling <a>ListAvailableManagedRuleGroupVersions</a>.
 * You provide a rule group specification for each version. For each managed rule set, you must specify a version that you
 * recommend using.
 *
 * </p
 *
 * To initiate the expiration of a managed rule group version, use
 */
PutManagedRuleSetVersionsResponse * Wafv2Client::putManagedRuleSetVersions(const PutManagedRuleSetVersionsRequest &request)
{
    return qobject_cast<PutManagedRuleSetVersionsResponse *>(send(request));
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
 * Region> </li> <li>
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
 * Associates tags with the specified Amazon Web Services resource. Tags are key:value pairs that you can use to categorize
 * and manage your resources, for purposes like billing. For example, you might set the tag key to "customer" and the value
 * to the customer name or ID. You can specify one or more tags to add to each Amazon Web Services resource, up to 50 tags
 * for a
 *
 * resource>
 *
 * You can tag the Amazon Web Services resources that you manage through WAF: web ACLs, rule groups, IP sets, and regex
 * pattern sets. You can't manage or view tags through the WAF console.
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
 * Disassociates tags from an Amazon Web Services resource. Tags are key:value pairs that you can associate with Amazon Web
 * Services resources. For example, the tag key might be "customer" and the tag value might be "companyA." You can specify
 * one or more tags to add to each container. You can add up to 50 tags to each Amazon Web Services
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
 * This operation completely replaces the mutable specifications that you already have for the IP set with the ones that
 * you provide to this call. To modify the IP set, retrieve it by calling <a>GetIPSet</a>, update the settings as needed,
 * and then provide the complete IP set specification to this
 *
 * call> </note>
 *
 * When you make changes to web ACLs or web ACL components, like rules and rule groups, WAF propagates the changes
 * everywhere that the web ACL and its components are stored and used. Your changes are applied within seconds, but there
 * might be a brief period of inconsistency when the changes have arrived in some places and not in others. So, for
 * example, if you change a rule action setting, the action might be the old action in one area and the new action in
 * another area. Or if you add an IP address to an IP set used in a blocking rule, the new address might briefly be blocked
 * in one area while still allowed in another. This temporary inconsistency can occur when you first associate a web ACL
 * with an Amazon Web Services resource and when you change a web ACL that is already associated with a resource.
 * Generally, any inconsistencies of this type last only a few
 */
UpdateIPSetResponse * Wafv2Client::updateIPSet(const UpdateIPSetRequest &request)
{
    return qobject_cast<UpdateIPSetResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * UpdateManagedRuleSetVersionExpiryDateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the expiration information for your managed rule set. Use this to initiate the expiration of a managed rule
 * group version. After you initiate expiration for a version, WAF excludes it from the response to
 * <a>ListAvailableManagedRuleGroupVersions</a> for the managed rule group.
 *
 * </p <note>
 *
 * This is intended for use only by vendors of managed rule sets. Vendors are Amazon Web Services and Amazon Web Services
 * Marketplace sellers.
 *
 * </p
 *
 * Vendors, you can use the managed rule set APIs to provide controlled rollout of your versioned managed rule group
 * offerings for your customers. The APIs are <code>ListManagedRuleSets</code>, <code>GetManagedRuleSet</code>,
 * <code>PutManagedRuleSetVersions</code>, and
 */
UpdateManagedRuleSetVersionExpiryDateResponse * Wafv2Client::updateManagedRuleSetVersionExpiryDate(const UpdateManagedRuleSetVersionExpiryDateRequest &request)
{
    return qobject_cast<UpdateManagedRuleSetVersionExpiryDateResponse *>(send(request));
}

/*!
 * Sends \a request to the Wafv2Client service, and returns a pointer to an
 * UpdateRegexPatternSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified
 *
 * <a>RegexPatternSet</a>> <note>
 *
 * This operation completely replaces the mutable specifications that you already have for the regex pattern set with the
 * ones that you provide to this call. To modify the regex pattern set, retrieve it by calling <a>GetRegexPatternSet</a>,
 * update the settings as needed, and then provide the complete regex pattern set specification to this
 *
 * call> </note>
 *
 * When you make changes to web ACLs or web ACL components, like rules and rule groups, WAF propagates the changes
 * everywhere that the web ACL and its components are stored and used. Your changes are applied within seconds, but there
 * might be a brief period of inconsistency when the changes have arrived in some places and not in others. So, for
 * example, if you change a rule action setting, the action might be the old action in one area and the new action in
 * another area. Or if you add an IP address to an IP set used in a blocking rule, the new address might briefly be blocked
 * in one area while still allowed in another. This temporary inconsistency can occur when you first associate a web ACL
 * with an Amazon Web Services resource and when you change a web ACL that is already associated with a resource.
 * Generally, any inconsistencies of this type last only a few
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
 * <a>RuleGroup</a>> <note>
 *
 * This operation completely replaces the mutable specifications that you already have for the rule group with the ones
 * that you provide to this call. To modify the rule group, retrieve it by calling <a>GetRuleGroup</a>, update the settings
 * as needed, and then provide the complete rule group specification to this
 *
 * call> </note>
 *
 * When you make changes to web ACLs or web ACL components, like rules and rule groups, WAF propagates the changes
 * everywhere that the web ACL and its components are stored and used. Your changes are applied within seconds, but there
 * might be a brief period of inconsistency when the changes have arrived in some places and not in others. So, for
 * example, if you change a rule action setting, the action might be the old action in one area and the new action in
 * another area. Or if you add an IP address to an IP set used in a blocking rule, the new address might briefly be blocked
 * in one area while still allowed in another. This temporary inconsistency can occur when you first associate a web ACL
 * with an Amazon Web Services resource and when you change a web ACL that is already associated with a resource.
 * Generally, any inconsistencies of this type last only a few
 *
 * seconds>
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
 * Updates the specified <a>WebACL</a>. While updating a web ACL, WAF provides continuous coverage to the resources that
 * you have associated with the web ACL.
 *
 * </p
 *
 * When you make changes to web ACLs or web ACL components, like rules and rule groups, WAF propagates the changes
 * everywhere that the web ACL and its components are stored and used. Your changes are applied within seconds, but there
 * might be a brief period of inconsistency when the changes have arrived in some places and not in others. So, for
 * example, if you change a rule action setting, the action might be the old action in one area and the new action in
 * another area. Or if you add an IP address to an IP set used in a blocking rule, the new address might briefly be blocked
 * in one area while still allowed in another. This temporary inconsistency can occur when you first associate a web ACL
 * with an Amazon Web Services resource and when you change a web ACL that is already associated with a resource.
 * Generally, any inconsistencies of this type last only a few
 *
 * seconds> <note>
 *
 * This operation completely replaces the mutable specifications that you already have for the web ACL with the ones that
 * you provide to this call. To modify the web ACL, retrieve it by calling <a>GetWebACL</a>, update the settings as needed,
 * and then provide the complete web ACL specification to this
 *
 * call> </note>
 *
 * A web ACL defines a collection of rules to use to inspect and control web requests. Each rule has an action defined
 * (allow, block, or count) for requests that match the statement of the rule. In the web ACL, you assign a default action
 * to take (allow, block) for any request that does not match any of the rules. The rules in a web ACL can be a combination
 * of the types <a>Rule</a>, <a>RuleGroup</a>, and managed rule group. You can associate a web ACL with one or more Amazon
 * Web Services resources to protect. The resources can be an Amazon CloudFront distribution, an Amazon API Gateway REST
 * API, an Application Load Balancer, an AppSync GraphQL API, or an Amazon Cognito user pool.
 */
UpdateWebACLResponse * Wafv2Client::updateWebACL(const UpdateWebACLRequest &request)
{
    return qobject_cast<UpdateWebACLResponse *>(send(request));
}

/*!
 * \class QtAws::Wafv2::Wafv2ClientPrivate
 * \brief The Wafv2ClientPrivate class provides private implementation for Wafv2Client.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWafv2
 */

/*!
 * Constructs a Wafv2ClientPrivate object with public implementation \a q.
 */
Wafv2ClientPrivate::Wafv2ClientPrivate(Wafv2Client * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Wafv2
} // namespace QtAws
