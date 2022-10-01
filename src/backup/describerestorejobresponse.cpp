// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describerestorejobresponse.h"
#include "describerestorejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeRestoreJobResponse
 * \brief The DescribeRestoreJobResponse class provides an interace for Backup DescribeRestoreJob responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeRestoreJob
 */

/*!
 * Constructs a DescribeRestoreJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRestoreJobResponse::DescribeRestoreJobResponse(
        const DescribeRestoreJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DescribeRestoreJobResponsePrivate(this), parent)
{
    setRequest(new DescribeRestoreJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRestoreJobRequest * DescribeRestoreJobResponse::request() const
{
    Q_D(const DescribeRestoreJobResponse);
    return static_cast<const DescribeRestoreJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DescribeRestoreJob \a response.
 */
void DescribeRestoreJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRestoreJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DescribeRestoreJobResponsePrivate
 * \brief The DescribeRestoreJobResponsePrivate class provides private implementation for DescribeRestoreJobResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeRestoreJobResponsePrivate object with public implementation \a q.
 */
DescribeRestoreJobResponsePrivate::DescribeRestoreJobResponsePrivate(
    DescribeRestoreJobResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DescribeRestoreJob response element from \a xml.
 */
void DescribeRestoreJobResponsePrivate::parseDescribeRestoreJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRestoreJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
