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

#include "getdevicesresponse.h"
#include "getdevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetDevicesResponse
 * \brief The GetDevicesResponse class provides an interace for NetworkManager GetDevices responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getDevices
 */

/*!
 * Constructs a GetDevicesResponse object for \a reply to \a request, with parent \a parent.
 */
GetDevicesResponse::GetDevicesResponse(
        const GetDevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetDevicesResponsePrivate(this), parent)
{
    setRequest(new GetDevicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDevicesRequest * GetDevicesResponse::request() const
{
    Q_D(const GetDevicesResponse);
    return static_cast<const GetDevicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetDevices \a response.
 */
void GetDevicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDevicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetDevicesResponsePrivate
 * \brief The GetDevicesResponsePrivate class provides private implementation for GetDevicesResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetDevicesResponsePrivate object with public implementation \a q.
 */
GetDevicesResponsePrivate::GetDevicesResponsePrivate(
    GetDevicesResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetDevices response element from \a xml.
 */
void GetDevicesResponsePrivate::parseGetDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDevicesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
