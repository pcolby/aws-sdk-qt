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

#include "listcorenetworkpolicyversionsresponse.h"
#include "listcorenetworkpolicyversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::ListCoreNetworkPolicyVersionsResponse
 * \brief The ListCoreNetworkPolicyVersionsResponse class provides an interace for NetworkManager ListCoreNetworkPolicyVersions responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::listCoreNetworkPolicyVersions
 */

/*!
 * Constructs a ListCoreNetworkPolicyVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCoreNetworkPolicyVersionsResponse::ListCoreNetworkPolicyVersionsResponse(
        const ListCoreNetworkPolicyVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new ListCoreNetworkPolicyVersionsResponsePrivate(this), parent)
{
    setRequest(new ListCoreNetworkPolicyVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCoreNetworkPolicyVersionsRequest * ListCoreNetworkPolicyVersionsResponse::request() const
{
    Q_D(const ListCoreNetworkPolicyVersionsResponse);
    return static_cast<const ListCoreNetworkPolicyVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager ListCoreNetworkPolicyVersions \a response.
 */
void ListCoreNetworkPolicyVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCoreNetworkPolicyVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::ListCoreNetworkPolicyVersionsResponsePrivate
 * \brief The ListCoreNetworkPolicyVersionsResponsePrivate class provides private implementation for ListCoreNetworkPolicyVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a ListCoreNetworkPolicyVersionsResponsePrivate object with public implementation \a q.
 */
ListCoreNetworkPolicyVersionsResponsePrivate::ListCoreNetworkPolicyVersionsResponsePrivate(
    ListCoreNetworkPolicyVersionsResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager ListCoreNetworkPolicyVersions response element from \a xml.
 */
void ListCoreNetworkPolicyVersionsResponsePrivate::parseListCoreNetworkPolicyVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCoreNetworkPolicyVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
