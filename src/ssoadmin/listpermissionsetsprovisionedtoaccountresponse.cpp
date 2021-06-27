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

#include "listpermissionsetsprovisionedtoaccountresponse.h"
#include "listpermissionsetsprovisionedtoaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::ListPermissionSetsProvisionedToAccountResponse
 * \brief The ListPermissionSetsProvisionedToAccountResponse class provides an interace for SSOAdmin ListPermissionSetsProvisionedToAccount responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::listPermissionSetsProvisionedToAccount
 */

/*!
 * Constructs a ListPermissionSetsProvisionedToAccountResponse object for \a reply to \a request, with parent \a parent.
 */
ListPermissionSetsProvisionedToAccountResponse::ListPermissionSetsProvisionedToAccountResponse(
        const ListPermissionSetsProvisionedToAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new ListPermissionSetsProvisionedToAccountResponsePrivate(this), parent)
{
    setRequest(new ListPermissionSetsProvisionedToAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPermissionSetsProvisionedToAccountRequest * ListPermissionSetsProvisionedToAccountResponse::request() const
{
    return static_cast<const ListPermissionSetsProvisionedToAccountRequest *>(SSOAdminResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSOAdmin ListPermissionSetsProvisionedToAccount \a response.
 */
void ListPermissionSetsProvisionedToAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPermissionSetsProvisionedToAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::ListPermissionSetsProvisionedToAccountResponsePrivate
 * \brief The ListPermissionSetsProvisionedToAccountResponsePrivate class provides private implementation for ListPermissionSetsProvisionedToAccountResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a ListPermissionSetsProvisionedToAccountResponsePrivate object with public implementation \a q.
 */
ListPermissionSetsProvisionedToAccountResponsePrivate::ListPermissionSetsProvisionedToAccountResponsePrivate(
    ListPermissionSetsProvisionedToAccountResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin ListPermissionSetsProvisionedToAccount response element from \a xml.
 */
void ListPermissionSetsProvisionedToAccountResponsePrivate::parseListPermissionSetsProvisionedToAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPermissionSetsProvisionedToAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
