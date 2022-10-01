// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateconnectpeerresponse.h"
#include "associateconnectpeerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::AssociateConnectPeerResponse
 * \brief The AssociateConnectPeerResponse class provides an interace for NetworkManager AssociateConnectPeer responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::associateConnectPeer
 */

/*!
 * Constructs a AssociateConnectPeerResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateConnectPeerResponse::AssociateConnectPeerResponse(
        const AssociateConnectPeerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new AssociateConnectPeerResponsePrivate(this), parent)
{
    setRequest(new AssociateConnectPeerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateConnectPeerRequest * AssociateConnectPeerResponse::request() const
{
    Q_D(const AssociateConnectPeerResponse);
    return static_cast<const AssociateConnectPeerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager AssociateConnectPeer \a response.
 */
void AssociateConnectPeerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateConnectPeerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::AssociateConnectPeerResponsePrivate
 * \brief The AssociateConnectPeerResponsePrivate class provides private implementation for AssociateConnectPeerResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a AssociateConnectPeerResponsePrivate object with public implementation \a q.
 */
AssociateConnectPeerResponsePrivate::AssociateConnectPeerResponsePrivate(
    AssociateConnectPeerResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager AssociateConnectPeer response element from \a xml.
 */
void AssociateConnectPeerResponsePrivate::parseAssociateConnectPeerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateConnectPeerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
