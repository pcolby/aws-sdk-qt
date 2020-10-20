/*
    Copyright 2013-2020 Paul Colby

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

#include "deleterecoverypointresponse.h"
#include "deleterecoverypointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteRecoveryPointResponse
 * \brief The DeleteRecoveryPointResponse class provides an interace for Backup DeleteRecoveryPoint responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteRecoveryPoint
 */

/*!
 * Constructs a DeleteRecoveryPointResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRecoveryPointResponse::DeleteRecoveryPointResponse(
        const DeleteRecoveryPointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DeleteRecoveryPointResponsePrivate(this), parent)
{
    setRequest(new DeleteRecoveryPointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRecoveryPointRequest * DeleteRecoveryPointResponse::request() const
{
    Q_D(const DeleteRecoveryPointResponse);
    return static_cast<const DeleteRecoveryPointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DeleteRecoveryPoint \a response.
 */
void DeleteRecoveryPointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRecoveryPointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DeleteRecoveryPointResponsePrivate
 * \brief The DeleteRecoveryPointResponsePrivate class provides private implementation for DeleteRecoveryPointResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteRecoveryPointResponsePrivate object with public implementation \a q.
 */
DeleteRecoveryPointResponsePrivate::DeleteRecoveryPointResponsePrivate(
    DeleteRecoveryPointResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DeleteRecoveryPoint response element from \a xml.
 */
void DeleteRecoveryPointResponsePrivate::parseDeleteRecoveryPointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRecoveryPointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
