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

#include "wafregionalclient.h"
#include "wafregionalclient_p.h"

#include "core/awssignaturev4.h"
#include "associatewebaclrequest.h"
#include "associatewebaclresponse.h"
#include "createbytematchsetrequest.h"
#include "createbytematchsetresponse.h"
#include "creategeomatchsetrequest.h"
#include "creategeomatchsetresponse.h"
#include "createipsetrequest.h"
#include "createipsetresponse.h"
#include "createratebasedrulerequest.h"
#include "createratebasedruleresponse.h"
#include "createregexmatchsetrequest.h"
#include "createregexmatchsetresponse.h"
#include "createregexpatternsetrequest.h"
#include "createregexpatternsetresponse.h"
#include "createrulerequest.h"
#include "createruleresponse.h"
#include "createrulegrouprequest.h"
#include "createrulegroupresponse.h"
#include "createsizeconstraintsetrequest.h"
#include "createsizeconstraintsetresponse.h"
#include "createsqlinjectionmatchsetrequest.h"
#include "createsqlinjectionmatchsetresponse.h"
#include "createwebaclrequest.h"
#include "createwebaclresponse.h"
#include "createwebaclmigrationstackrequest.h"
#include "createwebaclmigrationstackresponse.h"
#include "createxssmatchsetrequest.h"
#include "createxssmatchsetresponse.h"
#include "deletebytematchsetrequest.h"
#include "deletebytematchsetresponse.h"
#include "deletegeomatchsetrequest.h"
#include "deletegeomatchsetresponse.h"
#include "deleteipsetrequest.h"
#include "deleteipsetresponse.h"
#include "deleteloggingconfigurationrequest.h"
#include "deleteloggingconfigurationresponse.h"
#include "deletepermissionpolicyrequest.h"
#include "deletepermissionpolicyresponse.h"
#include "deleteratebasedrulerequest.h"
#include "deleteratebasedruleresponse.h"
#include "deleteregexmatchsetrequest.h"
#include "deleteregexmatchsetresponse.h"
#include "deleteregexpatternsetrequest.h"
#include "deleteregexpatternsetresponse.h"
#include "deleterulerequest.h"
#include "deleteruleresponse.h"
#include "deleterulegrouprequest.h"
#include "deleterulegroupresponse.h"
#include "deletesizeconstraintsetrequest.h"
#include "deletesizeconstraintsetresponse.h"
#include "deletesqlinjectionmatchsetrequest.h"
#include "deletesqlinjectionmatchsetresponse.h"
#include "deletewebaclrequest.h"
#include "deletewebaclresponse.h"
#include "deletexssmatchsetrequest.h"
#include "deletexssmatchsetresponse.h"
#include "disassociatewebaclrequest.h"
#include "disassociatewebaclresponse.h"
#include "getbytematchsetrequest.h"
#include "getbytematchsetresponse.h"
#include "getchangetokenrequest.h"
#include "getchangetokenresponse.h"
#include "getchangetokenstatusrequest.h"
#include "getchangetokenstatusresponse.h"
#include "getgeomatchsetrequest.h"
#include "getgeomatchsetresponse.h"
#include "getipsetrequest.h"
#include "getipsetresponse.h"
#include "getloggingconfigurationrequest.h"
#include "getloggingconfigurationresponse.h"
#include "getpermissionpolicyrequest.h"
#include "getpermissionpolicyresponse.h"
#include "getratebasedrulerequest.h"
#include "getratebasedruleresponse.h"
#include "getratebasedrulemanagedkeysrequest.h"
#include "getratebasedrulemanagedkeysresponse.h"
#include "getregexmatchsetrequest.h"
#include "getregexmatchsetresponse.h"
#include "getregexpatternsetrequest.h"
#include "getregexpatternsetresponse.h"
#include "getrulerequest.h"
#include "getruleresponse.h"
#include "getrulegrouprequest.h"
#include "getrulegroupresponse.h"
#include "getsampledrequestsrequest.h"
#include "getsampledrequestsresponse.h"
#include "getsizeconstraintsetrequest.h"
#include "getsizeconstraintsetresponse.h"
#include "getsqlinjectionmatchsetrequest.h"
#include "getsqlinjectionmatchsetresponse.h"
#include "getwebaclrequest.h"
#include "getwebaclresponse.h"
#include "getwebaclforresourcerequest.h"
#include "getwebaclforresourceresponse.h"
#include "getxssmatchsetrequest.h"
#include "getxssmatchsetresponse.h"
#include "listactivatedrulesinrulegrouprequest.h"
#include "listactivatedrulesinrulegroupresponse.h"
#include "listbytematchsetsrequest.h"
#include "listbytematchsetsresponse.h"
#include "listgeomatchsetsrequest.h"
#include "listgeomatchsetsresponse.h"
#include "listipsetsrequest.h"
#include "listipsetsresponse.h"
#include "listloggingconfigurationsrequest.h"
#include "listloggingconfigurationsresponse.h"
#include "listratebasedrulesrequest.h"
#include "listratebasedrulesresponse.h"
#include "listregexmatchsetsrequest.h"
#include "listregexmatchsetsresponse.h"
#include "listregexpatternsetsrequest.h"
#include "listregexpatternsetsresponse.h"
#include "listresourcesforwebaclrequest.h"
#include "listresourcesforwebaclresponse.h"
#include "listrulegroupsrequest.h"
#include "listrulegroupsresponse.h"
#include "listrulesrequest.h"
#include "listrulesresponse.h"
#include "listsizeconstraintsetsrequest.h"
#include "listsizeconstraintsetsresponse.h"
#include "listsqlinjectionmatchsetsrequest.h"
#include "listsqlinjectionmatchsetsresponse.h"
#include "listsubscribedrulegroupsrequest.h"
#include "listsubscribedrulegroupsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listwebaclsrequest.h"
#include "listwebaclsresponse.h"
#include "listxssmatchsetsrequest.h"
#include "listxssmatchsetsresponse.h"
#include "putloggingconfigurationrequest.h"
#include "putloggingconfigurationresponse.h"
#include "putpermissionpolicyrequest.h"
#include "putpermissionpolicyresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatebytematchsetrequest.h"
#include "updatebytematchsetresponse.h"
#include "updategeomatchsetrequest.h"
#include "updategeomatchsetresponse.h"
#include "updateipsetrequest.h"
#include "updateipsetresponse.h"
#include "updateratebasedrulerequest.h"
#include "updateratebasedruleresponse.h"
#include "updateregexmatchsetrequest.h"
#include "updateregexmatchsetresponse.h"
#include "updateregexpatternsetrequest.h"
#include "updateregexpatternsetresponse.h"
#include "updaterulerequest.h"
#include "updateruleresponse.h"
#include "updaterulegrouprequest.h"
#include "updaterulegroupresponse.h"
#include "updatesizeconstraintsetrequest.h"
#include "updatesizeconstraintsetresponse.h"
#include "updatesqlinjectionmatchsetrequest.h"
#include "updatesqlinjectionmatchsetresponse.h"
#include "updatewebaclrequest.h"
#include "updatewebaclresponse.h"
#include "updatexssmatchsetrequest.h"
#include "updatexssmatchsetresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::WafRegional
 * \brief Contains classess for accessing AWS WAF Regional.
 *
 * \inmodule QtAwsWafRegional
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace WafRegional {

/*!
 * \class QtAws::WafRegional::WafRegionalClient
 * \brief The WafRegionalClient class provides access to the AWS WAF Regional service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWafRegional
 *
 *  <note>
 * 
 *  This is <b>AWS WAF Classic Regional</b> documentation. For more information, see <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 *  developer
 * 
 *  guide>
 * 
 *  <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 *  latest version, AWS WAF has a single set of endpoints for regional and global use.
 * 
 *  </p </note>
 * 
 *  This is the <i>AWS WAF Regional Classic API Reference</i> for using AWS WAF Classic with the AWS resources, Elastic Load
 *  Balancing (ELB) Application Load Balancers and API Gateway APIs. The AWS WAF Classic actions and data types listed in
 *  the reference are available for protecting Elastic Load Balancing (ELB) Application Load Balancers and API Gateway APIs.
 *  You can use these actions and data types by means of the endpoints listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 *  for developers who need detailed information about the AWS WAF Classic API actions, data types, and errors. For detailed
 *  information about AWS WAF Classic features and an overview of how to use the AWS WAF Classic API, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 *  developer
 */

/*!
 * \brief Constructs a WafRegionalClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
WafRegionalClient::WafRegionalClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new WafRegionalClientPrivate(this), parent)
{
    Q_D(WafRegionalClient);
    d->apiVersion = QStringLiteral("2016-11-28");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("waf-regional");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS WAF Regional");
    d->serviceName = QStringLiteral("waf-regional");
}

/*!
 * \overload WafRegionalClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
WafRegionalClient::WafRegionalClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new WafRegionalClientPrivate(this), parent)
{
    Q_D(WafRegionalClient);
    d->apiVersion = QStringLiteral("2016-11-28");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("waf-regional");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS WAF Regional");
    d->serviceName = QStringLiteral("waf-regional");
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * AssociateWebACLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic Regional</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Associates a web ACL with a resource, either an application load balancer or Amazon API Gateway
 */
AssociateWebACLResponse * WafRegionalClient::associateWebACL(const AssociateWebACLRequest &request)
{
    return qobject_cast<AssociateWebACLResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * CreateByteMatchSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
CreateByteMatchSetResponse * WafRegionalClient::createByteMatchSet(const CreateByteMatchSetRequest &request)
{
    return qobject_cast<CreateByteMatchSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * CreateGeoMatchSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
CreateGeoMatchSetResponse * WafRegionalClient::createGeoMatchSet(const CreateGeoMatchSetRequest &request)
{
    return qobject_cast<CreateGeoMatchSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * CreateIPSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Creates an <a>IPSet</a>, which you use to specify which web requests that you want to allow or block based on the IP
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
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
CreateIPSetResponse * WafRegionalClient::createIPSet(const CreateIPSetRequest &request)
{
    return qobject_cast<CreateIPSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * CreateRateBasedRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Creates a <a>RateBasedRule</a>. The <code>RateBasedRule</code> contains a <code>RateLimit</code>, which specifies the
 * maximum number of requests that AWS WAF allows from a specified IP address in a five-minute period. The
 * <code>RateBasedRule</code> also contains the <code>IPSet</code> objects, <code>ByteMatchSet</code> objects, and other
 * predicates that identify the requests that you want to count or block if these requests exceed the
 *
 * <code>RateLimit</code>>
 *
 * If you add more than one predicate to a <code>RateBasedRule</code>, a request not only must exceed the
 * <code>RateLimit</code>, but it also must match all the conditions to be counted or blocked. For example, suppose you add
 * the following to a
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
 * 1,000>
 *
 * You then add the <code>RateBasedRule</code> to a <code>WebACL</code> and specify that you want to block requests that
 * meet the conditions in the rule. For a request to be blocked, it must come from the IP address 192.0.2.44 <i>and</i> the
 * <code>User-Agent</code> header in the request must contain the value <code>BadBot</code>. Further, requests that match
 * these two conditions must be received at a rate of more than 1,000 requests every five minutes. If both conditions are
 * met and the rate is exceeded, AWS WAF blocks the requests. If the rate drops below 1,000 for a five-minute period, AWS
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
 * 1,000>
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
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
CreateRateBasedRuleResponse * WafRegionalClient::createRateBasedRule(const CreateRateBasedRuleRequest &request)
{
    return qobject_cast<CreateRateBasedRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * CreateRegexMatchSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
CreateRegexMatchSetResponse * WafRegionalClient::createRegexMatchSet(const CreateRegexMatchSetRequest &request)
{
    return qobject_cast<CreateRegexMatchSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * CreateRegexPatternSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
CreateRegexPatternSetResponse * WafRegionalClient::createRegexPatternSet(const CreateRegexPatternSetRequest &request)
{
    return qobject_cast<CreateRegexPatternSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * CreateRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Creates a <code>Rule</code>, which contains the <code>IPSet</code> objects, <code>ByteMatchSet</code> objects, and other
 * predicates that identify the requests that you want to block. If you add more than one predicate to a <code>Rule</code>,
 * a request must match all of the specifications to be allowed or blocked. For example, suppose that you add the following
 * to a
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
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
CreateRuleResponse * WafRegionalClient::createRule(const CreateRuleRequest &request)
{
    return qobject_cast<CreateRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * CreateRuleGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
CreateRuleGroupResponse * WafRegionalClient::createRuleGroup(const CreateRuleGroupRequest &request)
{
    return qobject_cast<CreateRuleGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * CreateSizeConstraintSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
CreateSizeConstraintSetResponse * WafRegionalClient::createSizeConstraintSet(const CreateSizeConstraintSetRequest &request)
{
    return qobject_cast<CreateSizeConstraintSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * CreateSqlInjectionMatchSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
CreateSqlInjectionMatchSetResponse * WafRegionalClient::createSqlInjectionMatchSet(const CreateSqlInjectionMatchSetRequest &request)
{
    return qobject_cast<CreateSqlInjectionMatchSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * CreateWebACLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
CreateWebACLResponse * WafRegionalClient::createWebACL(const CreateWebACLRequest &request)
{
    return qobject_cast<CreateWebACLResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * CreateWebACLMigrationStackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an AWS CloudFormation WAFV2 template for the specified web ACL in the specified Amazon S3 bucket. Then, in
 * CloudFormation, you create a stack from the template, to create the web ACL and its resources in AWS WAFV2. Use this to
 * migrate your AWS WAF Classic web ACL to the latest version of AWS
 *
 * WAF>
 *
 * This is part of a larger migration procedure for web ACLs from AWS WAF Classic to the latest version of AWS WAF. For the
 * full procedure, including caveats and manual steps to complete the migration and switch over to the new web ACL, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-migrating-from-classic.html">Migrating your AWS WAF
 * Classic resources to AWS WAF</a> in the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>.
 */
CreateWebACLMigrationStackResponse * WafRegionalClient::createWebACLMigrationStack(const CreateWebACLMigrationStackRequest &request)
{
    return qobject_cast<CreateWebACLMigrationStackResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * CreateXssMatchSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
CreateXssMatchSetResponse * WafRegionalClient::createXssMatchSet(const CreateXssMatchSetRequest &request)
{
    return qobject_cast<CreateXssMatchSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * DeleteByteMatchSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 */
DeleteByteMatchSetResponse * WafRegionalClient::deleteByteMatchSet(const DeleteByteMatchSetRequest &request)
{
    return qobject_cast<DeleteByteMatchSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * DeleteGeoMatchSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 */
DeleteGeoMatchSetResponse * WafRegionalClient::deleteGeoMatchSet(const DeleteGeoMatchSetRequest &request)
{
    return qobject_cast<DeleteGeoMatchSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * DeleteIPSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 */
DeleteIPSetResponse * WafRegionalClient::deleteIPSet(const DeleteIPSetRequest &request)
{
    return qobject_cast<DeleteIPSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * DeleteLoggingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Permanently deletes the <a>LoggingConfiguration</a> from the specified web
 */
DeleteLoggingConfigurationResponse * WafRegionalClient::deleteLoggingConfiguration(const DeleteLoggingConfigurationRequest &request)
{
    return qobject_cast<DeleteLoggingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * DeletePermissionPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Permanently deletes an IAM policy from the specified
 *
 * RuleGroup>
 *
 * The user making the request must be the owner of the
 */
DeletePermissionPolicyResponse * WafRegionalClient::deletePermissionPolicy(const DeletePermissionPolicyRequest &request)
{
    return qobject_cast<DeletePermissionPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * DeleteRateBasedRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 */
DeleteRateBasedRuleResponse * WafRegionalClient::deleteRateBasedRule(const DeleteRateBasedRuleRequest &request)
{
    return qobject_cast<DeleteRateBasedRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * DeleteRegexMatchSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 */
DeleteRegexMatchSetResponse * WafRegionalClient::deleteRegexMatchSet(const DeleteRegexMatchSetRequest &request)
{
    return qobject_cast<DeleteRegexMatchSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * DeleteRegexPatternSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Permanently deletes a <a>RegexPatternSet</a>. You can't delete a <code>RegexPatternSet</code> if it's still used in any
 * <code>RegexMatchSet</code> or if the <code>RegexPatternSet</code> is not empty.
 */
DeleteRegexPatternSetResponse * WafRegionalClient::deleteRegexPatternSet(const DeleteRegexPatternSetRequest &request)
{
    return qobject_cast<DeleteRegexPatternSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * DeleteRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 */
DeleteRuleResponse * WafRegionalClient::deleteRule(const DeleteRuleRequest &request)
{
    return qobject_cast<DeleteRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * DeleteRuleGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 */
DeleteRuleGroupResponse * WafRegionalClient::deleteRuleGroup(const DeleteRuleGroupRequest &request)
{
    return qobject_cast<DeleteRuleGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * DeleteSizeConstraintSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 */
DeleteSizeConstraintSetResponse * WafRegionalClient::deleteSizeConstraintSet(const DeleteSizeConstraintSetRequest &request)
{
    return qobject_cast<DeleteSizeConstraintSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * DeleteSqlInjectionMatchSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 */
DeleteSqlInjectionMatchSetResponse * WafRegionalClient::deleteSqlInjectionMatchSet(const DeleteSqlInjectionMatchSetRequest &request)
{
    return qobject_cast<DeleteSqlInjectionMatchSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * DeleteWebACLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 */
DeleteWebACLResponse * WafRegionalClient::deleteWebACL(const DeleteWebACLRequest &request)
{
    return qobject_cast<DeleteWebACLResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * DeleteXssMatchSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 */
DeleteXssMatchSetResponse * WafRegionalClient::deleteXssMatchSet(const DeleteXssMatchSetRequest &request)
{
    return qobject_cast<DeleteXssMatchSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * DisassociateWebACLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic Regional</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Removes a web ACL from the specified resource, either an application load balancer or Amazon API Gateway
 */
DisassociateWebACLResponse * WafRegionalClient::disassociateWebACL(const DisassociateWebACLRequest &request)
{
    return qobject_cast<DisassociateWebACLResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * GetByteMatchSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns the <a>ByteMatchSet</a> specified by
 */
GetByteMatchSetResponse * WafRegionalClient::getByteMatchSet(const GetByteMatchSetRequest &request)
{
    return qobject_cast<GetByteMatchSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * GetChangeTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 */
GetChangeTokenResponse * WafRegionalClient::getChangeToken(const GetChangeTokenRequest &request)
{
    return qobject_cast<GetChangeTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * GetChangeTokenStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 * <code>INSYNC</code>: Propagation is
 */
GetChangeTokenStatusResponse * WafRegionalClient::getChangeTokenStatus(const GetChangeTokenStatusRequest &request)
{
    return qobject_cast<GetChangeTokenStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * GetGeoMatchSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns the <a>GeoMatchSet</a> that is specified by
 */
GetGeoMatchSetResponse * WafRegionalClient::getGeoMatchSet(const GetGeoMatchSetRequest &request)
{
    return qobject_cast<GetGeoMatchSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * GetIPSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns the <a>IPSet</a> that is specified by
 */
GetIPSetResponse * WafRegionalClient::getIPSet(const GetIPSetRequest &request)
{
    return qobject_cast<GetIPSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * GetLoggingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns the <a>LoggingConfiguration</a> for the specified web
 */
GetLoggingConfigurationResponse * WafRegionalClient::getLoggingConfiguration(const GetLoggingConfigurationRequest &request)
{
    return qobject_cast<GetLoggingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * GetPermissionPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns the IAM policy attached to the
 */
GetPermissionPolicyResponse * WafRegionalClient::getPermissionPolicy(const GetPermissionPolicyRequest &request)
{
    return qobject_cast<GetPermissionPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * GetRateBasedRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns the <a>RateBasedRule</a> that is specified by the <code>RuleId</code> that you included in the
 * <code>GetRateBasedRule</code>
 */
GetRateBasedRuleResponse * WafRegionalClient::getRateBasedRule(const GetRateBasedRuleRequest &request)
{
    return qobject_cast<GetRateBasedRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * GetRateBasedRuleManagedKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns an array of IP addresses currently being blocked by the <a>RateBasedRule</a> that is specified by the
 * <code>RuleId</code>. The maximum number of managed keys that will be blocked is 10,000. If more than 10,000 addresses
 * exceed the rate limit, the 10,000 addresses with the highest rates will be
 */
GetRateBasedRuleManagedKeysResponse * WafRegionalClient::getRateBasedRuleManagedKeys(const GetRateBasedRuleManagedKeysRequest &request)
{
    return qobject_cast<GetRateBasedRuleManagedKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * GetRegexMatchSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns the <a>RegexMatchSet</a> specified by
 */
GetRegexMatchSetResponse * WafRegionalClient::getRegexMatchSet(const GetRegexMatchSetRequest &request)
{
    return qobject_cast<GetRegexMatchSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * GetRegexPatternSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns the <a>RegexPatternSet</a> specified by
 */
GetRegexPatternSetResponse * WafRegionalClient::getRegexPatternSet(const GetRegexPatternSetRequest &request)
{
    return qobject_cast<GetRegexPatternSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * GetRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns the <a>Rule</a> that is specified by the <code>RuleId</code> that you included in the <code>GetRule</code>
 */
GetRuleResponse * WafRegionalClient::getRule(const GetRuleRequest &request)
{
    return qobject_cast<GetRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * GetRuleGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns the <a>RuleGroup</a> that is specified by the <code>RuleGroupId</code> that you included in the
 * <code>GetRuleGroup</code>
 *
 * request>
 *
 * To view the rules in a rule group, use
 */
GetRuleGroupResponse * WafRegionalClient::getRuleGroup(const GetRuleGroupRequest &request)
{
    return qobject_cast<GetRuleGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * GetSampledRequestsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
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
GetSampledRequestsResponse * WafRegionalClient::getSampledRequests(const GetSampledRequestsRequest &request)
{
    return qobject_cast<GetSampledRequestsResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * GetSizeConstraintSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns the <a>SizeConstraintSet</a> specified by
 */
GetSizeConstraintSetResponse * WafRegionalClient::getSizeConstraintSet(const GetSizeConstraintSetRequest &request)
{
    return qobject_cast<GetSizeConstraintSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * GetSqlInjectionMatchSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns the <a>SqlInjectionMatchSet</a> that is specified by
 */
GetSqlInjectionMatchSetResponse * WafRegionalClient::getSqlInjectionMatchSet(const GetSqlInjectionMatchSetRequest &request)
{
    return qobject_cast<GetSqlInjectionMatchSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * GetWebACLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns the <a>WebACL</a> that is specified by
 */
GetWebACLResponse * WafRegionalClient::getWebACL(const GetWebACLRequest &request)
{
    return qobject_cast<GetWebACLResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * GetWebACLForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic Regional</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns the web ACL for the specified resource, either an application load balancer or Amazon API Gateway
 */
GetWebACLForResourceResponse * WafRegionalClient::getWebACLForResource(const GetWebACLForResourceRequest &request)
{
    return qobject_cast<GetWebACLForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * GetXssMatchSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns the <a>XssMatchSet</a> that is specified by
 */
GetXssMatchSetResponse * WafRegionalClient::getXssMatchSet(const GetXssMatchSetRequest &request)
{
    return qobject_cast<GetXssMatchSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * ListActivatedRulesInRuleGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns an array of <a>ActivatedRule</a>
 */
ListActivatedRulesInRuleGroupResponse * WafRegionalClient::listActivatedRulesInRuleGroup(const ListActivatedRulesInRuleGroupRequest &request)
{
    return qobject_cast<ListActivatedRulesInRuleGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * ListByteMatchSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns an array of <a>ByteMatchSetSummary</a>
 */
ListByteMatchSetsResponse * WafRegionalClient::listByteMatchSets(const ListByteMatchSetsRequest &request)
{
    return qobject_cast<ListByteMatchSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * ListGeoMatchSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns an array of <a>GeoMatchSetSummary</a> objects in the
 */
ListGeoMatchSetsResponse * WafRegionalClient::listGeoMatchSets(const ListGeoMatchSetsRequest &request)
{
    return qobject_cast<ListGeoMatchSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * ListIPSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns an array of <a>IPSetSummary</a> objects in the
 */
ListIPSetsResponse * WafRegionalClient::listIPSets(const ListIPSetsRequest &request)
{
    return qobject_cast<ListIPSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * ListLoggingConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns an array of <a>LoggingConfiguration</a>
 */
ListLoggingConfigurationsResponse * WafRegionalClient::listLoggingConfigurations(const ListLoggingConfigurationsRequest &request)
{
    return qobject_cast<ListLoggingConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * ListRateBasedRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns an array of <a>RuleSummary</a>
 */
ListRateBasedRulesResponse * WafRegionalClient::listRateBasedRules(const ListRateBasedRulesRequest &request)
{
    return qobject_cast<ListRateBasedRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * ListRegexMatchSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns an array of <a>RegexMatchSetSummary</a>
 */
ListRegexMatchSetsResponse * WafRegionalClient::listRegexMatchSets(const ListRegexMatchSetsRequest &request)
{
    return qobject_cast<ListRegexMatchSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * ListRegexPatternSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns an array of <a>RegexPatternSetSummary</a>
 */
ListRegexPatternSetsResponse * WafRegionalClient::listRegexPatternSets(const ListRegexPatternSetsRequest &request)
{
    return qobject_cast<ListRegexPatternSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * ListResourcesForWebACLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic Regional</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns an array of resources associated with the specified web
 */
ListResourcesForWebACLResponse * WafRegionalClient::listResourcesForWebACL(const ListResourcesForWebACLRequest &request)
{
    return qobject_cast<ListResourcesForWebACLResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * ListRuleGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns an array of <a>RuleGroup</a>
 */
ListRuleGroupsResponse * WafRegionalClient::listRuleGroups(const ListRuleGroupsRequest &request)
{
    return qobject_cast<ListRuleGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * ListRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns an array of <a>RuleSummary</a>
 */
ListRulesResponse * WafRegionalClient::listRules(const ListRulesRequest &request)
{
    return qobject_cast<ListRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * ListSizeConstraintSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns an array of <a>SizeConstraintSetSummary</a>
 */
ListSizeConstraintSetsResponse * WafRegionalClient::listSizeConstraintSets(const ListSizeConstraintSetsRequest &request)
{
    return qobject_cast<ListSizeConstraintSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * ListSqlInjectionMatchSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns an array of <a>SqlInjectionMatchSet</a>
 */
ListSqlInjectionMatchSetsResponse * WafRegionalClient::listSqlInjectionMatchSets(const ListSqlInjectionMatchSetsRequest &request)
{
    return qobject_cast<ListSqlInjectionMatchSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * ListSubscribedRuleGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns an array of <a>RuleGroup</a> objects that you are subscribed
 */
ListSubscribedRuleGroupsResponse * WafRegionalClient::listSubscribedRuleGroups(const ListSubscribedRuleGroupsRequest &request)
{
    return qobject_cast<ListSubscribedRuleGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Retrieves the tags associated with the specified AWS resource. Tags are key:value pairs that you can use to categorize
 * and manage your resources, for purposes like billing. For example, you might set the tag key to "customer" and the value
 * to the customer name or ID. You can specify one or more tags to add to each AWS resource, up to 50 tags for a
 *
 * resource>
 *
 * Tagging is only available through the API, SDKs, and CLI. You can't manage or view tags through the AWS WAF Classic
 * console. You can tag the AWS resources that you manage through AWS WAF Classic: web ACLs, rule groups, and rules.
 */
ListTagsForResourceResponse * WafRegionalClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * ListWebACLsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns an array of <a>WebACLSummary</a> objects in the
 */
ListWebACLsResponse * WafRegionalClient::listWebACLs(const ListWebACLsRequest &request)
{
    return qobject_cast<ListWebACLsResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * ListXssMatchSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Returns an array of <a>XssMatchSet</a>
 */
ListXssMatchSetsResponse * WafRegionalClient::listXssMatchSets(const ListXssMatchSetsRequest &request)
{
    return qobject_cast<ListXssMatchSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * PutLoggingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Associates a <a>LoggingConfiguration</a> with a specified web
 *
 * ACL>
 *
 * You can access information about all traffic that AWS WAF inspects using the following
 *
 * steps> <ol> <li>
 *
 * Create an Amazon Kinesis Data Firehose.
 *
 * </p
 *
 * Create the data firehose with a PUT source and in the region that you are operating. However, if you are capturing logs
 * for Amazon CloudFront, always create the firehose in US East (N. Virginia).
 *
 * </p <note>
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
PutLoggingConfigurationResponse * WafRegionalClient::putLoggingConfiguration(const PutLoggingConfigurationRequest &request)
{
    return qobject_cast<PutLoggingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * PutPermissionPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Attaches an IAM policy to the specified resource. The only supported use for this action is to share a RuleGroup across
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
 * The <code>Action</code> in the policy must be <code>waf:UpdateWebACL</code>, <code>waf-regional:UpdateWebACL</code>,
 * <code>waf:GetRuleGroup</code> and <code>waf-regional:GetRuleGroup</code> . Any extra or wildcard actions in the policy
 * will be
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
 */
PutPermissionPolicyResponse * WafRegionalClient::putPermissionPolicy(const PutPermissionPolicyRequest &request)
{
    return qobject_cast<PutPermissionPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Associates tags with the specified AWS resource. Tags are key:value pairs that you can use to categorize and manage your
 * resources, for purposes like billing. For example, you might set the tag key to "customer" and the value to the customer
 * name or ID. You can specify one or more tags to add to each AWS resource, up to 50 tags for a
 *
 * resource>
 *
 * Tagging is only available through the API, SDKs, and CLI. You can't manage or view tags through the AWS WAF Classic
 * console. You can use this action to tag the AWS resources that you manage through AWS WAF Classic: web ACLs, rule
 * groups, and rules.
 */
TagResourceResponse * WafRegionalClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 */
UntagResourceResponse * WafRegionalClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * UpdateByteMatchSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
UpdateByteMatchSetResponse * WafRegionalClient::updateByteMatchSet(const UpdateByteMatchSetRequest &request)
{
    return qobject_cast<UpdateByteMatchSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * UpdateGeoMatchSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
UpdateGeoMatchSetResponse * WafRegionalClient::updateGeoMatchSet(const UpdateGeoMatchSetRequest &request)
{
    return qobject_cast<UpdateGeoMatchSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * UpdateIPSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 * AWS WAF supports IPv4 address ranges: /8 and any range between /16 through /32. AWS WAF supports IPv6 address ranges:
 * /24, /32, /48, /56, /64, and /128. For more information about CIDR notation, see the Wikipedia entry <a
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
 * You can insert a maximum of 1000 addresses in a single
 *
 * request>
 *
 * For more information about how to use the AWS WAF API to allow or block HTTP requests, see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
UpdateIPSetResponse * WafRegionalClient::updateIPSet(const UpdateIPSetRequest &request)
{
    return qobject_cast<UpdateIPSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * UpdateRateBasedRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 * 1,000>
 *
 * You then add the <code>RateBasedRule</code> to a <code>WebACL</code> and specify that you want to block requests that
 * satisfy the rule. For a request to be blocked, it must come from the IP address 192.0.2.44 <i>and</i> the
 * <code>User-Agent</code> header in the request must contain the value <code>BadBot</code>. Further, requests that match
 * these two conditions much be received at a rate of more than 1,000 every five minutes. If the rate drops below this
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
 * 1,000>
 *
 * By adding this <code>RateBasedRule</code> to a <code>WebACL</code>, you could limit requests to your login page without
 * affecting the rest of your
 */
UpdateRateBasedRuleResponse * WafRegionalClient::updateRateBasedRule(const UpdateRateBasedRuleRequest &request)
{
    return qobject_cast<UpdateRateBasedRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * UpdateRegexMatchSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
UpdateRegexMatchSetResponse * WafRegionalClient::updateRegexMatchSet(const UpdateRegexMatchSetRequest &request)
{
    return qobject_cast<UpdateRegexMatchSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * UpdateRegexPatternSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
UpdateRegexPatternSetResponse * WafRegionalClient::updateRegexPatternSet(const UpdateRegexPatternSetRequest &request)
{
    return qobject_cast<UpdateRegexPatternSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * UpdateRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Inserts or deletes <a>Predicate</a> objects in a <code>Rule</code>. Each <code>Predicate</code> object identifies a
 * predicate, such as a <a>ByteMatchSet</a> or an <a>IPSet</a>, that specifies the web requests that you want to allow,
 * block, or count. If you add more than one predicate to a <code>Rule</code>, a request must match all of the
 * specifications to be allowed, blocked, or counted. For example, suppose that you add the following to a
 * <code>Rule</code>:
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
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
UpdateRuleResponse * WafRegionalClient::updateRule(const UpdateRuleRequest &request)
{
    return qobject_cast<UpdateRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * UpdateRuleGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
UpdateRuleGroupResponse * WafRegionalClient::updateRuleGroup(const UpdateRuleGroupRequest &request)
{
    return qobject_cast<UpdateRuleGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * UpdateSizeConstraintSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 * WAF>
 *
 * You can only specify a single type of
 *
 * TextTransformation> </li> <li>
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
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
UpdateSizeConstraintSetResponse * WafRegionalClient::updateSizeConstraintSet(const UpdateSizeConstraintSetRequest &request)
{
    return qobject_cast<UpdateSizeConstraintSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * UpdateSqlInjectionMatchSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 * a header or custom query parameter, the name of the header or
 *
 * parameter> </li> <li>
 *
 * <code>TextTransformation</code>: Which text transformation, if any, to perform on the web request before inspecting the
 * request for snippets of malicious SQL
 *
 * code>
 *
 * You can only specify a single type of
 *
 * TextTransformation> </li> </ul>
 *
 * You use <code>SqlInjectionMatchSet</code> objects to specify which CloudFront requests that you want to allow, block, or
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
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
UpdateSqlInjectionMatchSetResponse * WafRegionalClient::updateSqlInjectionMatchSet(const UpdateSqlInjectionMatchSetRequest &request)
{
    return qobject_cast<UpdateSqlInjectionMatchSetResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * UpdateWebACLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
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
 * The <code>Rules</code> that you want to add or delete. If you want to replace one <code>Rule</code> with another, you
 * delete the existing <code>Rule</code> and add the new
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
 * is evaluated first.) When a web request matches all the predicates (such as <code>ByteMatchSets</code> and
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
 * </p
 *
 * The <code>ActivatedRule</code> can be a rule group. If you specify a rule group as your <code>ActivatedRule</code> , you
 * can exclude specific rules from that rule
 *
 * group>
 *
 * If you already have a rule group associated with a web ACL and want to submit an <code>UpdateWebACL</code> request to
 * exclude certain rules from that rule group, you must first remove the rule group from the web ACL, the re-insert it
 * again, specifying the excluded rules. For details, see <a>ActivatedRule$ExcludedRules</a> .
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
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
UpdateWebACLResponse * WafRegionalClient::updateWebACL(const UpdateWebACLRequest &request)
{
    return qobject_cast<UpdateWebACLResponse *>(send(request));
}

/*!
 * Sends \a request to the WafRegionalClient service, and returns a pointer to an
 * UpdateXssMatchSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <note>
 *
 * This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 * developer
 *
 * guide>
 *
 * <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 * latest version, AWS WAF has a single set of endpoints for regional and global use.
 *
 * </p </note>
 *
 * Inserts or deletes <a>XssMatchTuple</a> objects (filters) in an <a>XssMatchSet</a>. For each <code>XssMatchTuple</code>
 * object, you specify the following
 *
 * values> <ul> <li>
 *
 * <code>Action</code>: Whether to insert the object into or delete the object from the array. To change an
 * <code>XssMatchTuple</code>, you delete the existing object and add a new
 *
 * one> </li> <li>
 *
 * <code>FieldToMatch</code>: The part of web requests that you want AWS WAF to inspect and, if you want AWS WAF to inspect
 * a header or custom query parameter, the name of the header or
 *
 * parameter> </li> <li>
 *
 * <code>TextTransformation</code>: Which text transformation, if any, to perform on the web request before inspecting the
 * request for cross-site scripting
 *
 * attacks>
 *
 * You can only specify a single type of
 *
 * TextTransformation> </li> </ul>
 *
 * You use <code>XssMatchSet</code> objects to specify which CloudFront requests that you want to allow, block, or count.
 * For example, if you're receiving requests that contain cross-site scripting attacks in the request body and you want to
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
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 */
UpdateXssMatchSetResponse * WafRegionalClient::updateXssMatchSet(const UpdateXssMatchSetRequest &request)
{
    return qobject_cast<UpdateXssMatchSetResponse *>(send(request));
}

/*!
 * \class QtAws::WafRegional::WafRegionalClientPrivate
 * \brief The WafRegionalClientPrivate class provides private implementation for WafRegionalClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWafRegional
 */

/*!
 * Constructs a WafRegionalClientPrivate object with public implementation \a q.
 */
WafRegionalClientPrivate::WafRegionalClientPrivate(WafRegionalClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace WafRegional
} // namespace QtAws
