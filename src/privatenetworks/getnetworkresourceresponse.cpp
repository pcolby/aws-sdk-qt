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

#include "getnetworkresourceresponse.h"
#include "getnetworkresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::GetNetworkResourceResponse
 * \brief The GetNetworkResourceResponse class provides an interace for PrivateNetworks GetNetworkResource responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::getNetworkResource
 */

/*!
 * Constructs a GetNetworkResourceResponse object for \a reply to \a request, with parent \a parent.
 */
GetNetworkResourceResponse::GetNetworkResourceResponse(
        const GetNetworkResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new GetNetworkResourceResponsePrivate(this), parent)
{
    setRequest(new GetNetworkResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNetworkResourceRequest * GetNetworkResourceResponse::request() const
{
    Q_D(const GetNetworkResourceResponse);
    return static_cast<const GetNetworkResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks GetNetworkResource \a response.
 */
void GetNetworkResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNetworkResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::GetNetworkResourceResponsePrivate
 * \brief The GetNetworkResourceResponsePrivate class provides private implementation for GetNetworkResourceResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a GetNetworkResourceResponsePrivate object with public implementation \a q.
 */
GetNetworkResourceResponsePrivate::GetNetworkResourceResponsePrivate(
    GetNetworkResourceResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks GetNetworkResource response element from \a xml.
 */
void GetNetworkResourceResponsePrivate::parseGetNetworkResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNetworkResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
