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

#include "updateglobalnetworkresponse.h"
#include "updateglobalnetworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::UpdateGlobalNetworkResponse
 * \brief The UpdateGlobalNetworkResponse class provides an interace for NetworkManager UpdateGlobalNetwork responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Transit Gateway Network Manager (Network Manager) enables you to create a global network, in which you can monitor your
 *  AWS and on-premises networks that are built around transit
 * 
 *  gateways>
 * 
 *  The Network Manager APIs are supported in the US West (Oregon) Region only. You must specify the <code>us-west-2</code>
 *  Region in all requests made to Network
 *
 * \sa NetworkManagerClient::updateGlobalNetwork
 */

/*!
 * Constructs a UpdateGlobalNetworkResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGlobalNetworkResponse::UpdateGlobalNetworkResponse(
        const UpdateGlobalNetworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new UpdateGlobalNetworkResponsePrivate(this), parent)
{
    setRequest(new UpdateGlobalNetworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGlobalNetworkRequest * UpdateGlobalNetworkResponse::request() const
{
    Q_D(const UpdateGlobalNetworkResponse);
    return static_cast<const UpdateGlobalNetworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager UpdateGlobalNetwork \a response.
 */
void UpdateGlobalNetworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGlobalNetworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::UpdateGlobalNetworkResponsePrivate
 * \brief The UpdateGlobalNetworkResponsePrivate class provides private implementation for UpdateGlobalNetworkResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a UpdateGlobalNetworkResponsePrivate object with public implementation \a q.
 */
UpdateGlobalNetworkResponsePrivate::UpdateGlobalNetworkResponsePrivate(
    UpdateGlobalNetworkResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager UpdateGlobalNetwork response element from \a xml.
 */
void UpdateGlobalNetworkResponsePrivate::parseUpdateGlobalNetworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGlobalNetworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
