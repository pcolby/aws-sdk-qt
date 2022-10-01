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

#include "getnetworkresponse.h"
#include "getnetworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::GetNetworkResponse
 * \brief The GetNetworkResponse class provides an interace for PrivateNetworks GetNetwork responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::getNetwork
 */

/*!
 * Constructs a GetNetworkResponse object for \a reply to \a request, with parent \a parent.
 */
GetNetworkResponse::GetNetworkResponse(
        const GetNetworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new GetNetworkResponsePrivate(this), parent)
{
    setRequest(new GetNetworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNetworkRequest * GetNetworkResponse::request() const
{
    Q_D(const GetNetworkResponse);
    return static_cast<const GetNetworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks GetNetwork \a response.
 */
void GetNetworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNetworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::GetNetworkResponsePrivate
 * \brief The GetNetworkResponsePrivate class provides private implementation for GetNetworkResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a GetNetworkResponsePrivate object with public implementation \a q.
 */
GetNetworkResponsePrivate::GetNetworkResponsePrivate(
    GetNetworkResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks GetNetwork response element from \a xml.
 */
void GetNetworkResponsePrivate::parseGetNetworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNetworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
