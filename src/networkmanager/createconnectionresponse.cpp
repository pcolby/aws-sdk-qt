// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconnectionresponse.h"
#include "createconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateConnectionResponse
 * \brief The CreateConnectionResponse class provides an interace for NetworkManager CreateConnection responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createConnection
 */

/*!
 * Constructs a CreateConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConnectionResponse::CreateConnectionResponse(
        const CreateConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new CreateConnectionResponsePrivate(this), parent)
{
    setRequest(new CreateConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConnectionRequest * CreateConnectionResponse::request() const
{
    Q_D(const CreateConnectionResponse);
    return static_cast<const CreateConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager CreateConnection \a response.
 */
void CreateConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::CreateConnectionResponsePrivate
 * \brief The CreateConnectionResponsePrivate class provides private implementation for CreateConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateConnectionResponsePrivate object with public implementation \a q.
 */
CreateConnectionResponsePrivate::CreateConnectionResponsePrivate(
    CreateConnectionResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager CreateConnection response element from \a xml.
 */
void CreateConnectionResponsePrivate::parseCreateConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
