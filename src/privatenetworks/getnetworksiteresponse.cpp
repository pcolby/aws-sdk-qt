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

#include "getnetworksiteresponse.h"
#include "getnetworksiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::GetNetworkSiteResponse
 * \brief The GetNetworkSiteResponse class provides an interace for PrivateNetworks GetNetworkSite responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::getNetworkSite
 */

/*!
 * Constructs a GetNetworkSiteResponse object for \a reply to \a request, with parent \a parent.
 */
GetNetworkSiteResponse::GetNetworkSiteResponse(
        const GetNetworkSiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new GetNetworkSiteResponsePrivate(this), parent)
{
    setRequest(new GetNetworkSiteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNetworkSiteRequest * GetNetworkSiteResponse::request() const
{
    Q_D(const GetNetworkSiteResponse);
    return static_cast<const GetNetworkSiteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks GetNetworkSite \a response.
 */
void GetNetworkSiteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNetworkSiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::GetNetworkSiteResponsePrivate
 * \brief The GetNetworkSiteResponsePrivate class provides private implementation for GetNetworkSiteResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a GetNetworkSiteResponsePrivate object with public implementation \a q.
 */
GetNetworkSiteResponsePrivate::GetNetworkSiteResponsePrivate(
    GetNetworkSiteResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks GetNetworkSite response element from \a xml.
 */
void GetNetworkSiteResponsePrivate::parseGetNetworkSiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNetworkSiteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
