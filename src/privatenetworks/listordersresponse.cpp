// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listordersresponse.h"
#include "listordersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::ListOrdersResponse
 * \brief The ListOrdersResponse class provides an interace for PrivateNetworks ListOrders responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::listOrders
 */

/*!
 * Constructs a ListOrdersResponse object for \a reply to \a request, with parent \a parent.
 */
ListOrdersResponse::ListOrdersResponse(
        const ListOrdersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new ListOrdersResponsePrivate(this), parent)
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
 * Parses a successful PrivateNetworks ListOrders \a response.
 */
void ListOrdersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOrdersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::ListOrdersResponsePrivate
 * \brief The ListOrdersResponsePrivate class provides private implementation for ListOrdersResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a ListOrdersResponsePrivate object with public implementation \a q.
 */
ListOrdersResponsePrivate::ListOrdersResponsePrivate(
    ListOrdersResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks ListOrders response element from \a xml.
 */
void ListOrdersResponsePrivate::parseListOrdersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOrdersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
