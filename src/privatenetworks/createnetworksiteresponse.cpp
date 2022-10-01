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

#include "createnetworksiteresponse.h"
#include "createnetworksiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::CreateNetworkSiteResponse
 * \brief The CreateNetworkSiteResponse class provides an interace for PrivateNetworks CreateNetworkSite responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::createNetworkSite
 */

/*!
 * Constructs a CreateNetworkSiteResponse object for \a reply to \a request, with parent \a parent.
 */
CreateNetworkSiteResponse::CreateNetworkSiteResponse(
        const CreateNetworkSiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new CreateNetworkSiteResponsePrivate(this), parent)
{
    setRequest(new CreateNetworkSiteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateNetworkSiteRequest * CreateNetworkSiteResponse::request() const
{
    Q_D(const CreateNetworkSiteResponse);
    return static_cast<const CreateNetworkSiteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks CreateNetworkSite \a response.
 */
void CreateNetworkSiteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateNetworkSiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::CreateNetworkSiteResponsePrivate
 * \brief The CreateNetworkSiteResponsePrivate class provides private implementation for CreateNetworkSiteResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a CreateNetworkSiteResponsePrivate object with public implementation \a q.
 */
CreateNetworkSiteResponsePrivate::CreateNetworkSiteResponsePrivate(
    CreateNetworkSiteResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks CreateNetworkSite response element from \a xml.
 */
void CreateNetworkSiteResponsePrivate::parseCreateNetworkSiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNetworkSiteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
