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

#include "listsubscribedrulegroupsresponse.h"
#include "listsubscribedrulegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::ListSubscribedRuleGroupsResponse
 * \brief The ListSubscribedRuleGroupsResponse class provides an interace for WAFRegional ListSubscribedRuleGroups responses.
 *
 * \inmodule QtAwsWAFRegional
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
 *
 * \sa WAFRegionalClient::listSubscribedRuleGroups
 */

/*!
 * Constructs a ListSubscribedRuleGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSubscribedRuleGroupsResponse::ListSubscribedRuleGroupsResponse(
        const ListSubscribedRuleGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new ListSubscribedRuleGroupsResponsePrivate(this), parent)
{
    setRequest(new ListSubscribedRuleGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSubscribedRuleGroupsRequest * ListSubscribedRuleGroupsResponse::request() const
{
    Q_D(const ListSubscribedRuleGroupsResponse);
    return static_cast<const ListSubscribedRuleGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAFRegional ListSubscribedRuleGroups \a response.
 */
void ListSubscribedRuleGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSubscribedRuleGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAFRegional::ListSubscribedRuleGroupsResponsePrivate
 * \brief The ListSubscribedRuleGroupsResponsePrivate class provides private implementation for ListSubscribedRuleGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a ListSubscribedRuleGroupsResponsePrivate object with public implementation \a q.
 */
ListSubscribedRuleGroupsResponsePrivate::ListSubscribedRuleGroupsResponsePrivate(
    ListSubscribedRuleGroupsResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/*!
 * Parses a WAFRegional ListSubscribedRuleGroups response element from \a xml.
 */
void ListSubscribedRuleGroupsResponsePrivate::parseListSubscribedRuleGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSubscribedRuleGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WAFRegional
} // namespace QtAws
