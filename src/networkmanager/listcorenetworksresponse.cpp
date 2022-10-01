// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcorenetworksresponse.h"
#include "listcorenetworksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::ListCoreNetworksResponse
 * \brief The ListCoreNetworksResponse class provides an interace for NetworkManager ListCoreNetworks responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::listCoreNetworks
 */

/*!
 * Constructs a ListCoreNetworksResponse object for \a reply to \a request, with parent \a parent.
 */
ListCoreNetworksResponse::ListCoreNetworksResponse(
        const ListCoreNetworksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new ListCoreNetworksResponsePrivate(this), parent)
{
    setRequest(new ListCoreNetworksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCoreNetworksRequest * ListCoreNetworksResponse::request() const
{
    Q_D(const ListCoreNetworksResponse);
    return static_cast<const ListCoreNetworksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager ListCoreNetworks \a response.
 */
void ListCoreNetworksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCoreNetworksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::ListCoreNetworksResponsePrivate
 * \brief The ListCoreNetworksResponsePrivate class provides private implementation for ListCoreNetworksResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a ListCoreNetworksResponsePrivate object with public implementation \a q.
 */
ListCoreNetworksResponsePrivate::ListCoreNetworksResponsePrivate(
    ListCoreNetworksResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager ListCoreNetworks response element from \a xml.
 */
void ListCoreNetworksResponsePrivate::parseListCoreNetworksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCoreNetworksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
