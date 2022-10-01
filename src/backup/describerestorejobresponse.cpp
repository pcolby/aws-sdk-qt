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
