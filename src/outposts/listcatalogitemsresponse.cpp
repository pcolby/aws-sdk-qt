// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcatalogitemsresponse.h"
#include "listcatalogitemsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::ListCatalogItemsResponse
 * \brief The ListCatalogItemsResponse class provides an interace for Outposts ListCatalogItems responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::listCatalogItems
 */

/*!
 * Constructs a ListCatalogItemsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCatalogItemsResponse::ListCatalogItemsResponse(
        const ListCatalogItemsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new ListCatalogItemsResponsePrivate(this), parent)
{
    setRequest(new ListCatalogItemsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCatalogItemsRequest * ListCatalogItemsResponse::request() const
{
    Q_D(const ListCatalogItemsResponse);
    return static_cast<const ListCatalogItemsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Outposts ListCatalogItems \a response.
 */
void ListCatalogItemsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCatalogItemsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::ListCatalogItemsResponsePrivate
 * \brief The ListCatalogItemsResponsePrivate class provides private implementation for ListCatalogItemsResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a ListCatalogItemsResponsePrivate object with public implementation \a q.
 */
ListCatalogItemsResponsePrivate::ListCatalogItemsResponsePrivate(
    ListCatalogItemsResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts ListCatalogItems response element from \a xml.
 */
void ListCatalogItemsResponsePrivate::parseListCatalogItemsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCatalogItemsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
