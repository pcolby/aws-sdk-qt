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

#include "listaccountpermissionsresponse.h"
#include "listaccountpermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::ListAccountPermissionsResponse
 * \brief The ListAccountPermissionsResponse class provides an interace for Inspector2 ListAccountPermissions responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::listAccountPermissions
 */

/*!
 * Constructs a ListAccountPermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAccountPermissionsResponse::ListAccountPermissionsResponse(
        const ListAccountPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new ListAccountPermissionsResponsePrivate(this), parent)
{
    setRequest(new ListAccountPermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAccountPermissionsRequest * ListAccountPermissionsResponse::request() const
{
    Q_D(const ListAccountPermissionsResponse);
    return static_cast<const ListAccountPermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 ListAccountPermissions \a response.
 */
void ListAccountPermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAccountPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::ListAccountPermissionsResponsePrivate
 * \brief The ListAccountPermissionsResponsePrivate class provides private implementation for ListAccountPermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a ListAccountPermissionsResponsePrivate object with public implementation \a q.
 */
ListAccountPermissionsResponsePrivate::ListAccountPermissionsResponsePrivate(
    ListAccountPermissionsResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 ListAccountPermissions response element from \a xml.
 */
void ListAccountPermissionsResponsePrivate::parseListAccountPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccountPermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
