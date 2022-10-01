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

#include "getnetworkroutesresponse.h"
#include "getnetworkroutesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetNetworkRoutesResponse
 * \brief The GetNetworkRoutesResponse class provides an interace for NetworkManager GetNetworkRoutes responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getNetworkRoutes
 */

/*!
 * Constructs a GetNetworkRoutesResponse object for \a reply to \a request, with parent \a parent.
 */
GetNetworkRoutesResponse::GetNetworkRoutesResponse(
        const GetNetworkRoutesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetNetworkRoutesResponsePrivate(this), parent)
{
    setRequest(new GetNetworkRoutesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNetworkRoutesRequest * GetNetworkRoutesResponse::request() const
{
    Q_D(const GetNetworkRoutesResponse);
    return static_cast<const GetNetworkRoutesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetNetworkRoutes \a response.
 */
void GetNetworkRoutesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNetworkRoutesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetNetworkRoutesResponsePrivate
 * \brief The GetNetworkRoutesResponsePrivate class provides private implementation for GetNetworkRoutesResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetNetworkRoutesResponsePrivate object with public implementation \a q.
 */
GetNetworkRoutesResponsePrivate::GetNetworkRoutesResponsePrivate(
    GetNetworkRoutesResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetNetworkRoutes response element from \a xml.
 */
void GetNetworkRoutesResponsePrivate::parseGetNetworkRoutesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNetworkRoutesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
