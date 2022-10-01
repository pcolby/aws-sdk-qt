// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconnectpeerresponse.h"
#include "getconnectpeerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetConnectPeerResponse
 * \brief The GetConnectPeerResponse class provides an interace for NetworkManager GetConnectPeer responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getConnectPeer
 */

/*!
 * Constructs a GetConnectPeerResponse object for \a reply to \a request, with parent \a parent.
 */
GetConnectPeerResponse::GetConnectPeerResponse(
        const GetConnectPeerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetConnectPeerResponsePrivate(this), parent)
{
    setRequest(new GetConnectPeerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConnectPeerRequest * GetConnectPeerResponse::request() const
{
    Q_D(const GetConnectPeerResponse);
    return static_cast<const GetConnectPeerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetConnectPeer \a response.
 */
void GetConnectPeerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConnectPeerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetConnectPeerResponsePrivate
 * \brief The GetConnectPeerResponsePrivate class provides private implementation for GetConnectPeerResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetConnectPeerResponsePrivate object with public implementation \a q.
 */
GetConnectPeerResponsePrivate::GetConnectPeerResponsePrivate(
    GetConnectPeerResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetConnectPeer response element from \a xml.
 */
void GetConnectPeerResponsePrivate::parseGetConnectPeerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConnectPeerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
