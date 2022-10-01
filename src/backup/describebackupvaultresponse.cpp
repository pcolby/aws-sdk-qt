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

#include "describebackupvaultresponse.h"
#include "describebackupvaultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeBackupVaultResponse
 * \brief The DescribeBackupVaultResponse class provides an interace for Backup DescribeBackupVault responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeBackupVault
 */

/*!
 * Constructs a DescribeBackupVaultResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBackupVaultResponse::DescribeBackupVaultResponse(
        const DescribeBackupVaultRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DescribeBackupVaultResponsePrivate(this), parent)
{
    setRequest(new DescribeBackupVaultRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBackupVaultRequest * DescribeBackupVaultResponse::request() const
{
    Q_D(const DescribeBackupVaultResponse);
    return static_cast<const DescribeBackupVaultRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DescribeBackupVault \a response.
 */
void DescribeBackupVaultResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBackupVaultResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DescribeBackupVaultResponsePrivate
 * \brief The DescribeBackupVaultResponsePrivate class provides private implementation for DescribeBackupVaultResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeBackupVaultResponsePrivate object with public implementation \a q.
 */
DescribeBackupVaultResponsePrivate::DescribeBackupVaultResponsePrivate(
    DescribeBackupVaultResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DescribeBackupVault response element from \a xml.
 */
void DescribeBackupVaultResponsePrivate::parseDescribeBackupVaultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBackupVaultResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
