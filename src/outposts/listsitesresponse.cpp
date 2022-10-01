// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
