// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
