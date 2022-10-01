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

#include "activatenetworksiteresponse.h"
#include "activatenetworksiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::ActivateNetworkSiteResponse
 * \brief The ActivateNetworkSiteResponse class provides an interace for PrivateNetworks ActivateNetworkSite responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::activateNetworkSite
 */

/*!
 * Constructs a ActivateNetworkSiteResponse object for \a reply to \a request, with parent \a parent.
 */
ActivateNetworkSiteResponse::ActivateNetworkSiteResponse(
        const ActivateNetworkSiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new ActivateNetworkSiteResponsePrivate(this), parent)
{
    setRequest(new ActivateNetworkSiteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ActivateNetworkSiteRequest * ActivateNetworkSiteResponse::request() const
{
    Q_D(const ActivateNetworkSiteResponse);
    return static_cast<const ActivateNetworkSiteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks ActivateNetworkSite \a response.
 */
void ActivateNetworkSiteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ActivateNetworkSiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::ActivateNetworkSiteResponsePrivate
 * \brief The ActivateNetworkSiteResponsePrivate class provides private implementation for ActivateNetworkSiteResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a ActivateNetworkSiteResponsePrivate object with public implementation \a q.
 */
ActivateNetworkSiteResponsePrivate::ActivateNetworkSiteResponsePrivate(
    ActivateNetworkSiteResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks ActivateNetworkSite response element from \a xml.
 */
void ActivateNetworkSiteResponsePrivate::parseActivateNetworkSiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ActivateNetworkSiteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
