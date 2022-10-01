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

#include "getnetworktelemetryresponse.h"
#include "getnetworktelemetryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetNetworkTelemetryResponse
 * \brief The GetNetworkTelemetryResponse class provides an interace for NetworkManager GetNetworkTelemetry responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getNetworkTelemetry
 */

/*!
 * Constructs a GetNetworkTelemetryResponse object for \a reply to \a request, with parent \a parent.
 */
GetNetworkTelemetryResponse::GetNetworkTelemetryResponse(
        const GetNetworkTelemetryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetNetworkTelemetryResponsePrivate(this), parent)
{
    setRequest(new GetNetworkTelemetryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNetworkTelemetryRequest * GetNetworkTelemetryResponse::request() const
{
    Q_D(const GetNetworkTelemetryResponse);
    return static_cast<const GetNetworkTelemetryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetNetworkTelemetry \a response.
 */
void GetNetworkTelemetryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNetworkTelemetryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetNetworkTelemetryResponsePrivate
 * \brief The GetNetworkTelemetryResponsePrivate class provides private implementation for GetNetworkTelemetryResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetNetworkTelemetryResponsePrivate object with public implementation \a q.
 */
GetNetworkTelemetryResponsePrivate::GetNetworkTelemetryResponsePrivate(
    GetNetworkTelemetryResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetNetworkTelemetry response element from \a xml.
 */
void GetNetworkTelemetryResponsePrivate::parseGetNetworkTelemetryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNetworkTelemetryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
