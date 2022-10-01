// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconnectpeerresponse.h"
#include "deleteconnectpeerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteConnectPeerResponse
 * \brief The DeleteConnectPeerResponse class provides an interace for NetworkManager DeleteConnectPeer responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deleteConnectPeer
 */

/*!
 * Constructs a DeleteConnectPeerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConnectPeerResponse::DeleteConnectPeerResponse(
        const DeleteConnectPeerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DeleteConnectPeerResponsePrivate(this), parent)
{
    setRequest(new DeleteConnectPeerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteConnectPeerRequest * DeleteConnectPeerResponse::request() const
{
    Q_D(const DeleteConnectPeerResponse);
    return static_cast<const DeleteConnectPeerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DeleteConnectPeer \a response.
 */
void DeleteConnectPeerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteConnectPeerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DeleteConnectPeerResponsePrivate
 * \brief The DeleteConnectPeerResponsePrivate class provides private implementation for DeleteConnectPeerResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteConnectPeerResponsePrivate object with public implementation \a q.
 */
DeleteConnectPeerResponsePrivate::DeleteConnectPeerResponsePrivate(
    DeleteConnectPeerResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DeleteConnectPeer response element from \a xml.
 */
void DeleteConnectPeerResponsePrivate::parseDeleteConnectPeerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConnectPeerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
