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

#include "getlinkassociationsresponse.h"
#include "getlinkassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetLinkAssociationsResponse
 * \brief The GetLinkAssociationsResponse class provides an interace for NetworkManager GetLinkAssociations responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getLinkAssociations
 */

/*!
 * Constructs a GetLinkAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetLinkAssociationsResponse::GetLinkAssociationsResponse(
        const GetLinkAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetLinkAssociationsResponsePrivate(this), parent)
{
    setRequest(new GetLinkAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLinkAssociationsRequest * GetLinkAssociationsResponse::request() const
{
    Q_D(const GetLinkAssociationsResponse);
    return static_cast<const GetLinkAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetLinkAssociations \a response.
 */
void GetLinkAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLinkAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetLinkAssociationsResponsePrivate
 * \brief The GetLinkAssociationsResponsePrivate class provides private implementation for GetLinkAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetLinkAssociationsResponsePrivate object with public implementation \a q.
 */
GetLinkAssociationsResponsePrivate::GetLinkAssociationsResponsePrivate(
    GetLinkAssociationsResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetLinkAssociations response element from \a xml.
 */
void GetLinkAssociationsResponsePrivate::parseGetLinkAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLinkAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
