// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconnectpeerresponse.h"
#include "createconnectpeerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateConnectPeerResponse
 * \brief The CreateConnectPeerResponse class provides an interace for NetworkManager CreateConnectPeer responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createConnectPeer
 */

/*!
 * Constructs a CreateConnectPeerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConnectPeerResponse::CreateConnectPeerResponse(
        const CreateConnectPeerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new CreateConnectPeerResponsePrivate(this), parent)
{
    setRequest(new CreateConnectPeerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConnectPeerRequest * CreateConnectPeerResponse::request() const
{
    Q_D(const CreateConnectPeerResponse);
    return static_cast<const CreateConnectPeerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager CreateConnectPeer \a response.
 */
void CreateConnectPeerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateConnectPeerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::CreateConnectPeerResponsePrivate
 * \brief The CreateConnectPeerResponsePrivate class provides private implementation for CreateConnectPeerResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateConnectPeerResponsePrivate object with public implementation \a q.
 */
CreateConnectPeerResponsePrivate::CreateConnectPeerResponsePrivate(
    CreateConnectPeerResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager CreateConnectPeer response element from \a xml.
 */
void CreateConnectPeerResponsePrivate::parseCreateConnectPeerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConnectPeerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
