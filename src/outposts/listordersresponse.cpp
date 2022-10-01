// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listordersresponse.h"
#include "listordersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::ListOrdersResponse
 * \brief The ListOrdersResponse class provides an interace for Outposts ListOrders responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::listOrders
 */

/*!
 * Constructs a ListOrdersResponse object for \a reply to \a request, with parent \a parent.
 */
ListOrdersResponse::ListOrdersResponse(
        const ListOrdersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new ListOrdersResponsePrivate(this), parent)
{
    setRequest(new ListOrdersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOrdersRequest * ListOrdersResponse::request() const
{
    Q_D(const ListOrdersResponse);
    return static_cast<const ListOrdersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Outposts ListOrders \a response.
 */
void ListOrdersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOrdersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::ListOrdersResponsePrivate
 * \brief The ListOrdersResponsePrivate class provides private implementation for ListOrdersResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a ListOrdersResponsePrivate object with public implementation \a q.
 */
ListOrdersResponsePrivate::ListOrdersResponsePrivate(
    ListOrdersResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts ListOrders response element from \a xml.
 */
void ListOrdersResponsePrivate::parseListOrdersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOrdersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
