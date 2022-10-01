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

#include "associatelinkresponse.h"
#include "associatelinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::AssociateLinkResponse
 * \brief The AssociateLinkResponse class provides an interace for NetworkManager AssociateLink responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::associateLink
 */

/*!
 * Constructs a AssociateLinkResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateLinkResponse::AssociateLinkResponse(
        const AssociateLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new AssociateLinkResponsePrivate(this), parent)
{
    setRequest(new AssociateLinkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateLinkRequest * AssociateLinkResponse::request() const
{
    Q_D(const AssociateLinkResponse);
    return static_cast<const AssociateLinkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager AssociateLink \a response.
 */
void AssociateLinkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::AssociateLinkResponsePrivate
 * \brief The AssociateLinkResponsePrivate class provides private implementation for AssociateLinkResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a AssociateLinkResponsePrivate object with public implementation \a q.
 */
AssociateLinkResponsePrivate::AssociateLinkResponsePrivate(
    AssociateLinkResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager AssociateLink response element from \a xml.
 */
void AssociateLinkResponsePrivate::parseAssociateLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateLinkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
