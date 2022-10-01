// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateconnectpeerresponse.h"
#include "disassociateconnectpeerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DisassociateConnectPeerResponse
 * \brief The DisassociateConnectPeerResponse class provides an interace for NetworkManager DisassociateConnectPeer responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::disassociateConnectPeer
 */

/*!
 * Constructs a DisassociateConnectPeerResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateConnectPeerResponse::DisassociateConnectPeerResponse(
        const DisassociateConnectPeerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DisassociateConnectPeerResponsePrivate(this), parent)
{
    setRequest(new DisassociateConnectPeerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateConnectPeerRequest * DisassociateConnectPeerResponse::request() const
{
    Q_D(const DisassociateConnectPeerResponse);
    return static_cast<const DisassociateConnectPeerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DisassociateConnectPeer \a response.
 */
void DisassociateConnectPeerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateConnectPeerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DisassociateConnectPeerResponsePrivate
 * \brief The DisassociateConnectPeerResponsePrivate class provides private implementation for DisassociateConnectPeerResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DisassociateConnectPeerResponsePrivate object with public implementation \a q.
 */
DisassociateConnectPeerResponsePrivate::DisassociateConnectPeerResponsePrivate(
    DisassociateConnectPeerResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DisassociateConnectPeer response element from \a xml.
 */
void DisassociateConnectPeerResponsePrivate::parseDisassociateConnectPeerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateConnectPeerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
