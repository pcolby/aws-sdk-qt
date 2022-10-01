// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedeviceresponse.h"
#include "updatedeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::UpdateDeviceResponse
 * \brief The UpdateDeviceResponse class provides an interace for NetworkManager UpdateDevice responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::updateDevice
 */

/*!
 * Constructs a UpdateDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDeviceResponse::UpdateDeviceResponse(
        const UpdateDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new UpdateDeviceResponsePrivate(this), parent)
{
    setRequest(new UpdateDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDeviceRequest * UpdateDeviceResponse::request() const
{
    Q_D(const UpdateDeviceResponse);
    return static_cast<const UpdateDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager UpdateDevice \a response.
 */
void UpdateDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::UpdateDeviceResponsePrivate
 * \brief The UpdateDeviceResponsePrivate class provides private implementation for UpdateDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a UpdateDeviceResponsePrivate object with public implementation \a q.
 */
UpdateDeviceResponsePrivate::UpdateDeviceResponsePrivate(
    UpdateDeviceResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager UpdateDevice response element from \a xml.
 */
void UpdateDeviceResponsePrivate::parseUpdateDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
