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

#include "getlinksresponse.h"
#include "getlinksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetLinksResponse
 * \brief The GetLinksResponse class provides an interace for NetworkManager GetLinks responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getLinks
 */

/*!
 * Constructs a GetLinksResponse object for \a reply to \a request, with parent \a parent.
 */
GetLinksResponse::GetLinksResponse(
        const GetLinksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetLinksResponsePrivate(this), parent)
{
    setRequest(new GetLinksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLinksRequest * GetLinksResponse::request() const
{
    Q_D(const GetLinksResponse);
    return static_cast<const GetLinksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetLinks \a response.
 */
void GetLinksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLinksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetLinksResponsePrivate
 * \brief The GetLinksResponsePrivate class provides private implementation for GetLinksResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetLinksResponsePrivate object with public implementation \a q.
 */
GetLinksResponsePrivate::GetLinksResponsePrivate(
    GetLinksResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetLinks response element from \a xml.
 */
void GetLinksResponsePrivate::parseGetLinksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLinksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
