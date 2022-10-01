/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletecorenetworkresponse.h"
#include "deletecorenetworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteCoreNetworkResponse
 * \brief The DeleteCoreNetworkResponse class provides an interace for NetworkManager DeleteCoreNetwork responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deleteCoreNetwork
 */

/*!
 * Constructs a DeleteCoreNetworkResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCoreNetworkResponse::DeleteCoreNetworkResponse(
        const DeleteCoreNetworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DeleteCoreNetworkResponsePrivate(this), parent)
{
    setRequest(new DeleteCoreNetworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCoreNetworkRequest * DeleteCoreNetworkResponse::request() const
{
    Q_D(const DeleteCoreNetworkResponse);
    return static_cast<const DeleteCoreNetworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DeleteCoreNetwork \a response.
 */
void DeleteCoreNetworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCoreNetworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DeleteCoreNetworkResponsePrivate
 * \brief The DeleteCoreNetworkResponsePrivate class provides private implementation for DeleteCoreNetworkResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteCoreNetworkResponsePrivate object with public implementation \a q.
 */
DeleteCoreNetworkResponsePrivate::DeleteCoreNetworkResponsePrivate(
    DeleteCoreNetworkResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DeleteCoreNetwork response element from \a xml.
 */
void DeleteCoreNetworkResponsePrivate::parseDeleteCoreNetworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCoreNetworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
