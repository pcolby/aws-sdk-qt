// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedeviceresponse.h"
#include "deletedeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteDeviceResponse
 * \brief The DeleteDeviceResponse class provides an interace for NetworkManager DeleteDevice responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deleteDevice
 */

/*!
 * Constructs a DeleteDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDeviceResponse::DeleteDeviceResponse(
        const DeleteDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DeleteDeviceResponsePrivate(this), parent)
{
    setRequest(new DeleteDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDeviceRequest * DeleteDeviceResponse::request() const
{
    Q_D(const DeleteDeviceResponse);
    return static_cast<const DeleteDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DeleteDevice \a response.
 */
void DeleteDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DeleteDeviceResponsePrivate
 * \brief The DeleteDeviceResponsePrivate class provides private implementation for DeleteDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteDeviceResponsePrivate object with public implementation \a q.
 */
DeleteDeviceResponsePrivate::DeleteDeviceResponsePrivate(
    DeleteDeviceResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DeleteDevice response element from \a xml.
 */
void DeleteDeviceResponsePrivate::parseDeleteDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
