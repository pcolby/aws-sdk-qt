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

#include "listframeworksresponse.h"
#include "listframeworksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListFrameworksResponse
 * \brief The ListFrameworksResponse class provides an interace for Backup ListFrameworks responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listFrameworks
 */

/*!
 * Constructs a ListFrameworksResponse object for \a reply to \a request, with parent \a parent.
 */
ListFrameworksResponse::ListFrameworksResponse(
        const ListFrameworksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListFrameworksResponsePrivate(this), parent)
{
    setRequest(new ListFrameworksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFrameworksRequest * ListFrameworksResponse::request() const
{
    Q_D(const ListFrameworksResponse);
    return static_cast<const ListFrameworksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ListFrameworks \a response.
 */
void ListFrameworksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFrameworksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListFrameworksResponsePrivate
 * \brief The ListFrameworksResponsePrivate class provides private implementation for ListFrameworksResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListFrameworksResponsePrivate object with public implementation \a q.
 */
ListFrameworksResponsePrivate::ListFrameworksResponsePrivate(
    ListFrameworksResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListFrameworks response element from \a xml.
 */
void ListFrameworksResponsePrivate::parseListFrameworksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFrameworksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
