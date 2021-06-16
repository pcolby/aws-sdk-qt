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

#include "listpermissionsetprovisioningstatusresponse.h"
#include "listpermissionsetprovisioningstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::ListPermissionSetProvisioningStatusResponse
 * \brief The ListPermissionSetProvisioningStatusResponse class provides an interace for SSOAdmin ListPermissionSetProvisioningStatus responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::listPermissionSetProvisioningStatus
 */

/*!
 * Constructs a ListPermissionSetProvisioningStatusResponse object for \a reply to \a request, with parent \a parent.
 */
ListPermissionSetProvisioningStatusResponse::ListPermissionSetProvisioningStatusResponse(
        const ListPermissionSetProvisioningStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new ListPermissionSetProvisioningStatusResponsePrivate(this), parent)
{
    setRequest(new ListPermissionSetProvisioningStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPermissionSetProvisioningStatusRequest * ListPermissionSetProvisioningStatusResponse::request() const
{
    Q_D(const ListPermissionSetProvisioningStatusResponse);
    return static_cast<const ListPermissionSetProvisioningStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSOAdmin ListPermissionSetProvisioningStatus \a response.
 */
void ListPermissionSetProvisioningStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPermissionSetProvisioningStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::ListPermissionSetProvisioningStatusResponsePrivate
 * \brief The ListPermissionSetProvisioningStatusResponsePrivate class provides private implementation for ListPermissionSetProvisioningStatusResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a ListPermissionSetProvisioningStatusResponsePrivate object with public implementation \a q.
 */
ListPermissionSetProvisioningStatusResponsePrivate::ListPermissionSetProvisioningStatusResponsePrivate(
    ListPermissionSetProvisioningStatusResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin ListPermissionSetProvisioningStatus response element from \a xml.
 */
void ListPermissionSetProvisioningStatusResponsePrivate::parseListPermissionSetProvisioningStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPermissionSetProvisioningStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
