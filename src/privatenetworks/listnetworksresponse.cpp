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

#include "listnetworksresponse.h"
#include "listnetworksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::ListNetworksResponse
 * \brief The ListNetworksResponse class provides an interace for PrivateNetworks ListNetworks responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::listNetworks
 */

/*!
 * Constructs a ListNetworksResponse object for \a reply to \a request, with parent \a parent.
 */
ListNetworksResponse::ListNetworksResponse(
        const ListNetworksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new ListNetworksResponsePrivate(this), parent)
{
    setRequest(new ListNetworksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListNetworksRequest * ListNetworksResponse::request() const
{
    Q_D(const ListNetworksResponse);
    return static_cast<const ListNetworksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks ListNetworks \a response.
 */
void ListNetworksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListNetworksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::ListNetworksResponsePrivate
 * \brief The ListNetworksResponsePrivate class provides private implementation for ListNetworksResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a ListNetworksResponsePrivate object with public implementation \a q.
 */
ListNetworksResponsePrivate::ListNetworksResponsePrivate(
    ListNetworksResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks ListNetworks response element from \a xml.
 */
void ListNetworksResponsePrivate::parseListNetworksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNetworksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
