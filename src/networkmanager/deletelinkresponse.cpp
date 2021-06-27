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

#include "deletelinkresponse.h"
#include "deletelinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteLinkResponse
 * \brief The DeleteLinkResponse class provides an interace for NetworkManager DeleteLink responses.
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
 * \sa NetworkManagerClient::deleteLink
 */

/*!
 * Constructs a DeleteLinkResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLinkResponse::DeleteLinkResponse(
        const DeleteLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DeleteLinkResponsePrivate(this), parent)
{
    setRequest(new DeleteLinkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLinkRequest * DeleteLinkResponse::request() const
{
    return static_cast<const DeleteLinkRequest *>(NetworkManagerResponse::request());
}

/*!
 * \reimp
 * Parses a successful NetworkManager DeleteLink \a response.
 */
void DeleteLinkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DeleteLinkResponsePrivate
 * \brief The DeleteLinkResponsePrivate class provides private implementation for DeleteLinkResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteLinkResponsePrivate object with public implementation \a q.
 */
DeleteLinkResponsePrivate::DeleteLinkResponsePrivate(
    DeleteLinkResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DeleteLink response element from \a xml.
 */
void DeleteLinkResponsePrivate::parseDeleteLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLinkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
