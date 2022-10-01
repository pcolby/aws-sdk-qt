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

#include "updatecorenetworkresponse.h"
#include "updatecorenetworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::UpdateCoreNetworkResponse
 * \brief The UpdateCoreNetworkResponse class provides an interace for NetworkManager UpdateCoreNetwork responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::updateCoreNetwork
 */

/*!
 * Constructs a UpdateCoreNetworkResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCoreNetworkResponse::UpdateCoreNetworkResponse(
        const UpdateCoreNetworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new UpdateCoreNetworkResponsePrivate(this), parent)
{
    setRequest(new UpdateCoreNetworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCoreNetworkRequest * UpdateCoreNetworkResponse::request() const
{
    Q_D(const UpdateCoreNetworkResponse);
    return static_cast<const UpdateCoreNetworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager UpdateCoreNetwork \a response.
 */
void UpdateCoreNetworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCoreNetworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::UpdateCoreNetworkResponsePrivate
 * \brief The UpdateCoreNetworkResponsePrivate class provides private implementation for UpdateCoreNetworkResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a UpdateCoreNetworkResponsePrivate object with public implementation \a q.
 */
UpdateCoreNetworkResponsePrivate::UpdateCoreNetworkResponsePrivate(
    UpdateCoreNetworkResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager UpdateCoreNetwork response element from \a xml.
 */
void UpdateCoreNetworkResponsePrivate::parseUpdateCoreNetworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCoreNetworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
