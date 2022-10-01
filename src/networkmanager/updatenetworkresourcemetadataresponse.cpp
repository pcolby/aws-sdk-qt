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

#include "updatenetworkresourcemetadataresponse.h"
#include "updatenetworkresourcemetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::UpdateNetworkResourceMetadataResponse
 * \brief The UpdateNetworkResourceMetadataResponse class provides an interace for NetworkManager UpdateNetworkResourceMetadata responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::updateNetworkResourceMetadata
 */

/*!
 * Constructs a UpdateNetworkResourceMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateNetworkResourceMetadataResponse::UpdateNetworkResourceMetadataResponse(
        const UpdateNetworkResourceMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new UpdateNetworkResourceMetadataResponsePrivate(this), parent)
{
    setRequest(new UpdateNetworkResourceMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateNetworkResourceMetadataRequest * UpdateNetworkResourceMetadataResponse::request() const
{
    Q_D(const UpdateNetworkResourceMetadataResponse);
    return static_cast<const UpdateNetworkResourceMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager UpdateNetworkResourceMetadata \a response.
 */
void UpdateNetworkResourceMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateNetworkResourceMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::UpdateNetworkResourceMetadataResponsePrivate
 * \brief The UpdateNetworkResourceMetadataResponsePrivate class provides private implementation for UpdateNetworkResourceMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a UpdateNetworkResourceMetadataResponsePrivate object with public implementation \a q.
 */
UpdateNetworkResourceMetadataResponsePrivate::UpdateNetworkResourceMetadataResponsePrivate(
    UpdateNetworkResourceMetadataResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager UpdateNetworkResourceMetadata response element from \a xml.
 */
void UpdateNetworkResourceMetadataResponsePrivate::parseUpdateNetworkResourceMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNetworkResourceMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
