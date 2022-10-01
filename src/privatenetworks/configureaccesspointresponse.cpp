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

#include "configureaccesspointresponse.h"
#include "configureaccesspointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::ConfigureAccessPointResponse
 * \brief The ConfigureAccessPointResponse class provides an interace for PrivateNetworks ConfigureAccessPoint responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::configureAccessPoint
 */

/*!
 * Constructs a ConfigureAccessPointResponse object for \a reply to \a request, with parent \a parent.
 */
ConfigureAccessPointResponse::ConfigureAccessPointResponse(
        const ConfigureAccessPointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new ConfigureAccessPointResponsePrivate(this), parent)
{
    setRequest(new ConfigureAccessPointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ConfigureAccessPointRequest * ConfigureAccessPointResponse::request() const
{
    Q_D(const ConfigureAccessPointResponse);
    return static_cast<const ConfigureAccessPointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks ConfigureAccessPoint \a response.
 */
void ConfigureAccessPointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ConfigureAccessPointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::ConfigureAccessPointResponsePrivate
 * \brief The ConfigureAccessPointResponsePrivate class provides private implementation for ConfigureAccessPointResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a ConfigureAccessPointResponsePrivate object with public implementation \a q.
 */
ConfigureAccessPointResponsePrivate::ConfigureAccessPointResponsePrivate(
    ConfigureAccessPointResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks ConfigureAccessPoint response element from \a xml.
 */
void ConfigureAccessPointResponsePrivate::parseConfigureAccessPointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConfigureAccessPointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
