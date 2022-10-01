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

#include "listorganizationserviceaccessstatusresponse.h"
#include "listorganizationserviceaccessstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::ListOrganizationServiceAccessStatusResponse
 * \brief The ListOrganizationServiceAccessStatusResponse class provides an interace for NetworkManager ListOrganizationServiceAccessStatus responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::listOrganizationServiceAccessStatus
 */

/*!
 * Constructs a ListOrganizationServiceAccessStatusResponse object for \a reply to \a request, with parent \a parent.
 */
ListOrganizationServiceAccessStatusResponse::ListOrganizationServiceAccessStatusResponse(
        const ListOrganizationServiceAccessStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new ListOrganizationServiceAccessStatusResponsePrivate(this), parent)
{
    setRequest(new ListOrganizationServiceAccessStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOrganizationServiceAccessStatusRequest * ListOrganizationServiceAccessStatusResponse::request() const
{
    Q_D(const ListOrganizationServiceAccessStatusResponse);
    return static_cast<const ListOrganizationServiceAccessStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager ListOrganizationServiceAccessStatus \a response.
 */
void ListOrganizationServiceAccessStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOrganizationServiceAccessStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::ListOrganizationServiceAccessStatusResponsePrivate
 * \brief The ListOrganizationServiceAccessStatusResponsePrivate class provides private implementation for ListOrganizationServiceAccessStatusResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a ListOrganizationServiceAccessStatusResponsePrivate object with public implementation \a q.
 */
ListOrganizationServiceAccessStatusResponsePrivate::ListOrganizationServiceAccessStatusResponsePrivate(
    ListOrganizationServiceAccessStatusResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager ListOrganizationServiceAccessStatus response element from \a xml.
 */
void ListOrganizationServiceAccessStatusResponsePrivate::parseListOrganizationServiceAccessStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOrganizationServiceAccessStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
