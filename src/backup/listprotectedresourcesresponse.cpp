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

#include "listprotectedresourcesresponse.h"
#include "listprotectedresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListProtectedResourcesResponse
 * \brief The ListProtectedResourcesResponse class provides an interace for Backup ListProtectedResources responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listProtectedResources
 */

/*!
 * Constructs a ListProtectedResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListProtectedResourcesResponse::ListProtectedResourcesResponse(
        const ListProtectedResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListProtectedResourcesResponsePrivate(this), parent)
{
    setRequest(new ListProtectedResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProtectedResourcesRequest * ListProtectedResourcesResponse::request() const
{
    Q_D(const ListProtectedResourcesResponse);
    return static_cast<const ListProtectedResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ListProtectedResources \a response.
 */
void ListProtectedResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProtectedResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListProtectedResourcesResponsePrivate
 * \brief The ListProtectedResourcesResponsePrivate class provides private implementation for ListProtectedResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListProtectedResourcesResponsePrivate object with public implementation \a q.
 */
ListProtectedResourcesResponsePrivate::ListProtectedResourcesResponsePrivate(
    ListProtectedResourcesResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListProtectedResources response element from \a xml.
 */
void ListProtectedResourcesResponsePrivate::parseListProtectedResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProtectedResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
