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

#include "getnetworkresourcecountsresponse.h"
#include "getnetworkresourcecountsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetNetworkResourceCountsResponse
 * \brief The GetNetworkResourceCountsResponse class provides an interace for NetworkManager GetNetworkResourceCounts responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getNetworkResourceCounts
 */

/*!
 * Constructs a GetNetworkResourceCountsResponse object for \a reply to \a request, with parent \a parent.
 */
GetNetworkResourceCountsResponse::GetNetworkResourceCountsResponse(
        const GetNetworkResourceCountsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetNetworkResourceCountsResponsePrivate(this), parent)
{
    setRequest(new GetNetworkResourceCountsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNetworkResourceCountsRequest * GetNetworkResourceCountsResponse::request() const
{
    Q_D(const GetNetworkResourceCountsResponse);
    return static_cast<const GetNetworkResourceCountsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetNetworkResourceCounts \a response.
 */
void GetNetworkResourceCountsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNetworkResourceCountsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetNetworkResourceCountsResponsePrivate
 * \brief The GetNetworkResourceCountsResponsePrivate class provides private implementation for GetNetworkResourceCountsResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetNetworkResourceCountsResponsePrivate object with public implementation \a q.
 */
GetNetworkResourceCountsResponsePrivate::GetNetworkResourceCountsResponsePrivate(
    GetNetworkResourceCountsResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetNetworkResourceCounts response element from \a xml.
 */
void GetNetworkResourceCountsResponsePrivate::parseGetNetworkResourceCountsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNetworkResourceCountsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
