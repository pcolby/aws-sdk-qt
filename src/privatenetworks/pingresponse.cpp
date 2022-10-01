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

#include "pingresponse.h"
#include "pingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::PingResponse
 * \brief The PingResponse class provides an interace for PrivateNetworks Ping responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::ping
 */

/*!
 * Constructs a PingResponse object for \a reply to \a request, with parent \a parent.
 */
PingResponse::PingResponse(
        const PingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new PingResponsePrivate(this), parent)
{
    setRequest(new PingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PingRequest * PingResponse::request() const
{
    Q_D(const PingResponse);
    return static_cast<const PingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks Ping \a response.
 */
void PingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::PingResponsePrivate
 * \brief The PingResponsePrivate class provides private implementation for PingResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a PingResponsePrivate object with public implementation \a q.
 */
PingResponsePrivate::PingResponsePrivate(
    PingResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks Ping response element from \a xml.
 */
void PingResponsePrivate::parsePingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
