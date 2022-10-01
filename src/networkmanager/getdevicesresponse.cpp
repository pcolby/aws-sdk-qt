// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdevicesresponse.h"
#include "getdevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetDevicesResponse
 * \brief The GetDevicesResponse class provides an interace for NetworkManager GetDevices responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getDevices
 */

/*!
 * Constructs a GetDevicesResponse object for \a reply to \a request, with parent \a parent.
 */
GetDevicesResponse::GetDevicesResponse(
        const GetDevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetDevicesResponsePrivate(this), parent)
{
    setRequest(new GetDevicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDevicesRequest * GetDevicesResponse::request() const
{
    Q_D(const GetDevicesResponse);
    return static_cast<const GetDevicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetDevices \a response.
 */
void GetDevicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDevicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetDevicesResponsePrivate
 * \brief The GetDevicesResponsePrivate class provides private implementation for GetDevicesResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetDevicesResponsePrivate object with public implementation \a q.
 */
GetDevicesResponsePrivate::GetDevicesResponsePrivate(
    GetDevicesResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetDevices response element from \a xml.
 */
void GetDevicesResponsePrivate::parseGetDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDevicesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
