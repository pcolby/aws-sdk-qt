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

#include "listsitesresponse.h"
#include "listsitesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::ListSitesResponse
 * \brief The ListSitesResponse class provides an interace for Outposts ListSites responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::listSites
 */

/*!
 * Constructs a ListSitesResponse object for \a reply to \a request, with parent \a parent.
 */
ListSitesResponse::ListSitesResponse(
        const ListSitesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new ListSitesResponsePrivate(this), parent)
{
    setRequest(new ListSitesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSitesRequest * ListSitesResponse::request() const
{
    Q_D(const ListSitesResponse);
    return static_cast<const ListSitesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Outposts ListSites \a response.
 */
void ListSitesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSitesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::ListSitesResponsePrivate
 * \brief The ListSitesResponsePrivate class provides private implementation for ListSitesResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a ListSitesResponsePrivate object with public implementation \a q.
 */
ListSitesResponsePrivate::ListSitesResponsePrivate(
    ListSitesResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts ListSites response element from \a xml.
 */
void ListSitesResponsePrivate::parseListSitesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSitesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
