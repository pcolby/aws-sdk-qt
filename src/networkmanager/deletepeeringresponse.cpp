// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepeeringresponse.h"
#include "deletepeeringresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeletePeeringResponse
 * \brief The DeletePeeringResponse class provides an interace for NetworkManager DeletePeering responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deletePeering
 */

/*!
 * Constructs a DeletePeeringResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePeeringResponse::DeletePeeringResponse(
        const DeletePeeringRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DeletePeeringResponsePrivate(this), parent)
{
    setRequest(new DeletePeeringRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePeeringRequest * DeletePeeringResponse::request() const
{
    Q_D(const DeletePeeringResponse);
    return static_cast<const DeletePeeringRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DeletePeering \a response.
 */
void DeletePeeringResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePeeringResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DeletePeeringResponsePrivate
 * \brief The DeletePeeringResponsePrivate class provides private implementation for DeletePeeringResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeletePeeringResponsePrivate object with public implementation \a q.
 */
DeletePeeringResponsePrivate::DeletePeeringResponsePrivate(
    DeletePeeringResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DeletePeering response element from \a xml.
 */
void DeletePeeringResponsePrivate::parseDeletePeeringResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePeeringResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
