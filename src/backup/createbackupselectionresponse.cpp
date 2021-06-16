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

#include "createbackupselectionresponse.h"
#include "createbackupselectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::CreateBackupSelectionResponse
 * \brief The CreateBackupSelectionResponse class provides an interace for Backup CreateBackupSelection responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::createBackupSelection
 */

/*!
 * Constructs a CreateBackupSelectionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBackupSelectionResponse::CreateBackupSelectionResponse(
        const CreateBackupSelectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new CreateBackupSelectionResponsePrivate(this), parent)
{
    setRequest(new CreateBackupSelectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBackupSelectionRequest * CreateBackupSelectionResponse::request() const
{
    Q_D(const CreateBackupSelectionResponse);
    return static_cast<const CreateBackupSelectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup CreateBackupSelection \a response.
 */
void CreateBackupSelectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBackupSelectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::CreateBackupSelectionResponsePrivate
 * \brief The CreateBackupSelectionResponsePrivate class provides private implementation for CreateBackupSelectionResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a CreateBackupSelectionResponsePrivate object with public implementation \a q.
 */
CreateBackupSelectionResponsePrivate::CreateBackupSelectionResponsePrivate(
    CreateBackupSelectionResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup CreateBackupSelection response element from \a xml.
 */
void CreateBackupSelectionResponsePrivate::parseCreateBackupSelectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBackupSelectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
