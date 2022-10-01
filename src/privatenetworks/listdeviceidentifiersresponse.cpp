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

#include "listdeviceidentifiersresponse.h"
#include "listdeviceidentifiersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::ListDeviceIdentifiersResponse
 * \brief The ListDeviceIdentifiersResponse class provides an interace for PrivateNetworks ListDeviceIdentifiers responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::listDeviceIdentifiers
 */

/*!
 * Constructs a ListDeviceIdentifiersResponse object for \a reply to \a request, with parent \a parent.
 */
ListDeviceIdentifiersResponse::ListDeviceIdentifiersResponse(
        const ListDeviceIdentifiersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new ListDeviceIdentifiersResponsePrivate(this), parent)
{
    setRequest(new ListDeviceIdentifiersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDeviceIdentifiersRequest * ListDeviceIdentifiersResponse::request() const
{
    Q_D(const ListDeviceIdentifiersResponse);
    return static_cast<const ListDeviceIdentifiersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks ListDeviceIdentifiers \a response.
 */
void ListDeviceIdentifiersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDeviceIdentifiersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::ListDeviceIdentifiersResponsePrivate
 * \brief The ListDeviceIdentifiersResponsePrivate class provides private implementation for ListDeviceIdentifiersResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a ListDeviceIdentifiersResponsePrivate object with public implementation \a q.
 */
ListDeviceIdentifiersResponsePrivate::ListDeviceIdentifiersResponsePrivate(
    ListDeviceIdentifiersResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks ListDeviceIdentifiers response element from \a xml.
 */
void ListDeviceIdentifiersResponsePrivate::parseListDeviceIdentifiersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeviceIdentifiersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
