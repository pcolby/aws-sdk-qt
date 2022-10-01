// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnetworkroutesresponse.h"
#include "getnetworkroutesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetNetworkRoutesResponse
 * \brief The GetNetworkRoutesResponse class provides an interace for NetworkManager GetNetworkRoutes responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getNetworkRoutes
 */

/*!
 * Constructs a GetNetworkRoutesResponse object for \a reply to \a request, with parent \a parent.
 */
GetNetworkRoutesResponse::GetNetworkRoutesResponse(
        const GetNetworkRoutesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetNetworkRoutesResponsePrivate(this), parent)
{
    setRequest(new GetNetworkRoutesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNetworkRoutesRequest * GetNetworkRoutesResponse::request() const
{
    Q_D(const GetNetworkRoutesResponse);
    return static_cast<const GetNetworkRoutesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetNetworkRoutes \a response.
 */
void GetNetworkRoutesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNetworkRoutesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetNetworkRoutesResponsePrivate
 * \brief The GetNetworkRoutesResponsePrivate class provides private implementation for GetNetworkRoutesResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetNetworkRoutesResponsePrivate object with public implementation \a q.
 */
GetNetworkRoutesResponsePrivate::GetNetworkRoutesResponsePrivate(
    GetNetworkRoutesResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetNetworkRoutes response element from \a xml.
 */
void GetNetworkRoutesResponsePrivate::parseGetNetworkRoutesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNetworkRoutesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
