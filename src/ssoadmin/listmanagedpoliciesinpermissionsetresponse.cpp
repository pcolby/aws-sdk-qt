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

#include "listmanagedpoliciesinpermissionsetresponse.h"
#include "listmanagedpoliciesinpermissionsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::ListManagedPoliciesInPermissionSetResponse
 * \brief The ListManagedPoliciesInPermissionSetResponse class provides an interace for SSOAdmin ListManagedPoliciesInPermissionSet responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::listManagedPoliciesInPermissionSet
 */

/*!
 * Constructs a ListManagedPoliciesInPermissionSetResponse object for \a reply to \a request, with parent \a parent.
 */
ListManagedPoliciesInPermissionSetResponse::ListManagedPoliciesInPermissionSetResponse(
        const ListManagedPoliciesInPermissionSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new ListManagedPoliciesInPermissionSetResponsePrivate(this), parent)
{
    setRequest(new ListManagedPoliciesInPermissionSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListManagedPoliciesInPermissionSetRequest * ListManagedPoliciesInPermissionSetResponse::request() const
{
    Q_D(const ListManagedPoliciesInPermissionSetResponse);
    return static_cast<const ListManagedPoliciesInPermissionSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSOAdmin ListManagedPoliciesInPermissionSet \a response.
 */
void ListManagedPoliciesInPermissionSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListManagedPoliciesInPermissionSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::ListManagedPoliciesInPermissionSetResponsePrivate
 * \brief The ListManagedPoliciesInPermissionSetResponsePrivate class provides private implementation for ListManagedPoliciesInPermissionSetResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a ListManagedPoliciesInPermissionSetResponsePrivate object with public implementation \a q.
 */
ListManagedPoliciesInPermissionSetResponsePrivate::ListManagedPoliciesInPermissionSetResponsePrivate(
    ListManagedPoliciesInPermissionSetResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin ListManagedPoliciesInPermissionSet response element from \a xml.
 */
void ListManagedPoliciesInPermissionSetResponsePrivate::parseListManagedPoliciesInPermissionSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListManagedPoliciesInPermissionSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
