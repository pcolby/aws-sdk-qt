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

#include "deleteframeworkresponse.h"
#include "deleteframeworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteFrameworkResponse
 * \brief The DeleteFrameworkResponse class provides an interace for Backup DeleteFramework responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteFramework
 */

/*!
 * Constructs a DeleteFrameworkResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFrameworkResponse::DeleteFrameworkResponse(
        const DeleteFrameworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DeleteFrameworkResponsePrivate(this), parent)
{
    setRequest(new DeleteFrameworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFrameworkRequest * DeleteFrameworkResponse::request() const
{
    Q_D(const DeleteFrameworkResponse);
    return static_cast<const DeleteFrameworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DeleteFramework \a response.
 */
void DeleteFrameworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFrameworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DeleteFrameworkResponsePrivate
 * \brief The DeleteFrameworkResponsePrivate class provides private implementation for DeleteFrameworkResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteFrameworkResponsePrivate object with public implementation \a q.
 */
DeleteFrameworkResponsePrivate::DeleteFrameworkResponsePrivate(
    DeleteFrameworkResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DeleteFramework response element from \a xml.
 */
void DeleteFrameworkResponsePrivate::parseDeleteFrameworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFrameworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
