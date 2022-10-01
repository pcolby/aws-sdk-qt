// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
