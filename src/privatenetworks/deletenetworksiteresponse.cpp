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

#include "deletenetworksiteresponse.h"
#include "deletenetworksiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::DeleteNetworkSiteResponse
 * \brief The DeleteNetworkSiteResponse class provides an interace for PrivateNetworks DeleteNetworkSite responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::deleteNetworkSite
 */

/*!
 * Constructs a DeleteNetworkSiteResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteNetworkSiteResponse::DeleteNetworkSiteResponse(
        const DeleteNetworkSiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new DeleteNetworkSiteResponsePrivate(this), parent)
{
    setRequest(new DeleteNetworkSiteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteNetworkSiteRequest * DeleteNetworkSiteResponse::request() const
{
    Q_D(const DeleteNetworkSiteResponse);
    return static_cast<const DeleteNetworkSiteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks DeleteNetworkSite \a response.
 */
void DeleteNetworkSiteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteNetworkSiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::DeleteNetworkSiteResponsePrivate
 * \brief The DeleteNetworkSiteResponsePrivate class provides private implementation for DeleteNetworkSiteResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a DeleteNetworkSiteResponsePrivate object with public implementation \a q.
 */
DeleteNetworkSiteResponsePrivate::DeleteNetworkSiteResponsePrivate(
    DeleteNetworkSiteResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks DeleteNetworkSite response element from \a xml.
 */
void DeleteNetworkSiteResponsePrivate::parseDeleteNetworkSiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNetworkSiteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
