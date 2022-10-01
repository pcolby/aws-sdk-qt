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

#include "getsitesresponse.h"
#include "getsitesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetSitesResponse
 * \brief The GetSitesResponse class provides an interace for NetworkManager GetSites responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getSites
 */

/*!
 * Constructs a GetSitesResponse object for \a reply to \a request, with parent \a parent.
 */
GetSitesResponse::GetSitesResponse(
        const GetSitesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetSitesResponsePrivate(this), parent)
{
    setRequest(new GetSitesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSitesRequest * GetSitesResponse::request() const
{
    Q_D(const GetSitesResponse);
    return static_cast<const GetSitesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetSites \a response.
 */
void GetSitesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSitesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetSitesResponsePrivate
 * \brief The GetSitesResponsePrivate class provides private implementation for GetSitesResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetSitesResponsePrivate object with public implementation \a q.
 */
GetSitesResponsePrivate::GetSitesResponsePrivate(
    GetSitesResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetSites response element from \a xml.
 */
void GetSitesResponsePrivate::parseGetSitesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSitesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
