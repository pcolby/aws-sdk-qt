// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
