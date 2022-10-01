// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deactivatedeviceidentifierresponse.h"
#include "deactivatedeviceidentifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::DeactivateDeviceIdentifierResponse
 * \brief The DeactivateDeviceIdentifierResponse class provides an interace for PrivateNetworks DeactivateDeviceIdentifier responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::deactivateDeviceIdentifier
 */

/*!
 * Constructs a DeactivateDeviceIdentifierResponse object for \a reply to \a request, with parent \a parent.
 */
DeactivateDeviceIdentifierResponse::DeactivateDeviceIdentifierResponse(
        const DeactivateDeviceIdentifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new DeactivateDeviceIdentifierResponsePrivate(this), parent)
{
    setRequest(new DeactivateDeviceIdentifierRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeactivateDeviceIdentifierRequest * DeactivateDeviceIdentifierResponse::request() const
{
    Q_D(const DeactivateDeviceIdentifierResponse);
    return static_cast<const DeactivateDeviceIdentifierRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks DeactivateDeviceIdentifier \a response.
 */
void DeactivateDeviceIdentifierResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeactivateDeviceIdentifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::DeactivateDeviceIdentifierResponsePrivate
 * \brief The DeactivateDeviceIdentifierResponsePrivate class provides private implementation for DeactivateDeviceIdentifierResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a DeactivateDeviceIdentifierResponsePrivate object with public implementation \a q.
 */
DeactivateDeviceIdentifierResponsePrivate::DeactivateDeviceIdentifierResponsePrivate(
    DeactivateDeviceIdentifierResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks DeactivateDeviceIdentifier response element from \a xml.
 */
void DeactivateDeviceIdentifierResponsePrivate::parseDeactivateDeviceIdentifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeactivateDeviceIdentifierResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
