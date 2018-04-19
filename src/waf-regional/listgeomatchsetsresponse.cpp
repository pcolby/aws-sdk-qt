/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listgeomatchsetsresponse.h"
#include "listgeomatchsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::ListGeoMatchSetsResponse
 * \brief The ListGeoMatchSetsResponse class provides an interace for WAFRegional ListGeoMatchSets responses.
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
 * \sa WAFRegionalClient::listGeoMatchSets
 */

/*!
 * Constructs a ListGeoMatchSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListGeoMatchSetsResponse::ListGeoMatchSetsResponse(
        const ListGeoMatchSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new ListGeoMatchSetsResponsePrivate(this), parent)
{
    setRequest(new ListGeoMatchSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGeoMatchSetsRequest * ListGeoMatchSetsResponse::request() const
{
    Q_D(const ListGeoMatchSetsResponse);
    return static_cast<const ListGeoMatchSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAFRegional ListGeoMatchSets \a response.
 */
void ListGeoMatchSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListGeoMatchSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAFRegional::ListGeoMatchSetsResponsePrivate
 * \brief The ListGeoMatchSetsResponsePrivate class provides private implementation for ListGeoMatchSetsResponse.
 * \internal
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a ListGeoMatchSetsResponsePrivate object with public implementation \a q.
 */
ListGeoMatchSetsResponsePrivate::ListGeoMatchSetsResponsePrivate(
    ListGeoMatchSetsResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/*!
 * Parses a WAFRegional ListGeoMatchSets response element from \a xml.
 */
void ListGeoMatchSetsResponsePrivate::parseListGeoMatchSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGeoMatchSetsResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace QtAws
