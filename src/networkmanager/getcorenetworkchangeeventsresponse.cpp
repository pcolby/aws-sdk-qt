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

#include "getcorenetworkchangeeventsresponse.h"
#include "getcorenetworkchangeeventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetCoreNetworkChangeEventsResponse
 * \brief The GetCoreNetworkChangeEventsResponse class provides an interace for NetworkManager GetCoreNetworkChangeEvents responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getCoreNetworkChangeEvents
 */

/*!
 * Constructs a GetCoreNetworkChangeEventsResponse object for \a reply to \a request, with parent \a parent.
 */
GetCoreNetworkChangeEventsResponse::GetCoreNetworkChangeEventsResponse(
        const GetCoreNetworkChangeEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetCoreNetworkChangeEventsResponsePrivate(this), parent)
{
    setRequest(new GetCoreNetworkChangeEventsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCoreNetworkChangeEventsRequest * GetCoreNetworkChangeEventsResponse::request() const
{
    Q_D(const GetCoreNetworkChangeEventsResponse);
    return static_cast<const GetCoreNetworkChangeEventsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetCoreNetworkChangeEvents \a response.
 */
void GetCoreNetworkChangeEventsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCoreNetworkChangeEventsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetCoreNetworkChangeEventsResponsePrivate
 * \brief The GetCoreNetworkChangeEventsResponsePrivate class provides private implementation for GetCoreNetworkChangeEventsResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetCoreNetworkChangeEventsResponsePrivate object with public implementation \a q.
 */
GetCoreNetworkChangeEventsResponsePrivate::GetCoreNetworkChangeEventsResponsePrivate(
    GetCoreNetworkChangeEventsResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetCoreNetworkChangeEvents response element from \a xml.
 */
void GetCoreNetworkChangeEventsResponsePrivate::parseGetCoreNetworkChangeEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCoreNetworkChangeEventsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
