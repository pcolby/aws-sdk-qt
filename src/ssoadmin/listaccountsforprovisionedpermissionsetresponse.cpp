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

#include "listaccountsforprovisionedpermissionsetresponse.h"
#include "listaccountsforprovisionedpermissionsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::ListAccountsForProvisionedPermissionSetResponse
 * \brief The ListAccountsForProvisionedPermissionSetResponse class provides an interace for SSOAdmin ListAccountsForProvisionedPermissionSet responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::listAccountsForProvisionedPermissionSet
 */

/*!
 * Constructs a ListAccountsForProvisionedPermissionSetResponse object for \a reply to \a request, with parent \a parent.
 */
ListAccountsForProvisionedPermissionSetResponse::ListAccountsForProvisionedPermissionSetResponse(
        const ListAccountsForProvisionedPermissionSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new ListAccountsForProvisionedPermissionSetResponsePrivate(this), parent)
{
    setRequest(new ListAccountsForProvisionedPermissionSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAccountsForProvisionedPermissionSetRequest * ListAccountsForProvisionedPermissionSetResponse::request() const
{
    return static_cast<const ListAccountsForProvisionedPermissionSetRequest *>(SSOAdminResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSOAdmin ListAccountsForProvisionedPermissionSet \a response.
 */
void ListAccountsForProvisionedPermissionSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAccountsForProvisionedPermissionSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::ListAccountsForProvisionedPermissionSetResponsePrivate
 * \brief The ListAccountsForProvisionedPermissionSetResponsePrivate class provides private implementation for ListAccountsForProvisionedPermissionSetResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a ListAccountsForProvisionedPermissionSetResponsePrivate object with public implementation \a q.
 */
ListAccountsForProvisionedPermissionSetResponsePrivate::ListAccountsForProvisionedPermissionSetResponsePrivate(
    ListAccountsForProvisionedPermissionSetResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin ListAccountsForProvisionedPermissionSet response element from \a xml.
 */
void ListAccountsForProvisionedPermissionSetResponsePrivate::parseListAccountsForProvisionedPermissionSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccountsForProvisionedPermissionSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
