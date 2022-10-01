// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdeviceresponse.h"
#include "createdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateDeviceResponse
 * \brief The CreateDeviceResponse class provides an interace for NetworkManager CreateDevice responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createDevice
 */

/*!
 * Constructs a CreateDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDeviceResponse::CreateDeviceResponse(
        const CreateDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new CreateDeviceResponsePrivate(this), parent)
{
    setRequest(new CreateDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDeviceRequest * CreateDeviceResponse::request() const
{
    Q_D(const CreateDeviceResponse);
    return static_cast<const CreateDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager CreateDevice \a response.
 */
void CreateDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::CreateDeviceResponsePrivate
 * \brief The CreateDeviceResponsePrivate class provides private implementation for CreateDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateDeviceResponsePrivate object with public implementation \a q.
 */
CreateDeviceResponsePrivate::CreateDeviceResponsePrivate(
    CreateDeviceResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager CreateDevice response element from \a xml.
 */
void CreateDeviceResponsePrivate::parseCreateDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
