/*
    Copyright 2013-2020 Paul Colby

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

#include "listresourcesforwebaclresponse.h"
#include "listresourcesforwebaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::ListResourcesForWebACLResponse
 * \brief The ListResourcesForWebACLResponse class provides an interace for WAFRegional ListResourcesForWebACL responses.
 *
 * \inmodule QtAwsWAFRegional
 *
 *  This is the <i>AWS WAF Regional API Reference</i> for using AWS WAF with Elastic Load Balancing (ELB) Application Load
 *  Balancers. The AWS WAF actions and data types listed in the reference are available for protecting Application Load
 *  Balancers. You can use these actions and data types by means of the endpoints listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 *  for developers who need detailed information about the AWS WAF API actions, data types, and errors. For detailed
 *  information about AWS WAF features and an overview of how to use the AWS WAF API, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFRegionalClient::listResourcesForWebACL
 */

/*!
 * Constructs a ListResourcesForWebACLResponse object for \a reply to \a request, with parent \a parent.
 */
ListResourcesForWebACLResponse::ListResourcesForWebACLResponse(
        const ListResourcesForWebACLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new ListResourcesForWebACLResponsePrivate(this), parent)
{
    setRequest(new ListResourcesForWebACLRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResourcesForWebACLRequest * ListResourcesForWebACLResponse::request() const
{
    Q_D(const ListResourcesForWebACLResponse);
    return static_cast<const ListResourcesForWebACLRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAFRegional ListResourcesForWebACL \a response.
 */
void ListResourcesForWebACLResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListResourcesForWebACLResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAFRegional::ListResourcesForWebACLResponsePrivate
 * \brief The ListResourcesForWebACLResponsePrivate class provides private implementation for ListResourcesForWebACLResponse.
 * \internal
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a ListResourcesForWebACLResponsePrivate object with public implementation \a q.
 */
ListResourcesForWebACLResponsePrivate::ListResourcesForWebACLResponsePrivate(
    ListResourcesForWebACLResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/*!
 * Parses a WAFRegional ListResourcesForWebACL response element from \a xml.
 */
void ListResourcesForWebACLResponsePrivate::parseListResourcesForWebACLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourcesForWebACLResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WAFRegional
} // namespace QtAws
