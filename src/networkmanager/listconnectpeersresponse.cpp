// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconnectpeersresponse.h"
#include "listconnectpeersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::ListConnectPeersResponse
 * \brief The ListConnectPeersResponse class provides an interace for NetworkManager ListConnectPeers responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::listConnectPeers
 */

/*!
 * Constructs a ListConnectPeersResponse object for \a reply to \a request, with parent \a parent.
 */
ListConnectPeersResponse::ListConnectPeersResponse(
        const ListConnectPeersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new ListConnectPeersResponsePrivate(this), parent)
{
    setRequest(new ListConnectPeersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListConnectPeersRequest * ListConnectPeersResponse::request() const
{
    Q_D(const ListConnectPeersResponse);
    return static_cast<const ListConnectPeersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager ListConnectPeers \a response.
 */
void ListConnectPeersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListConnectPeersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::ListConnectPeersResponsePrivate
 * \brief The ListConnectPeersResponsePrivate class provides private implementation for ListConnectPeersResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a ListConnectPeersResponsePrivate object with public implementation \a q.
 */
ListConnectPeersResponsePrivate::ListConnectPeersResponsePrivate(
    ListConnectPeersResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager ListConnectPeers response element from \a xml.
 */
void ListConnectPeersResponsePrivate::parseListConnectPeersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConnectPeersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
