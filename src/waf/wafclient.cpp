/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "wafclient.h"
#include "wafclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace WAF {

/**
 * @class  WafClient
 *
 * @brief  Client for AWS WAF
 *
 * This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 * listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 * types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 * AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 * use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */

/**
 * @brief  Constructs a new WafClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
WafClient::WafClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new WafClientPrivate(this), parent)
{
    Q_D(WafClient);
    d->apiVersion = QStringLiteral("2015-08-24");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("waf");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS WAF");
    d->serviceName = QStringLiteral("waf");
}

/**
 * @brief  Constructs a new WafClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
WafClient::WafClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new WafClientPrivate(this), parent)
{
    Q_D(WafClient);
    d->apiVersion = QStringLiteral("2015-08-24");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("waf");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS WAF");
    d->serviceName = QStringLiteral("waf");
}

/**
 * Creates a <code>ByteMatchSet</code>. You then use <a>UpdateByteMatchSet</a> to identify the part of a web request that
 * you want AWS WAF to inspect, such as the values of the <code>User-Agent</code> header or the query string. For example,
 * you can create a <code>ByteMatchSet</code> that matches any requests with <code>User-Agent</code> headers that contain
 * the string <code>BadBot</code>. You can then configure AWS WAF to reject those
 *
 * requests>
 *
 * To create and configure a <code>ByteMatchSet</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of a
 * <code>CreateByteMatchSet</code>
 *
 * request> </li> <li>
 *
 * Submit a <code>CreateByteMatchSet</code>
 *
 * request> </li> <li>
 *
 * Use <code>GetChangeToken</code> to get the change token that you provide in the <code>ChangeToken</code> parameter of an
 * <code>UpdateByteMatchSet</code>
 *
 * request> </li> <li>
 *
 * Submit an <a>UpdateByteMatchSet</a> request to specify the part of the request that you want AWS WAF to inspect (for
 * example, the header or the URI) and the value that you want AWS WAF to watch
 *
 * for> </li> </ol>
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateByteMatchSetResponse * WafClient::createByteMatchSet(const CreateByteMatchSetRequest &request)
{
    return qobject_cast<CreateByteMatchSetResponse *>(send(request));
}

/**
 * Creates an <a>GeoMatchSet</a>, which you use to specify which web requests you want to allow or block based on the
 * country that the requests originate from. For example, if you're receiving a lot of requests from one or more countries
 * and you want to block the requests, you can create an <code>GeoMatchSet</code> that contains those countries and then
 * configure AWS WAF to block the requests.
 *
 * </p
 *
 * To create and configure a <code>GeoMatchSet</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of a
 * <code>CreateGeoMatchSet</code>
 *
 * request> </li> <li>
 *
 * Submit a <code>CreateGeoMatchSet</code>
 *
 * request> </li> <li>
 *
 * Use <code>GetChangeToken</code> to get the change token that you provide in the <code>ChangeToken</code> parameter of an
 * <a>UpdateGeoMatchSet</a>
 *
 * request> </li> <li>
 *
 * Submit an <code>UpdateGeoMatchSetSet</code> request to specify the countries that you want AWS WAF to watch
 *
 * for> </li> </ol>
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateGeoMatchSetResponse * WafClient::createGeoMatchSet(const CreateGeoMatchSetRequest &request)
{
    return qobject_cast<CreateGeoMatchSetResponse *>(send(request));
}

/**
 * Creates an <a>IPSet</a>, which you use to specify which web requests you want to allow or block based on the IP
 * addresses that the requests originate from. For example, if you're receiving a lot of requests from one or more
 * individual IP addresses or one or more ranges of IP addresses and you want to block the requests, you can create an
 * <code>IPSet</code> that contains those IP addresses and then configure AWS WAF to block the requests.
 *
 * </p
 *
 * To create and configure an <code>IPSet</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of a
 * <code>CreateIPSet</code>
 *
 * request> </li> <li>
 *
 * Submit a <code>CreateIPSet</code>
 *
 * request> </li> <li>
 *
 * Use <code>GetChangeToken</code> to get the change token that you provide in the <code>ChangeToken</code> parameter of an
 * <a>UpdateIPSet</a>
 *
 * request> </li> <li>
 *
 * Submit an <code>UpdateIPSet</code> request to specify the IP addresses that you want AWS WAF to watch
 *
 * for> </li> </ol>
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateIPSetResponse * WafClient::createIPSet(const CreateIPSetRequest &request)
{
    return qobject_cast<CreateIPSetResponse *>(send(request));
}

/**
 * Creates a <a>RateBasedRule</a>. The <code>RateBasedRule</code> contains a <code>RateLimit</code>, which specifies the
 * maximum number of requests that AWS WAF allows from a specified IP address in a five-minute period. The
 * <code>RateBasedRule</code> also contains the <code>IPSet</code> objects, <code>ByteMatchSet</code> objects, and other
 * predicates that identify the requests that you want to count or block if these requests exceed the
 *
 * <code>RateLimit</code>>
 *
 * If you add more than one predicate to a <code>RateBasedRule</code>, a request not only must exceed the
 * <code>RateLimit</code>, but it also must match all the specifications to be counted or blocked. For example, suppose you
 * add the following to a
 *
 * <code>RateBasedRule</code>> <ul> <li>
 *
 * An <code>IPSet</code> that matches the IP address <code>192.0.2.44/32</code>
 *
 * </p </li> <li>
 *
 * A <code>ByteMatchSet</code> that matches <code>BadBot</code> in the <code>User-Agent</code>
 *
 * heade> </li> </ul>
 *
 * Further, you specify a <code>RateLimit</code> of
 *
 * 15,000>
 *
 * You then add the <code>RateBasedRule</code> to a <code>WebACL</code> and specify that you want to block requests that
 * meet the conditions in the rule. For a request to be blocked, it must come from the IP address 192.0.2.44 <i>and</i> the
 * <code>User-Agent</code> header in the request must contain the value <code>BadBot</code>. Further, requests that match
 * these two conditions must be received at a rate of more than 15,000 requests every five minutes. If both conditions are
 * met and the rate is exceeded, AWS WAF blocks the requests. If the rate drops below 15,000 for a five-minute period, AWS
 * WAF no longer blocks the
 *
 * requests>
 *
 * As a second example, suppose you want to limit requests to a particular page on your site. To do this, you could add the
 * following to a
 *
 * <code>RateBasedRule</code>> <ul> <li>
 *
 * A <code>ByteMatchSet</code> with <code>FieldToMatch</code> of <code>URI</code>
 *
 * </p </li> <li>
 *
 * A <code>PositionalConstraint</code> of <code>STARTS_WITH</code>
 *
 * </p </li> <li>
 *
 * A <code>TargetString</code> of <code>login</code>
 *
 * </p </li> </ul>
 *
 * Further, you specify a <code>RateLimit</code> of
 *
 * 15,000>
 *
 * By adding this <code>RateBasedRule</code> to a <code>WebACL</code>, you could limit requests to your login page without
 * affecting the rest of your
 *
 * site>
 *
 * To create and configure a <code>RateBasedRule</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Create and update the predicates that you want to include in the rule. For more information, see
 * <a>CreateByteMatchSet</a>, <a>CreateIPSet</a>, and
 *
 * <a>CreateSqlInjectionMatchSet</a>> </li> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of a
 * <code>CreateRule</code>
 *
 * request> </li> <li>
 *
 * Submit a <code>CreateRateBasedRule</code>
 *
 * request> </li> <li>
 *
 * Use <code>GetChangeToken</code> to get the change token that you provide in the <code>ChangeToken</code> parameter of an
 * <a>UpdateRule</a>
 *
 * request> </li> <li>
 *
 * Submit an <code>UpdateRateBasedRule</code> request to specify the predicates that you want to include in the
 *
 * rule> </li> <li>
 *
 * Create and update a <code>WebACL</code> that contains the <code>RateBasedRule</code>. For more information, see
 *
 * <a>CreateWebACL</a>> </li> </ol>
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateRateBasedRuleResponse * WafClient::createRateBasedRule(const CreateRateBasedRuleRequest &request)
{
    return qobject_cast<CreateRateBasedRuleResponse *>(send(request));
}

/**
 * Creates a <a>RegexMatchSet</a>. You then use <a>UpdateRegexMatchSet</a> to identify the part of a web request that you
 * want AWS WAF to inspect, such as the values of the <code>User-Agent</code> header or the query string. For example, you
 * can create a <code>RegexMatchSet</code> that contains a <code>RegexMatchTuple</code> that looks for any requests with
 * <code>User-Agent</code> headers that match a <code>RegexPatternSet</code> with pattern <code>B[a@]dB[o0]t</code>. You
 * can then configure AWS WAF to reject those
 *
 * requests>
 *
 * To create and configure a <code>RegexMatchSet</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of a
 * <code>CreateRegexMatchSet</code>
 *
 * request> </li> <li>
 *
 * Submit a <code>CreateRegexMatchSet</code>
 *
 * request> </li> <li>
 *
 * Use <code>GetChangeToken</code> to get the change token that you provide in the <code>ChangeToken</code> parameter of an
 * <code>UpdateRegexMatchSet</code>
 *
 * request> </li> <li>
 *
 * Submit an <a>UpdateRegexMatchSet</a> request to specify the part of the request that you want AWS WAF to inspect (for
 * example, the header or the URI) and the value, using a <code>RegexPatternSet</code>, that you want AWS WAF to watch
 *
 * for> </li> </ol>
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateRegexMatchSetResponse * WafClient::createRegexMatchSet(const CreateRegexMatchSetRequest &request)
{
    return qobject_cast<CreateRegexMatchSetResponse *>(send(request));
}

/**
 * Creates a <code>RegexPatternSet</code>. You then use <a>UpdateRegexPatternSet</a> to specify the regular expression
 * (regex) pattern that you want AWS WAF to search for, such as <code>B[a@]dB[o0]t</code>. You can then configure AWS WAF
 * to reject those
 *
 * requests>
 *
 * To create and configure a <code>RegexPatternSet</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of a
 * <code>CreateRegexPatternSet</code>
 *
 * request> </li> <li>
 *
 * Submit a <code>CreateRegexPatternSet</code>
 *
 * request> </li> <li>
 *
 * Use <code>GetChangeToken</code> to get the change token that you provide in the <code>ChangeToken</code> parameter of an
 * <code>UpdateRegexPatternSet</code>
 *
 * request> </li> <li>
 *
 * Submit an <a>UpdateRegexPatternSet</a> request to specify the string that you want AWS WAF to watch
 *
 * for> </li> </ol>
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateRegexPatternSetResponse * WafClient::createRegexPatternSet(const CreateRegexPatternSetRequest &request)
{
    return qobject_cast<CreateRegexPatternSetResponse *>(send(request));
}

/**
 * Creates a <code>Rule</code>, which contains the <code>IPSet</code> objects, <code>ByteMatchSet</code> objects, and other
 * predicates that identify the requests that you want to block. If you add more than one predicate to a <code>Rule</code>,
 * a request must match all of the specifications to be allowed or blocked. For example, suppose you add the following to a
 *
 * <code>Rule</code>> <ul> <li>
 *
 * An <code>IPSet</code> that matches the IP address <code>192.0.2.44/32</code>
 *
 * </p </li> <li>
 *
 * A <code>ByteMatchSet</code> that matches <code>BadBot</code> in the <code>User-Agent</code>
 *
 * heade> </li> </ul>
 *
 * You then add the <code>Rule</code> to a <code>WebACL</code> and specify that you want to blocks requests that satisfy
 * the <code>Rule</code>. For a request to be blocked, it must come from the IP address 192.0.2.44 <i>and</i> the
 * <code>User-Agent</code> header in the request must contain the value
 *
 * <code>BadBot</code>>
 *
 * To create and configure a <code>Rule</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Create and update the predicates that you want to include in the <code>Rule</code>. For more information, see
 * <a>CreateByteMatchSet</a>, <a>CreateIPSet</a>, and
 *
 * <a>CreateSqlInjectionMatchSet</a>> </li> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of a
 * <code>CreateRule</code>
 *
 * request> </li> <li>
 *
 * Submit a <code>CreateRule</code>
 *
 * request> </li> <li>
 *
 * Use <code>GetChangeToken</code> to get the change token that you provide in the <code>ChangeToken</code> parameter of an
 * <a>UpdateRule</a>
 *
 * request> </li> <li>
 *
 * Submit an <code>UpdateRule</code> request to specify the predicates that you want to include in the
 *
 * <code>Rule</code>> </li> <li>
 *
 * Create and update a <code>WebACL</code> that contains the <code>Rule</code>. For more information, see
 *
 * <a>CreateWebACL</a>> </li> </ol>
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateRuleResponse * WafClient::createRule(const CreateRuleRequest &request)
{
    return qobject_cast<CreateRuleResponse *>(send(request));
}

/**
 * Creates a <code>RuleGroup</code>. A rule group is a collection of predefined rules that you add to a web ACL. You use
 * <a>UpdateRuleGroup</a> to add rules to the rule
 *
 * group>
 *
 * Rule groups are subject to the following
 *
 * limits> <ul> <li>
 *
 * Three rule groups per account. You can request an increase to this limit by contacting customer
 *
 * support> </li> <li>
 *
 * One rule group per web
 *
 * ACL> </li> <li>
 *
 * Ten rules per rule
 *
 * group> </li> </ul>
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateRuleGroupResponse * WafClient::createRuleGroup(const CreateRuleGroupRequest &request)
{
    return qobject_cast<CreateRuleGroupResponse *>(send(request));
}

/**
 * Creates a <code>SizeConstraintSet</code>. You then use <a>UpdateSizeConstraintSet</a> to identify the part of a web
 * request that you want AWS WAF to check for length, such as the length of the <code>User-Agent</code> header or the
 * length of the query string. For example, you can create a <code>SizeConstraintSet</code> that matches any requests that
 * have a query string that is longer than 100 bytes. You can then configure AWS WAF to reject those
 *
 * requests>
 *
 * To create and configure a <code>SizeConstraintSet</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of a
 * <code>CreateSizeConstraintSet</code>
 *
 * request> </li> <li>
 *
 * Submit a <code>CreateSizeConstraintSet</code>
 *
 * request> </li> <li>
 *
 * Use <code>GetChangeToken</code> to get the change token that you provide in the <code>ChangeToken</code> parameter of an
 * <code>UpdateSizeConstraintSet</code>
 *
 * request> </li> <li>
 *
 * Submit an <a>UpdateSizeConstraintSet</a> request to specify the part of the request that you want AWS WAF to inspect
 * (for example, the header or the URI) and the value that you want AWS WAF to watch
 *
 * for> </li> </ol>
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateSizeConstraintSetResponse * WafClient::createSizeConstraintSet(const CreateSizeConstraintSetRequest &request)
{
    return qobject_cast<CreateSizeConstraintSetResponse *>(send(request));
}

/**
 * Creates a <a>SqlInjectionMatchSet</a>, which you use to allow, block, or count requests that contain snippets of SQL
 * code in a specified part of web requests. AWS WAF searches for character sequences that are likely to be malicious
 *
 * strings>
 *
 * To create and configure a <code>SqlInjectionMatchSet</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of a
 * <code>CreateSqlInjectionMatchSet</code>
 *
 * request> </li> <li>
 *
 * Submit a <code>CreateSqlInjectionMatchSet</code>
 *
 * request> </li> <li>
 *
 * Use <code>GetChangeToken</code> to get the change token that you provide in the <code>ChangeToken</code> parameter of an
 * <a>UpdateSqlInjectionMatchSet</a>
 *
 * request> </li> <li>
 *
 * Submit an <a>UpdateSqlInjectionMatchSet</a> request to specify the parts of web requests in which you want to allow,
 * block, or count malicious SQL
 *
 * code> </li> </ol>
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateSqlInjectionMatchSetResponse * WafClient::createSqlInjectionMatchSet(const CreateSqlInjectionMatchSetRequest &request)
{
    return qobject_cast<CreateSqlInjectionMatchSetResponse *>(send(request));
}

/**
 * Creates a <code>WebACL</code>, which contains the <code>Rules</code> that identify the CloudFront web requests that you
 * want to allow, block, or count. AWS WAF evaluates <code>Rules</code> in order based on the value of
 * <code>Priority</code> for each
 *
 * <code>Rule</code>>
 *
 * You also specify a default action, either <code>ALLOW</code> or <code>BLOCK</code>. If a web request doesn't match any
 * of the <code>Rules</code> in a <code>WebACL</code>, AWS WAF responds to the request with the default action.
 *
 * </p
 *
 * To create and configure a <code>WebACL</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Create and update the <code>ByteMatchSet</code> objects and other predicates that you want to include in
 * <code>Rules</code>. For more information, see <a>CreateByteMatchSet</a>, <a>UpdateByteMatchSet</a>, <a>CreateIPSet</a>,
 * <a>UpdateIPSet</a>, <a>CreateSqlInjectionMatchSet</a>, and
 *
 * <a>UpdateSqlInjectionMatchSet</a>> </li> <li>
 *
 * Create and update the <code>Rules</code> that you want to include in the <code>WebACL</code>. For more information, see
 * <a>CreateRule</a> and
 *
 * <a>UpdateRule</a>> </li> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of a
 * <code>CreateWebACL</code>
 *
 * request> </li> <li>
 *
 * Submit a <code>CreateWebACL</code>
 *
 * request> </li> <li>
 *
 * Use <code>GetChangeToken</code> to get the change token that you provide in the <code>ChangeToken</code> parameter of an
 * <a>UpdateWebACL</a>
 *
 * request> </li> <li>
 *
 * Submit an <a>UpdateWebACL</a> request to specify the <code>Rules</code> that you want to include in the
 * <code>WebACL</code>, to specify the default action, and to associate the <code>WebACL</code> with a CloudFront
 *
 * distribution> </li> </ol>
 *
 * For more information about how to use the AWS WAF API, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateWebACLResponse * WafClient::createWebACL(const CreateWebACLRequest &request)
{
    return qobject_cast<CreateWebACLResponse *>(send(request));
}

/**
 * Creates an <a>XssMatchSet</a>, which you use to allow, block, or count requests that contain cross-site scripting
 * attacks in the specified part of web requests. AWS WAF searches for character sequences that are likely to be malicious
 *
 * strings>
 *
 * To create and configure an <code>XssMatchSet</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of a
 * <code>CreateXssMatchSet</code>
 *
 * request> </li> <li>
 *
 * Submit a <code>CreateXssMatchSet</code>
 *
 * request> </li> <li>
 *
 * Use <code>GetChangeToken</code> to get the change token that you provide in the <code>ChangeToken</code> parameter of an
 * <a>UpdateXssMatchSet</a>
 *
 * request> </li> <li>
 *
 * Submit an <a>UpdateXssMatchSet</a> request to specify the parts of web requests in which you want to allow, block, or
 * count cross-site scripting
 *
 * attacks> </li> </ol>
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateXssMatchSetResponse * WafClient::createXssMatchSet(const CreateXssMatchSetRequest &request)
{
    return qobject_cast<CreateXssMatchSetResponse *>(send(request));
}

/**
 * Permanently deletes a <a>ByteMatchSet</a>. You can't delete a <code>ByteMatchSet</code> if it's still used in any
 * <code>Rules</code> or if it still includes any <a>ByteMatchTuple</a> objects (any
 *
 * filters)>
 *
 * If you just want to remove a <code>ByteMatchSet</code> from a <code>Rule</code>, use
 *
 * <a>UpdateRule</a>>
 *
 * To permanently delete a <code>ByteMatchSet</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Update the <code>ByteMatchSet</code> to remove filters, if any. For more information, see
 *
 * <a>UpdateByteMatchSet</a>> </li> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of a
 * <code>DeleteByteMatchSet</code>
 *
 * request> </li> <li>
 *
 * Submit a <code>DeleteByteMatchSet</code>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteByteMatchSetResponse * WafClient::deleteByteMatchSet(const DeleteByteMatchSetRequest &request)
{
    return qobject_cast<DeleteByteMatchSetResponse *>(send(request));
}

/**
 * Permanently deletes a <a>GeoMatchSet</a>. You can't delete a <code>GeoMatchSet</code> if it's still used in any
 * <code>Rules</code> or if it still includes any
 *
 * countries>
 *
 * If you just want to remove a <code>GeoMatchSet</code> from a <code>Rule</code>, use
 *
 * <a>UpdateRule</a>>
 *
 * To permanently delete a <code>GeoMatchSet</code> from AWS WAF, perform the following
 *
 * steps> <ol> <li>
 *
 * Update the <code>GeoMatchSet</code> to remove any countries. For more information, see
 *
 * <a>UpdateGeoMatchSet</a>> </li> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of a
 * <code>DeleteGeoMatchSet</code>
 *
 * request> </li> <li>
 *
 * Submit a <code>DeleteGeoMatchSet</code>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteGeoMatchSetResponse * WafClient::deleteGeoMatchSet(const DeleteGeoMatchSetRequest &request)
{
    return qobject_cast<DeleteGeoMatchSetResponse *>(send(request));
}

/**
 * Permanently deletes an <a>IPSet</a>. You can't delete an <code>IPSet</code> if it's still used in any <code>Rules</code>
 * or if it still includes any IP
 *
 * addresses>
 *
 * If you just want to remove an <code>IPSet</code> from a <code>Rule</code>, use
 *
 * <a>UpdateRule</a>>
 *
 * To permanently delete an <code>IPSet</code> from AWS WAF, perform the following
 *
 * steps> <ol> <li>
 *
 * Update the <code>IPSet</code> to remove IP address ranges, if any. For more information, see
 *
 * <a>UpdateIPSet</a>> </li> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of a
 * <code>DeleteIPSet</code>
 *
 * request> </li> <li>
 *
 * Submit a <code>DeleteIPSet</code>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteIPSetResponse * WafClient::deleteIPSet(const DeleteIPSetRequest &request)
{
    return qobject_cast<DeleteIPSetResponse *>(send(request));
}

/**
 * Permanently deletes an IAM policy from the specified
 *
 * RuleGroup>
 *
 * The user making the request must be the owner of the
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeletePermissionPolicyResponse * WafClient::deletePermissionPolicy(const DeletePermissionPolicyRequest &request)
{
    return qobject_cast<DeletePermissionPolicyResponse *>(send(request));
}

/**
 * Permanently deletes a <a>RateBasedRule</a>. You can't delete a rule if it's still used in any <code>WebACL</code>
 * objects or if it still includes any predicates, such as <code>ByteMatchSet</code>
 *
 * objects>
 *
 * If you just want to remove a rule from a <code>WebACL</code>, use
 *
 * <a>UpdateWebACL</a>>
 *
 * To permanently delete a <code>RateBasedRule</code> from AWS WAF, perform the following
 *
 * steps> <ol> <li>
 *
 * Update the <code>RateBasedRule</code> to remove predicates, if any. For more information, see
 *
 * <a>UpdateRateBasedRule</a>> </li> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of a
 * <code>DeleteRateBasedRule</code>
 *
 * request> </li> <li>
 *
 * Submit a <code>DeleteRateBasedRule</code>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteRateBasedRuleResponse * WafClient::deleteRateBasedRule(const DeleteRateBasedRuleRequest &request)
{
    return qobject_cast<DeleteRateBasedRuleResponse *>(send(request));
}

/**
 * Permanently deletes a <a>RegexMatchSet</a>. You can't delete a <code>RegexMatchSet</code> if it's still used in any
 * <code>Rules</code> or if it still includes any <code>RegexMatchTuples</code> objects (any
 *
 * filters)>
 *
 * If you just want to remove a <code>RegexMatchSet</code> from a <code>Rule</code>, use
 *
 * <a>UpdateRule</a>>
 *
 * To permanently delete a <code>RegexMatchSet</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Update the <code>RegexMatchSet</code> to remove filters, if any. For more information, see
 *
 * <a>UpdateRegexMatchSet</a>> </li> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of a
 * <code>DeleteRegexMatchSet</code>
 *
 * request> </li> <li>
 *
 * Submit a <code>DeleteRegexMatchSet</code>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteRegexMatchSetResponse * WafClient::deleteRegexMatchSet(const DeleteRegexMatchSetRequest &request)
{
    return qobject_cast<DeleteRegexMatchSetResponse *>(send(request));
}

/**
 * Permanently deletes a <a>RegexPatternSet</a>. You can't delete a <code>RegexPatternSet</code> if it's still used in any
 * <code>RegexMatchSet</code> or if the <code>RegexPatternSet</code> is not empty.
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteRegexPatternSetResponse * WafClient::deleteRegexPatternSet(const DeleteRegexPatternSetRequest &request)
{
    return qobject_cast<DeleteRegexPatternSetResponse *>(send(request));
}

/**
 * Permanently deletes a <a>Rule</a>. You can't delete a <code>Rule</code> if it's still used in any <code>WebACL</code>
 * objects or if it still includes any predicates, such as <code>ByteMatchSet</code>
 *
 * objects>
 *
 * If you just want to remove a <code>Rule</code> from a <code>WebACL</code>, use
 *
 * <a>UpdateWebACL</a>>
 *
 * To permanently delete a <code>Rule</code> from AWS WAF, perform the following
 *
 * steps> <ol> <li>
 *
 * Update the <code>Rule</code> to remove predicates, if any. For more information, see
 *
 * <a>UpdateRule</a>> </li> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of a
 * <code>DeleteRule</code>
 *
 * request> </li> <li>
 *
 * Submit a <code>DeleteRule</code>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteRuleResponse * WafClient::deleteRule(const DeleteRuleRequest &request)
{
    return qobject_cast<DeleteRuleResponse *>(send(request));
}

/**
 * Permanently deletes a <a>RuleGroup</a>. You can't delete a <code>RuleGroup</code> if it's still used in any
 * <code>WebACL</code> objects or if it still includes any
 *
 * rules>
 *
 * If you just want to remove a <code>RuleGroup</code> from a <code>WebACL</code>, use
 *
 * <a>UpdateWebACL</a>>
 *
 * To permanently delete a <code>RuleGroup</code> from AWS WAF, perform the following
 *
 * steps> <ol> <li>
 *
 * Update the <code>RuleGroup</code> to remove rules, if any. For more information, see
 *
 * <a>UpdateRuleGroup</a>> </li> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of a
 * <code>DeleteRuleGroup</code>
 *
 * request> </li> <li>
 *
 * Submit a <code>DeleteRuleGroup</code>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteRuleGroupResponse * WafClient::deleteRuleGroup(const DeleteRuleGroupRequest &request)
{
    return qobject_cast<DeleteRuleGroupResponse *>(send(request));
}

/**
 * Permanently deletes a <a>SizeConstraintSet</a>. You can't delete a <code>SizeConstraintSet</code> if it's still used in
 * any <code>Rules</code> or if it still includes any <a>SizeConstraint</a> objects (any
 *
 * filters)>
 *
 * If you just want to remove a <code>SizeConstraintSet</code> from a <code>Rule</code>, use
 *
 * <a>UpdateRule</a>>
 *
 * To permanently delete a <code>SizeConstraintSet</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Update the <code>SizeConstraintSet</code> to remove filters, if any. For more information, see
 *
 * <a>UpdateSizeConstraintSet</a>> </li> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of a
 * <code>DeleteSizeConstraintSet</code>
 *
 * request> </li> <li>
 *
 * Submit a <code>DeleteSizeConstraintSet</code>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteSizeConstraintSetResponse * WafClient::deleteSizeConstraintSet(const DeleteSizeConstraintSetRequest &request)
{
    return qobject_cast<DeleteSizeConstraintSetResponse *>(send(request));
}

/**
 * Permanently deletes a <a>SqlInjectionMatchSet</a>. You can't delete a <code>SqlInjectionMatchSet</code> if it's still
 * used in any <code>Rules</code> or if it still contains any <a>SqlInjectionMatchTuple</a>
 *
 * objects>
 *
 * If you just want to remove a <code>SqlInjectionMatchSet</code> from a <code>Rule</code>, use
 *
 * <a>UpdateRule</a>>
 *
 * To permanently delete a <code>SqlInjectionMatchSet</code> from AWS WAF, perform the following
 *
 * steps> <ol> <li>
 *
 * Update the <code>SqlInjectionMatchSet</code> to remove filters, if any. For more information, see
 *
 * <a>UpdateSqlInjectionMatchSet</a>> </li> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of a
 * <code>DeleteSqlInjectionMatchSet</code>
 *
 * request> </li> <li>
 *
 * Submit a <code>DeleteSqlInjectionMatchSet</code>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteSqlInjectionMatchSetResponse * WafClient::deleteSqlInjectionMatchSet(const DeleteSqlInjectionMatchSetRequest &request)
{
    return qobject_cast<DeleteSqlInjectionMatchSetResponse *>(send(request));
}

/**
 * Permanently deletes a <a>WebACL</a>. You can't delete a <code>WebACL</code> if it still contains any
 *
 * <code>Rules</code>>
 *
 * To delete a <code>WebACL</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Update the <code>WebACL</code> to remove <code>Rules</code>, if any. For more information, see
 *
 * <a>UpdateWebACL</a>> </li> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of a
 * <code>DeleteWebACL</code>
 *
 * request> </li> <li>
 *
 * Submit a <code>DeleteWebACL</code>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteWebACLResponse * WafClient::deleteWebACL(const DeleteWebACLRequest &request)
{
    return qobject_cast<DeleteWebACLResponse *>(send(request));
}

/**
 * Permanently deletes an <a>XssMatchSet</a>. You can't delete an <code>XssMatchSet</code> if it's still used in any
 * <code>Rules</code> or if it still contains any <a>XssMatchTuple</a>
 *
 * objects>
 *
 * If you just want to remove an <code>XssMatchSet</code> from a <code>Rule</code>, use
 *
 * <a>UpdateRule</a>>
 *
 * To permanently delete an <code>XssMatchSet</code> from AWS WAF, perform the following
 *
 * steps> <ol> <li>
 *
 * Update the <code>XssMatchSet</code> to remove filters, if any. For more information, see
 *
 * <a>UpdateXssMatchSet</a>> </li> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of a
 * <code>DeleteXssMatchSet</code>
 *
 * request> </li> <li>
 *
 * Submit a <code>DeleteXssMatchSet</code>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteXssMatchSetResponse * WafClient::deleteXssMatchSet(const DeleteXssMatchSetRequest &request)
{
    return qobject_cast<DeleteXssMatchSetResponse *>(send(request));
}

/**
 * Returns the <a>ByteMatchSet</a> specified by
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetByteMatchSetResponse * WafClient::getByteMatchSet(const GetByteMatchSetRequest &request)
{
    return qobject_cast<GetByteMatchSetResponse *>(send(request));
}

/**
 * When you want to create, update, or delete AWS WAF objects, get a change token and include the change token in the
 * create, update, or delete request. Change tokens ensure that your application doesn't submit conflicting requests to AWS
 *
 * WAF>
 *
 * Each create, update, or delete request must use a unique change token. If your application submits a
 * <code>GetChangeToken</code> request and then submits a second <code>GetChangeToken</code> request before submitting a
 * create, update, or delete request, the second <code>GetChangeToken</code> request returns the same value as the first
 * <code>GetChangeToken</code>
 *
 * request>
 *
 * When you use a change token in a create, update, or delete request, the status of the change token changes to
 * <code>PENDING</code>, which indicates that AWS WAF is propagating the change to all AWS WAF servers. Use
 * <code>GetChangeTokenStatus</code> to determine the status of your change
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetChangeTokenResponse * WafClient::getChangeToken(const GetChangeTokenRequest &request)
{
    return qobject_cast<GetChangeTokenResponse *>(send(request));
}

/**
 * Returns the status of a <code>ChangeToken</code> that you got by calling <a>GetChangeToken</a>.
 * <code>ChangeTokenStatus</code> is one of the following
 *
 * values> <ul> <li>
 *
 * <code>PROVISIONED</code>: You requested the change token by calling <code>GetChangeToken</code>, but you haven't used it
 * yet in a call to create, update, or delete an AWS WAF
 *
 * object> </li> <li>
 *
 * <code>PENDING</code>: AWS WAF is propagating the create, update, or delete request to all AWS WAF
 *
 * servers> </li> <li>
 *
 * <code>IN_SYNC</code>: Propagation is
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetChangeTokenStatusResponse * WafClient::getChangeTokenStatus(const GetChangeTokenStatusRequest &request)
{
    return qobject_cast<GetChangeTokenStatusResponse *>(send(request));
}

/**
 * Returns the <a>GeoMatchSet</a> that is specified by
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetGeoMatchSetResponse * WafClient::getGeoMatchSet(const GetGeoMatchSetRequest &request)
{
    return qobject_cast<GetGeoMatchSetResponse *>(send(request));
}

/**
 * Returns the <a>IPSet</a> that is specified by
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetIPSetResponse * WafClient::getIPSet(const GetIPSetRequest &request)
{
    return qobject_cast<GetIPSetResponse *>(send(request));
}

/**
 * Returns the IAM policy attached to the
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetPermissionPolicyResponse * WafClient::getPermissionPolicy(const GetPermissionPolicyRequest &request)
{
    return qobject_cast<GetPermissionPolicyResponse *>(send(request));
}

/**
 * Returns the <a>RateBasedRule</a> that is specified by the <code>RuleId</code> that you included in the
 * <code>GetRateBasedRule</code>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetRateBasedRuleResponse * WafClient::getRateBasedRule(const GetRateBasedRuleRequest &request)
{
    return qobject_cast<GetRateBasedRuleResponse *>(send(request));
}

/**
 * Returns an array of IP addresses currently being blocked by the <a>RateBasedRule</a> that is specified by the
 * <code>RuleId</code>. The maximum number of managed keys that will be blocked is 10,000. If more than 10,000 addresses
 * exceed the rate limit, the 10,000 addresses with the highest rates will be
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetRateBasedRuleManagedKeysResponse * WafClient::getRateBasedRuleManagedKeys(const GetRateBasedRuleManagedKeysRequest &request)
{
    return qobject_cast<GetRateBasedRuleManagedKeysResponse *>(send(request));
}

/**
 * Returns the <a>RegexMatchSet</a> specified by
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetRegexMatchSetResponse * WafClient::getRegexMatchSet(const GetRegexMatchSetRequest &request)
{
    return qobject_cast<GetRegexMatchSetResponse *>(send(request));
}

/**
 * Returns the <a>RegexPatternSet</a> specified by
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetRegexPatternSetResponse * WafClient::getRegexPatternSet(const GetRegexPatternSetRequest &request)
{
    return qobject_cast<GetRegexPatternSetResponse *>(send(request));
}

/**
 * Returns the <a>Rule</a> that is specified by the <code>RuleId</code> that you included in the <code>GetRule</code>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetRuleResponse * WafClient::getRule(const GetRuleRequest &request)
{
    return qobject_cast<GetRuleResponse *>(send(request));
}

/**
 * Returns the <a>RuleGroup</a> that is specified by the <code>RuleGroupId</code> that you included in the
 * <code>GetRuleGroup</code>
 *
 * request>
 *
 * To view the rules in a rule group, use
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetRuleGroupResponse * WafClient::getRuleGroup(const GetRuleGroupRequest &request)
{
    return qobject_cast<GetRuleGroupResponse *>(send(request));
}

/**
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
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSampledRequestsResponse * WafClient::getSampledRequests(const GetSampledRequestsRequest &request)
{
    return qobject_cast<GetSampledRequestsResponse *>(send(request));
}

/**
 * Returns the <a>SizeConstraintSet</a> specified by
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSizeConstraintSetResponse * WafClient::getSizeConstraintSet(const GetSizeConstraintSetRequest &request)
{
    return qobject_cast<GetSizeConstraintSetResponse *>(send(request));
}

/**
 * Returns the <a>SqlInjectionMatchSet</a> that is specified by
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSqlInjectionMatchSetResponse * WafClient::getSqlInjectionMatchSet(const GetSqlInjectionMatchSetRequest &request)
{
    return qobject_cast<GetSqlInjectionMatchSetResponse *>(send(request));
}

/**
 * Returns the <a>WebACL</a> that is specified by
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetWebACLResponse * WafClient::getWebACL(const GetWebACLRequest &request)
{
    return qobject_cast<GetWebACLResponse *>(send(request));
}

/**
 * Returns the <a>XssMatchSet</a> that is specified by
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetXssMatchSetResponse * WafClient::getXssMatchSet(const GetXssMatchSetRequest &request)
{
    return qobject_cast<GetXssMatchSetResponse *>(send(request));
}

/**
 * Returns an array of <a>ActivatedRule</a>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListActivatedRulesInRuleGroupResponse * WafClient::listActivatedRulesInRuleGroup(const ListActivatedRulesInRuleGroupRequest &request)
{
    return qobject_cast<ListActivatedRulesInRuleGroupResponse *>(send(request));
}

/**
 * Returns an array of <a>ByteMatchSetSummary</a>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListByteMatchSetsResponse * WafClient::listByteMatchSets(const ListByteMatchSetsRequest &request)
{
    return qobject_cast<ListByteMatchSetsResponse *>(send(request));
}

/**
 * Returns an array of <a>GeoMatchSetSummary</a> objects in the
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListGeoMatchSetsResponse * WafClient::listGeoMatchSets(const ListGeoMatchSetsRequest &request)
{
    return qobject_cast<ListGeoMatchSetsResponse *>(send(request));
}

/**
 * Returns an array of <a>IPSetSummary</a> objects in the
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListIPSetsResponse * WafClient::listIPSets(const ListIPSetsRequest &request)
{
    return qobject_cast<ListIPSetsResponse *>(send(request));
}

/**
 * Returns an array of <a>RuleSummary</a>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListRateBasedRulesResponse * WafClient::listRateBasedRules(const ListRateBasedRulesRequest &request)
{
    return qobject_cast<ListRateBasedRulesResponse *>(send(request));
}

/**
 * Returns an array of <a>RegexMatchSetSummary</a>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListRegexMatchSetsResponse * WafClient::listRegexMatchSets(const ListRegexMatchSetsRequest &request)
{
    return qobject_cast<ListRegexMatchSetsResponse *>(send(request));
}

/**
 * Returns an array of <a>RegexPatternSetSummary</a>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListRegexPatternSetsResponse * WafClient::listRegexPatternSets(const ListRegexPatternSetsRequest &request)
{
    return qobject_cast<ListRegexPatternSetsResponse *>(send(request));
}

/**
 * Returns an array of <a>RuleGroup</a>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListRuleGroupsResponse * WafClient::listRuleGroups(const ListRuleGroupsRequest &request)
{
    return qobject_cast<ListRuleGroupsResponse *>(send(request));
}

/**
 * Returns an array of <a>RuleSummary</a>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListRulesResponse * WafClient::listRules(const ListRulesRequest &request)
{
    return qobject_cast<ListRulesResponse *>(send(request));
}

/**
 * Returns an array of <a>SizeConstraintSetSummary</a>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListSizeConstraintSetsResponse * WafClient::listSizeConstraintSets(const ListSizeConstraintSetsRequest &request)
{
    return qobject_cast<ListSizeConstraintSetsResponse *>(send(request));
}

/**
 * Returns an array of <a>SqlInjectionMatchSet</a>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListSqlInjectionMatchSetsResponse * WafClient::listSqlInjectionMatchSets(const ListSqlInjectionMatchSetsRequest &request)
{
    return qobject_cast<ListSqlInjectionMatchSetsResponse *>(send(request));
}

/**
 * Returns an array of <a>RuleGroup</a> objects that you are subscribed
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListSubscribedRuleGroupsResponse * WafClient::listSubscribedRuleGroups(const ListSubscribedRuleGroupsRequest &request)
{
    return qobject_cast<ListSubscribedRuleGroupsResponse *>(send(request));
}

/**
 * Returns an array of <a>WebACLSummary</a> objects in the
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListWebACLsResponse * WafClient::listWebACLs(const ListWebACLsRequest &request)
{
    return qobject_cast<ListWebACLsResponse *>(send(request));
}

/**
 * Returns an array of <a>XssMatchSet</a>
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListXssMatchSetsResponse * WafClient::listXssMatchSets(const ListXssMatchSetsRequest &request)
{
    return qobject_cast<ListXssMatchSetsResponse *>(send(request));
}

/**
 * Attaches a IAM policy to the specified resource. The only supported use for this action is to share a RuleGroup across
 *
 * accounts>
 *
 * The <code>PutPermissionPolicy</code> is subject to the following
 *
 * restrictions> <ul> <li>
 *
 * You can attach only one policy with each <code>PutPermissionPolicy</code>
 *
 * request> </li> <li>
 *
 * The policy must include an <code>Effect</code>, <code>Action</code> and <code>Principal</code>.
 *
 * </p </li> <li>
 *
 * <code>Effect</code> must specify
 *
 * <code>Allow</code>> </li> <li>
 *
 * The <code>Action</code> in the policy must be <code>waf:UpdateWebACL</code> and <code>waf-regional:UpdateWebACL</code>.
 * Any extra or wildcard actions in the policy will be
 *
 * rejected> </li> <li>
 *
 * The policy cannot include a <code>Resource</code>
 *
 * parameter> </li> <li>
 *
 * The ARN in the request must be a valid WAF RuleGroup ARN and the RuleGroup must exist in the same
 *
 * region> </li> <li>
 *
 * The user making the request must be the owner of the
 *
 * RuleGroup> </li> <li>
 *
 * Your policy must be composed using IAM Policy version
 *
 * 2012-10-17> </li> </ul>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html">IAM
 * Policies</a>.
 *
 * </p
 *
 * An example of a valid policy parameter is shown in the Examples section
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutPermissionPolicyResponse * WafClient::putPermissionPolicy(const PutPermissionPolicyRequest &request)
{
    return qobject_cast<PutPermissionPolicyResponse *>(send(request));
}

/**
 * Inserts or deletes <a>ByteMatchTuple</a> objects (filters) in a <a>ByteMatchSet</a>. For each
 * <code>ByteMatchTuple</code> object, you specify the following values:
 *
 * </p <ul> <li>
 *
 * Whether to insert or delete the object from the array. If you want to change a <code>ByteMatchSetUpdate</code> object,
 * you delete the existing object and add a new
 *
 * one> </li> <li>
 *
 * The part of a web request that you want AWS WAF to inspect, such as a query string or the value of the
 * <code>User-Agent</code> header.
 *
 * </p </li> <li>
 *
 * The bytes (typically a string that corresponds with ASCII characters) that you want AWS WAF to look for. For more
 * information, including how you specify the values for the AWS WAF API and the AWS CLI or SDKs, see
 * <code>TargetString</code> in the <a>ByteMatchTuple</a> data type.
 *
 * </p </li> <li>
 *
 * Where to look, such as at the beginning or the end of a query
 *
 * string> </li> <li>
 *
 * Whether to perform any conversions on the request, such as converting it to lowercase, before inspecting it for the
 * specified
 *
 * string> </li> </ul>
 *
 * For example, you can add a <code>ByteMatchSetUpdate</code> object that matches web requests in which
 * <code>User-Agent</code> headers contain the string <code>BadBot</code>. You can then configure AWS WAF to block those
 *
 * requests>
 *
 * To create and configure a <code>ByteMatchSet</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Create a <code>ByteMatchSet.</code> For more information, see
 *
 * <a>CreateByteMatchSet</a>> </li> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of an
 * <code>UpdateByteMatchSet</code>
 *
 * request> </li> <li>
 *
 * Submit an <code>UpdateByteMatchSet</code> request to specify the part of the request that you want AWS WAF to inspect
 * (for example, the header or the URI) and the value that you want AWS WAF to watch
 *
 * for> </li> </ol>
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateByteMatchSetResponse * WafClient::updateByteMatchSet(const UpdateByteMatchSetRequest &request)
{
    return qobject_cast<UpdateByteMatchSetResponse *>(send(request));
}

/**
 * Inserts or deletes <a>GeoMatchConstraint</a> objects in an <code>GeoMatchSet</code>. For each
 * <code>GeoMatchConstraint</code> object, you specify the following values:
 *
 * </p <ul> <li>
 *
 * Whether to insert or delete the object from the array. If you want to change an <code>GeoMatchConstraint</code> object,
 * you delete the existing object and add a new
 *
 * one> </li> <li>
 *
 * The <code>Type</code>. The only valid value for <code>Type</code> is
 *
 * <code>Country</code>> </li> <li>
 *
 * The <code>Value</code>, which is a two character code for the country to add to the <code>GeoMatchConstraint</code>
 * object. Valid codes are listed in
 *
 * <a>GeoMatchConstraint$Value</a>> </li> </ul>
 *
 * To create and configure an <code>GeoMatchSet</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Submit a <a>CreateGeoMatchSet</a>
 *
 * request> </li> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of an
 * <a>UpdateGeoMatchSet</a>
 *
 * request> </li> <li>
 *
 * Submit an <code>UpdateGeoMatchSet</code> request to specify the country that you want AWS WAF to watch
 *
 * for> </li> </ol>
 *
 * When you update an <code>GeoMatchSet</code>, you specify the country that you want to add and/or the country that you
 * want to delete. If you want to change a country, you delete the existing country and add the new
 *
 * one>
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateGeoMatchSetResponse * WafClient::updateGeoMatchSet(const UpdateGeoMatchSetRequest &request)
{
    return qobject_cast<UpdateGeoMatchSetResponse *>(send(request));
}

/**
 * Inserts or deletes <a>IPSetDescriptor</a> objects in an <code>IPSet</code>. For each <code>IPSetDescriptor</code>
 * object, you specify the following values:
 *
 * </p <ul> <li>
 *
 * Whether to insert or delete the object from the array. If you want to change an <code>IPSetDescriptor</code> object, you
 * delete the existing object and add a new
 *
 * one> </li> <li>
 *
 * The IP address version, <code>IPv4</code> or <code>IPv6</code>.
 *
 * </p </li> <li>
 *
 * The IP address in CIDR notation, for example, <code>192.0.2.0/24</code> (for the range of IP addresses from
 * <code>192.0.2.0</code> to <code>192.0.2.255</code>) or <code>192.0.2.44/32</code> (for the individual IP address
 * <code>192.0.2.44</code>).
 *
 * </p </li> </ul>
 *
 * AWS WAF supports /8, /16, /24, and /32 IP address ranges for IPv4, and /24, /32, /48, /56, /64 and /128 for IPv6. For
 * more information about CIDR notation, see the Wikipedia entry <a
 * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless Inter-Domain
 *
 * Routing</a>>
 *
 * IPv6 addresses can be represented using any of the following
 *
 * formats> <ul> <li>
 *
 * 1111:0000:0000:0000:0000:0000:0000:0111/12> </li> <li>
 *
 * 1111:0:0:0:0:0:0:0111/12> </li> <li>
 *
 * 1111::0111/12> </li> <li>
 *
 * 1111::111/12> </li> </ul>
 *
 * You use an <code>IPSet</code> to specify which web requests you want to allow or block based on the IP addresses that
 * the requests originated from. For example, if you're receiving a lot of requests from one or a small number of IP
 * addresses and you want to block the requests, you can create an <code>IPSet</code> that specifies those IP addresses,
 * and then configure AWS WAF to block the requests.
 *
 * </p
 *
 * To create and configure an <code>IPSet</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Submit a <a>CreateIPSet</a>
 *
 * request> </li> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of an
 * <a>UpdateIPSet</a>
 *
 * request> </li> <li>
 *
 * Submit an <code>UpdateIPSet</code> request to specify the IP addresses that you want AWS WAF to watch
 *
 * for> </li> </ol>
 *
 * When you update an <code>IPSet</code>, you specify the IP addresses that you want to add and/or the IP addresses that
 * you want to delete. If you want to change an IP address, you delete the existing IP address and add the new
 *
 * one>
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateIPSetResponse * WafClient::updateIPSet(const UpdateIPSetRequest &request)
{
    return qobject_cast<UpdateIPSetResponse *>(send(request));
}

/**
 * Inserts or deletes <a>Predicate</a> objects in a rule and updates the <code>RateLimit</code> in the rule.
 *
 * </p
 *
 * Each <code>Predicate</code> object identifies a predicate, such as a <a>ByteMatchSet</a> or an <a>IPSet</a>, that
 * specifies the web requests that you want to block or count. The <code>RateLimit</code> specifies the number of requests
 * every five minutes that triggers the
 *
 * rule>
 *
 * If you add more than one predicate to a <code>RateBasedRule</code>, a request must match all the predicates and exceed
 * the <code>RateLimit</code> to be counted or blocked. For example, suppose you add the following to a
 *
 * <code>RateBasedRule</code>> <ul> <li>
 *
 * An <code>IPSet</code> that matches the IP address <code>192.0.2.44/32</code>
 *
 * </p </li> <li>
 *
 * A <code>ByteMatchSet</code> that matches <code>BadBot</code> in the <code>User-Agent</code>
 *
 * heade> </li> </ul>
 *
 * Further, you specify a <code>RateLimit</code> of
 *
 * 15,000>
 *
 * You then add the <code>RateBasedRule</code> to a <code>WebACL</code> and specify that you want to block requests that
 * satisfy the rule. For a request to be blocked, it must come from the IP address 192.0.2.44 <i>and</i> the
 * <code>User-Agent</code> header in the request must contain the value <code>BadBot</code>. Further, requests that match
 * these two conditions much be received at a rate of more than 15,000 every five minutes. If the rate drops below this
 * limit, AWS WAF no longer blocks the
 *
 * requests>
 *
 * As a second example, suppose you want to limit requests to a particular page on your site. To do this, you could add the
 * following to a
 *
 * <code>RateBasedRule</code>> <ul> <li>
 *
 * A <code>ByteMatchSet</code> with <code>FieldToMatch</code> of <code>URI</code>
 *
 * </p </li> <li>
 *
 * A <code>PositionalConstraint</code> of <code>STARTS_WITH</code>
 *
 * </p </li> <li>
 *
 * A <code>TargetString</code> of <code>login</code>
 *
 * </p </li> </ul>
 *
 * Further, you specify a <code>RateLimit</code> of
 *
 * 15,000>
 *
 * By adding this <code>RateBasedRule</code> to a <code>WebACL</code>, you could limit requests to your login page without
 * affecting the rest of your
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateRateBasedRuleResponse * WafClient::updateRateBasedRule(const UpdateRateBasedRuleRequest &request)
{
    return qobject_cast<UpdateRateBasedRuleResponse *>(send(request));
}

/**
 * Inserts or deletes <a>RegexMatchTuple</a> objects (filters) in a <a>RegexMatchSet</a>. For each
 * <code>RegexMatchSetUpdate</code> object, you specify the following values:
 *
 * </p <ul> <li>
 *
 * Whether to insert or delete the object from the array. If you want to change a <code>RegexMatchSetUpdate</code> object,
 * you delete the existing object and add a new
 *
 * one> </li> <li>
 *
 * The part of a web request that you want AWS WAF to inspectupdate, such as a query string or the value of the
 * <code>User-Agent</code> header.
 *
 * </p </li> <li>
 *
 * The identifier of the pattern (a regular expression) that you want AWS WAF to look for. For more information, see
 * <a>RegexPatternSet</a>.
 *
 * </p </li> <li>
 *
 * Whether to perform any conversions on the request, such as converting it to lowercase, before inspecting it for the
 * specified
 *
 * string> </li> </ul>
 *
 * For example, you can create a <code>RegexPatternSet</code> that matches any requests with <code>User-Agent</code>
 * headers that contain the string <code>B[a@]dB[o0]t</code>. You can then configure AWS WAF to reject those
 *
 * requests>
 *
 * To create and configure a <code>RegexMatchSet</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Create a <code>RegexMatchSet.</code> For more information, see
 *
 * <a>CreateRegexMatchSet</a>> </li> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of an
 * <code>UpdateRegexMatchSet</code>
 *
 * request> </li> <li>
 *
 * Submit an <code>UpdateRegexMatchSet</code> request to specify the part of the request that you want AWS WAF to inspect
 * (for example, the header or the URI) and the identifier of the <code>RegexPatternSet</code> that contain the regular
 * expression patters you want AWS WAF to watch
 *
 * for> </li> </ol>
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateRegexMatchSetResponse * WafClient::updateRegexMatchSet(const UpdateRegexMatchSetRequest &request)
{
    return qobject_cast<UpdateRegexMatchSetResponse *>(send(request));
}

/**
 * Inserts or deletes <code>RegexPatternString</code> objects in a <a>RegexPatternSet</a>. For each
 * <code>RegexPatternString</code> object, you specify the following values:
 *
 * </p <ul> <li>
 *
 * Whether to insert or delete the
 *
 * <code>RegexPatternString</code>> </li> <li>
 *
 * The regular expression pattern that you want to insert or delete. For more information, see <a>RegexPatternSet</a>.
 *
 * </p </li> </ul>
 *
 * For example, you can create a <code>RegexPatternString</code> such as <code>B[a@]dB[o0]t</code>. AWS WAF will match this
 * <code>RegexPatternString</code>
 *
 * to> <ul> <li>
 *
 * BadBo> </li> <li>
 *
 * BadB0> </li> <li>
 *
 * B@dBo> </li> <li>
 *
 * B@dB0> </li> </ul>
 *
 * To create and configure a <code>RegexPatternSet</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Create a <code>RegexPatternSet.</code> For more information, see
 *
 * <a>CreateRegexPatternSet</a>> </li> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of an
 * <code>UpdateRegexPatternSet</code>
 *
 * request> </li> <li>
 *
 * Submit an <code>UpdateRegexPatternSet</code> request to specify the regular expression pattern that you want AWS WAF to
 * watch
 *
 * for> </li> </ol>
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateRegexPatternSetResponse * WafClient::updateRegexPatternSet(const UpdateRegexPatternSetRequest &request)
{
    return qobject_cast<UpdateRegexPatternSetResponse *>(send(request));
}

/**
 * Inserts or deletes <a>Predicate</a> objects in a <code>Rule</code>. Each <code>Predicate</code> object identifies a
 * predicate, such as a <a>ByteMatchSet</a> or an <a>IPSet</a>, that specifies the web requests that you want to allow,
 * block, or count. If you add more than one predicate to a <code>Rule</code>, a request must match all of the
 * specifications to be allowed, blocked, or counted. For example, suppose you add the following to a <code>Rule</code>:
 *
 * </p <ul> <li>
 *
 * A <code>ByteMatchSet</code> that matches the value <code>BadBot</code> in the <code>User-Agent</code>
 *
 * heade> </li> <li>
 *
 * An <code>IPSet</code> that matches the IP address <code>192.0.2.44</code>
 *
 * </p </li> </ul>
 *
 * You then add the <code>Rule</code> to a <code>WebACL</code> and specify that you want to block requests that satisfy the
 * <code>Rule</code>. For a request to be blocked, the <code>User-Agent</code> header in the request must contain the value
 * <code>BadBot</code> <i>and</i> the request must originate from the IP address
 *
 * 192.0.2.44>
 *
 * To create and configure a <code>Rule</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Create and update the predicates that you want to include in the
 *
 * <code>Rule</code>> </li> <li>
 *
 * Create the <code>Rule</code>. See
 *
 * <a>CreateRule</a>> </li> <li>
 *
 * Use <code>GetChangeToken</code> to get the change token that you provide in the <code>ChangeToken</code> parameter of an
 * <a>UpdateRule</a>
 *
 * request> </li> <li>
 *
 * Submit an <code>UpdateRule</code> request to add predicates to the
 *
 * <code>Rule</code>> </li> <li>
 *
 * Create and update a <code>WebACL</code> that contains the <code>Rule</code>. See
 *
 * <a>CreateWebACL</a>> </li> </ol>
 *
 * If you want to replace one <code>ByteMatchSet</code> or <code>IPSet</code> with another, you delete the existing one and
 * add the new
 *
 * one>
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateRuleResponse * WafClient::updateRule(const UpdateRuleRequest &request)
{
    return qobject_cast<UpdateRuleResponse *>(send(request));
}

/**
 * Inserts or deletes <a>ActivatedRule</a> objects in a
 *
 * <code>RuleGroup</code>>
 *
 * You can only insert <code>REGULAR</code> rules into a rule
 *
 * group>
 *
 * You can have a maximum of ten rules per rule
 *
 * group>
 *
 * To create and configure a <code>RuleGroup</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Create and update the <code>Rules</code> that you want to include in the <code>RuleGroup</code>. See
 *
 * <a>CreateRule</a>> </li> <li>
 *
 * Use <code>GetChangeToken</code> to get the change token that you provide in the <code>ChangeToken</code> parameter of an
 * <a>UpdateRuleGroup</a>
 *
 * request> </li> <li>
 *
 * Submit an <code>UpdateRuleGroup</code> request to add <code>Rules</code> to the
 *
 * <code>RuleGroup</code>> </li> <li>
 *
 * Create and update a <code>WebACL</code> that contains the <code>RuleGroup</code>. See
 *
 * <a>CreateWebACL</a>> </li> </ol>
 *
 * If you want to replace one <code>Rule</code> with another, you delete the existing one and add the new
 *
 * one>
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateRuleGroupResponse * WafClient::updateRuleGroup(const UpdateRuleGroupRequest &request)
{
    return qobject_cast<UpdateRuleGroupResponse *>(send(request));
}

/**
 * Inserts or deletes <a>SizeConstraint</a> objects (filters) in a <a>SizeConstraintSet</a>. For each
 * <code>SizeConstraint</code> object, you specify the following values:
 *
 * </p <ul> <li>
 *
 * Whether to insert or delete the object from the array. If you want to change a <code>SizeConstraintSetUpdate</code>
 * object, you delete the existing object and add a new
 *
 * one> </li> <li>
 *
 * The part of a web request that you want AWS WAF to evaluate, such as the length of a query string or the length of the
 * <code>User-Agent</code>
 *
 * header> </li> <li>
 *
 * Whether to perform any transformations on the request, such as converting it to lowercase, before checking its length.
 * Note that transformations of the request body are not supported because the AWS resource forwards only the first
 * <code>8192</code> bytes of your request to AWS
 *
 * WAF> </li> <li>
 *
 * A <code>ComparisonOperator</code> used for evaluating the selected part of the request against the specified
 * <code>Size</code>, such as equals, greater than, less than, and so
 *
 * on> </li> <li>
 *
 * The length, in bytes, that you want AWS WAF to watch for in selected part of the request. The length is computed after
 * applying the
 *
 * transformation> </li> </ul>
 *
 * For example, you can add a <code>SizeConstraintSetUpdate</code> object that matches web requests in which the length of
 * the <code>User-Agent</code> header is greater than 100 bytes. You can then configure AWS WAF to block those
 *
 * requests>
 *
 * To create and configure a <code>SizeConstraintSet</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Create a <code>SizeConstraintSet.</code> For more information, see
 *
 * <a>CreateSizeConstraintSet</a>> </li> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of an
 * <code>UpdateSizeConstraintSet</code>
 *
 * request> </li> <li>
 *
 * Submit an <code>UpdateSizeConstraintSet</code> request to specify the part of the request that you want AWS WAF to
 * inspect (for example, the header or the URI) and the value that you want AWS WAF to watch
 *
 * for> </li> </ol>
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateSizeConstraintSetResponse * WafClient::updateSizeConstraintSet(const UpdateSizeConstraintSetRequest &request)
{
    return qobject_cast<UpdateSizeConstraintSetResponse *>(send(request));
}

/**
 * Inserts or deletes <a>SqlInjectionMatchTuple</a> objects (filters) in a <a>SqlInjectionMatchSet</a>. For each
 * <code>SqlInjectionMatchTuple</code> object, you specify the following
 *
 * values> <ul> <li>
 *
 * <code>Action</code>: Whether to insert the object into or delete the object from the array. To change a
 * <code>SqlInjectionMatchTuple</code>, you delete the existing object and add a new
 *
 * one> </li> <li>
 *
 * <code>FieldToMatch</code>: The part of web requests that you want AWS WAF to inspect and, if you want AWS WAF to inspect
 * a header, the name of the
 *
 * header> </li> <li>
 *
 * <code>TextTransformation</code>: Which text transformation, if any, to perform on the web request before inspecting the
 * request for snippets of malicious SQL
 *
 * code> </li> </ul>
 *
 * You use <code>SqlInjectionMatchSet</code> objects to specify which CloudFront requests you want to allow, block, or
 * count. For example, if you're receiving requests that contain snippets of SQL code in the query string and you want to
 * block the requests, you can create a <code>SqlInjectionMatchSet</code> with the applicable settings, and then configure
 * AWS WAF to block the requests.
 *
 * </p
 *
 * To create and configure a <code>SqlInjectionMatchSet</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Submit a <a>CreateSqlInjectionMatchSet</a>
 *
 * request> </li> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of an
 * <a>UpdateIPSet</a>
 *
 * request> </li> <li>
 *
 * Submit an <code>UpdateSqlInjectionMatchSet</code> request to specify the parts of web requests that you want AWS WAF to
 * inspect for snippets of SQL
 *
 * code> </li> </ol>
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateSqlInjectionMatchSetResponse * WafClient::updateSqlInjectionMatchSet(const UpdateSqlInjectionMatchSetRequest &request)
{
    return qobject_cast<UpdateSqlInjectionMatchSetResponse *>(send(request));
}

/**
 * Inserts or deletes <a>ActivatedRule</a> objects in a <code>WebACL</code>. Each <code>Rule</code> identifies web requests
 * that you want to allow, block, or count. When you update a <code>WebACL</code>, you specify the following
 *
 * values> <ul> <li>
 *
 * A default action for the <code>WebACL</code>, either <code>ALLOW</code> or <code>BLOCK</code>. AWS WAF performs the
 * default action if a request doesn't match the criteria in any of the <code>Rules</code> in a
 *
 * <code>WebACL</code>> </li> <li>
 *
 * The <code>Rules</code> that you want to add and/or delete. If you want to replace one <code>Rule</code> with another,
 * you delete the existing <code>Rule</code> and add the new
 *
 * one> </li> <li>
 *
 * For each <code>Rule</code>, whether you want AWS WAF to allow requests, block requests, or count requests that match the
 * conditions in the
 *
 * <code>Rule</code>> </li> <li>
 *
 * The order in which you want AWS WAF to evaluate the <code>Rules</code> in a <code>WebACL</code>. If you add more than
 * one <code>Rule</code> to a <code>WebACL</code>, AWS WAF evaluates each request against the <code>Rules</code> in order
 * based on the value of <code>Priority</code>. (The <code>Rule</code> that has the lowest value for <code>Priority</code>
 * is evaluated first.) When a web request matches all of the predicates (such as <code>ByteMatchSets</code> and
 * <code>IPSets</code>) in a <code>Rule</code>, AWS WAF immediately takes the corresponding action, allow or block, and
 * doesn't evaluate the request against the remaining <code>Rules</code> in the <code>WebACL</code>, if any.
 *
 * </p </li> </ul>
 *
 * To create and configure a <code>WebACL</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Create and update the predicates that you want to include in <code>Rules</code>. For more information, see
 * <a>CreateByteMatchSet</a>, <a>UpdateByteMatchSet</a>, <a>CreateIPSet</a>, <a>UpdateIPSet</a>,
 * <a>CreateSqlInjectionMatchSet</a>, and
 *
 * <a>UpdateSqlInjectionMatchSet</a>> </li> <li>
 *
 * Create and update the <code>Rules</code> that you want to include in the <code>WebACL</code>. For more information, see
 * <a>CreateRule</a> and
 *
 * <a>UpdateRule</a>> </li> <li>
 *
 * Create a <code>WebACL</code>. See
 *
 * <a>CreateWebACL</a>> </li> <li>
 *
 * Use <code>GetChangeToken</code> to get the change token that you provide in the <code>ChangeToken</code> parameter of an
 * <a>UpdateWebACL</a>
 *
 * request> </li> <li>
 *
 * Submit an <code>UpdateWebACL</code> request to specify the <code>Rules</code> that you want to include in the
 * <code>WebACL</code>, to specify the default action, and to associate the <code>WebACL</code> with a CloudFront
 * distribution.
 *
 * </p </li> </ol>
 *
 * Be aware that if you try to add a RATE_BASED rule to a web ACL without setting the rule type when first creating the
 * rule, the <a>UpdateWebACL</a> request will fail because the request tries to add a REGULAR rule (the default rule type)
 * with the specified ID, which does not exist.
 *
 * </p
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateWebACLResponse * WafClient::updateWebACL(const UpdateWebACLRequest &request)
{
    return qobject_cast<UpdateWebACLResponse *>(send(request));
}

/**
 * Inserts or deletes <a>XssMatchTuple</a> objects (filters) in an <a>XssMatchSet</a>. For each <code>XssMatchTuple</code>
 * object, you specify the following
 *
 * values> <ul> <li>
 *
 * <code>Action</code>: Whether to insert the object into or delete the object from the array. To change a
 * <code>XssMatchTuple</code>, you delete the existing object and add a new
 *
 * one> </li> <li>
 *
 * <code>FieldToMatch</code>: The part of web requests that you want AWS WAF to inspect and, if you want AWS WAF to inspect
 * a header, the name of the
 *
 * header> </li> <li>
 *
 * <code>TextTransformation</code>: Which text transformation, if any, to perform on the web request before inspecting the
 * request for cross-site scripting
 *
 * attacks> </li> </ul>
 *
 * You use <code>XssMatchSet</code> objects to specify which CloudFront requests you want to allow, block, or count. For
 * example, if you're receiving requests that contain cross-site scripting attacks in the request body and you want to
 * block the requests, you can create an <code>XssMatchSet</code> with the applicable settings, and then configure AWS WAF
 * to block the requests.
 *
 * </p
 *
 * To create and configure an <code>XssMatchSet</code>, perform the following
 *
 * steps> <ol> <li>
 *
 * Submit a <a>CreateXssMatchSet</a>
 *
 * request> </li> <li>
 *
 * Use <a>GetChangeToken</a> to get the change token that you provide in the <code>ChangeToken</code> parameter of an
 * <a>UpdateIPSet</a>
 *
 * request> </li> <li>
 *
 * Submit an <code>UpdateXssMatchSet</code> request to specify the parts of web requests that you want AWS WAF to inspect
 * for cross-site scripting
 *
 * attacks> </li> </ol>
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * @param  request Request to send to AWS WAF.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateXssMatchSetResponse * WafClient::updateXssMatchSet(const UpdateXssMatchSetRequest &request)
{
    return qobject_cast<UpdateXssMatchSetResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  WafClientPrivate
 *
 * @brief  Private implementation for WafClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new WafClientPrivate object.
 *
 * @param  q  Pointer to this object's public WafClient instance.
 */
WafClientPrivate::WafClientPrivate(WafClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace WAF
} // namespace AWS
