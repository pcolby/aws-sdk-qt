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

#include "deletecorenetworkpolicyversionresponse.h"
#include "deletecorenetworkpolicyversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteCoreNetworkPolicyVersionResponse
 * \brief The DeleteCoreNetworkPolicyVersionResponse class provides an interace for NetworkManager DeleteCoreNetworkPolicyVersion responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deleteCoreNetworkPolicyVersion
 */

/*!
 * Constructs a DeleteCoreNetworkPolicyVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCoreNetworkPolicyVersionResponse::DeleteCoreNetworkPolicyVersionResponse(
        const DeleteCoreNetworkPolicyVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DeleteCoreNetworkPolicyVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteCoreNetworkPolicyVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCoreNetworkPolicyVersionRequest * DeleteCoreNetworkPolicyVersionResponse::request() const
{
    Q_D(const DeleteCoreNetworkPolicyVersionResponse);
    return static_cast<const DeleteCoreNetworkPolicyVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DeleteCoreNetworkPolicyVersion \a response.
 */
void DeleteCoreNetworkPolicyVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCoreNetworkPolicyVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DeleteCoreNetworkPolicyVersionResponsePrivate
 * \brief The DeleteCoreNetworkPolicyVersionResponsePrivate class provides private implementation for DeleteCoreNetworkPolicyVersionResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteCoreNetworkPolicyVersionResponsePrivate object with public implementation \a q.
 */
DeleteCoreNetworkPolicyVersionResponsePrivate::DeleteCoreNetworkPolicyVersionResponsePrivate(
    DeleteCoreNetworkPolicyVersionResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DeleteCoreNetworkPolicyVersion response element from \a xml.
 */
void DeleteCoreNetworkPolicyVersionResponsePrivate::parseDeleteCoreNetworkPolicyVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCoreNetworkPolicyVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
