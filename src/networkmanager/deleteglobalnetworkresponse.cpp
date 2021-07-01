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

#include "deleteglobalnetworkresponse.h"
#include "deleteglobalnetworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteGlobalNetworkResponse
 * \brief The DeleteGlobalNetworkResponse class provides an interace for NetworkManager DeleteGlobalNetwork responses.
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
 * \sa NetworkManagerClient::deleteGlobalNetwork
 */

/*!
 * Constructs a DeleteGlobalNetworkResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteGlobalNetworkResponse::DeleteGlobalNetworkResponse(
        const DeleteGlobalNetworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DeleteGlobalNetworkResponsePrivate(this), parent)
{
    setRequest(new DeleteGlobalNetworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteGlobalNetworkRequest * DeleteGlobalNetworkResponse::request() const
{
    Q_D(const DeleteGlobalNetworkResponse);
    return static_cast<const DeleteGlobalNetworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DeleteGlobalNetwork \a response.
 */
void DeleteGlobalNetworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteGlobalNetworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DeleteGlobalNetworkResponsePrivate
 * \brief The DeleteGlobalNetworkResponsePrivate class provides private implementation for DeleteGlobalNetworkResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteGlobalNetworkResponsePrivate object with public implementation \a q.
 */
DeleteGlobalNetworkResponsePrivate::DeleteGlobalNetworkResponsePrivate(
    DeleteGlobalNetworkResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DeleteGlobalNetwork response element from \a xml.
 */
void DeleteGlobalNetworkResponsePrivate::parseDeleteGlobalNetworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGlobalNetworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
