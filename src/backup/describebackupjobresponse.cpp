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

#include "describebackupjobresponse.h"
#include "describebackupjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeBackupJobResponse
 * \brief The DescribeBackupJobResponse class provides an interace for Backup DescribeBackupJob responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeBackupJob
 */

/*!
 * Constructs a DescribeBackupJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBackupJobResponse::DescribeBackupJobResponse(
        const DescribeBackupJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DescribeBackupJobResponsePrivate(this), parent)
{
    setRequest(new DescribeBackupJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBackupJobRequest * DescribeBackupJobResponse::request() const
{
    Q_D(const DescribeBackupJobResponse);
    return static_cast<const DescribeBackupJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DescribeBackupJob \a response.
 */
void DescribeBackupJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBackupJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DescribeBackupJobResponsePrivate
 * \brief The DescribeBackupJobResponsePrivate class provides private implementation for DescribeBackupJobResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeBackupJobResponsePrivate object with public implementation \a q.
 */
DescribeBackupJobResponsePrivate::DescribeBackupJobResponsePrivate(
    DescribeBackupJobResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DescribeBackupJob response element from \a xml.
 */
void DescribeBackupJobResponsePrivate::parseDescribeBackupJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBackupJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
