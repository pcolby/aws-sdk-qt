// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
