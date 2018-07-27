/*
    Copyright 2013-2018 Paul Colby

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

#include "listbytematchsetsresponse.h"
#include "listbytematchsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::ListByteMatchSetsResponse
 * \brief The ListByteMatchSetsResponse class provides an interace for WAFRegional ListByteMatchSets responses.
 *
 * \inmodule QtAwsWAFRegional
 *
 *  This is the <i>AWS WAF Regional API Reference</i> for using AWS WAF with Elastic Load Balancing (ELB) Application Load
 *  Balancers. The AWS WAF actions and data types listed in the reference are available for protecting Application Load
 *  Balancers. You can use these actions and data types by means of the endpoints listed in <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 *  for developers who need detailed information about the AWS WAF API actions, data types, and errors. For detailed
 *  information about AWS WAF features and an overview of how to use the AWS WAF API, see the <a
 *  href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFRegionalClient::listByteMatchSets
 */

/*!
 * Constructs a ListByteMatchSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListByteMatchSetsResponse::ListByteMatchSetsResponse(
        const ListByteMatchSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new ListByteMatchSetsResponsePrivate(this), parent)
{
    setRequest(new ListByteMatchSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListByteMatchSetsRequest * ListByteMatchSetsResponse::request() const
{
    Q_D(const ListByteMatchSetsResponse);
    return static_cast<const ListByteMatchSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAFRegional ListByteMatchSets \a response.
 */
void ListByteMatchSetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListByteMatchSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAFRegional::ListByteMatchSetsResponsePrivate
 * \brief The ListByteMatchSetsResponsePrivate class provides private implementation for ListByteMatchSetsResponse.
 * \internal
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a ListByteMatchSetsResponsePrivate object with public implementation \a q.
 */
ListByteMatchSetsResponsePrivate::ListByteMatchSetsResponsePrivate(
    ListByteMatchSetsResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/*!
 * Parses a WAFRegional ListByteMatchSets response element from \a xml.
 */
void ListByteMatchSetsResponsePrivate::parseListByteMatchSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListByteMatchSetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WAFRegional
} // namespace QtAws
