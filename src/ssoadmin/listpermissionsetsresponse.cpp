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

#include "listpermissionsetsresponse.h"
#include "listpermissionsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::ListPermissionSetsResponse
 * \brief The ListPermissionSetsResponse class provides an interace for SSOAdmin ListPermissionSets responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::listPermissionSets
 */

/*!
 * Constructs a ListPermissionSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPermissionSetsResponse::ListPermissionSetsResponse(
        const ListPermissionSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new ListPermissionSetsResponsePrivate(this), parent)
{
    setRequest(new ListPermissionSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPermissionSetsRequest * ListPermissionSetsResponse::request() const
{
    return static_cast<const ListPermissionSetsRequest *>(SSOAdminResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSOAdmin ListPermissionSets \a response.
 */
void ListPermissionSetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPermissionSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::ListPermissionSetsResponsePrivate
 * \brief The ListPermissionSetsResponsePrivate class provides private implementation for ListPermissionSetsResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a ListPermissionSetsResponsePrivate object with public implementation \a q.
 */
ListPermissionSetsResponsePrivate::ListPermissionSetsResponsePrivate(
    ListPermissionSetsResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin ListPermissionSets response element from \a xml.
 */
void ListPermissionSetsResponsePrivate::parseListPermissionSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPermissionSetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
