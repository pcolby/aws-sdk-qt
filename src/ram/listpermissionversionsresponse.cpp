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

#include "listpermissionversionsresponse.h"
#include "listpermissionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::ListPermissionVersionsResponse
 * \brief The ListPermissionVersionsResponse class provides an interace for Ram ListPermissionVersions responses.
 *
 * \inmodule QtAwsRam
 *
 *  This is the <i>Resource Access Manager API Reference</i>. This documentation provides descriptions and syntax for each
 *  of the actions and data types in RAM. RAM is a service that helps you securely share your Amazon Web Services resources
 *  across Amazon Web Services accounts. If you have multiple Amazon Web Services accounts, you can use RAM to share those
 *  resources with other accounts. If you use Organizations to manage your accounts, then you share your resources with your
 *  organization or organizational units (OUs). For supported resource types, you can also share resources with individual
 *  Identity and Access Management (IAM) roles an users.
 * 
 *  </p
 * 
 *  To learn more about RAM, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ram">Resource Access Manager product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/ram/latest/userguide/">Resource Access Manager User Guide</a>
 *
 * \sa RamClient::listPermissionVersions
 */

/*!
 * Constructs a ListPermissionVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPermissionVersionsResponse::ListPermissionVersionsResponse(
        const ListPermissionVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RamResponse(new ListPermissionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListPermissionVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPermissionVersionsRequest * ListPermissionVersionsResponse::request() const
{
    Q_D(const ListPermissionVersionsResponse);
    return static_cast<const ListPermissionVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ram ListPermissionVersions \a response.
 */
void ListPermissionVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPermissionVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ram::ListPermissionVersionsResponsePrivate
 * \brief The ListPermissionVersionsResponsePrivate class provides private implementation for ListPermissionVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a ListPermissionVersionsResponsePrivate object with public implementation \a q.
 */
ListPermissionVersionsResponsePrivate::ListPermissionVersionsResponsePrivate(
    ListPermissionVersionsResponse * const q) : RamResponsePrivate(q)
{

}

/*!
 * Parses a Ram ListPermissionVersions response element from \a xml.
 */
void ListPermissionVersionsResponsePrivate::parseListPermissionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPermissionVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ram
} // namespace QtAws
