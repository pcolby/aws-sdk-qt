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

#include "listwebaclsresponse.h"
#include "listwebaclsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFV2 {

/*!
 * \class QtAws::WAFV2::ListWebACLsResponse
 * \brief The ListWebACLsResponse class provides an interace for WAFV2 ListWebACLs responses.
 *
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
 *
 * \sa Wafv2Client::listWebACLs
 */

/*!
 * Constructs a ListWebACLsResponse object for \a reply to \a request, with parent \a parent.
 */
ListWebACLsResponse::ListWebACLsResponse(
        const ListWebACLsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Wafv2Response(new ListWebACLsResponsePrivate(this), parent)
{
    setRequest(new ListWebACLsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWebACLsRequest * ListWebACLsResponse::request() const
{
    return static_cast<const ListWebACLsRequest *>(Wafv2Response::request());
}

/*!
 * \reimp
 * Parses a successful WAFV2 ListWebACLs \a response.
 */
void ListWebACLsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWebACLsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAFV2::ListWebACLsResponsePrivate
 * \brief The ListWebACLsResponsePrivate class provides private implementation for ListWebACLsResponse.
 * \internal
 *
 * \inmodule QtAwsWAFV2
 */

/*!
 * Constructs a ListWebACLsResponsePrivate object with public implementation \a q.
 */
ListWebACLsResponsePrivate::ListWebACLsResponsePrivate(
    ListWebACLsResponse * const q) : Wafv2ResponsePrivate(q)
{

}

/*!
 * Parses a WAFV2 ListWebACLs response element from \a xml.
 */
void ListWebACLsResponsePrivate::parseListWebACLsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWebACLsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WAFV2
} // namespace QtAws
