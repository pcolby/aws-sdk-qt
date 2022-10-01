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

#include "describereportjobresponse.h"
#include "describereportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeReportJobResponse
 * \brief The DescribeReportJobResponse class provides an interace for Backup DescribeReportJob responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeReportJob
 */

/*!
 * Constructs a DescribeReportJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReportJobResponse::DescribeReportJobResponse(
        const DescribeReportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DescribeReportJobResponsePrivate(this), parent)
{
    setRequest(new DescribeReportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReportJobRequest * DescribeReportJobResponse::request() const
{
    Q_D(const DescribeReportJobResponse);
    return static_cast<const DescribeReportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DescribeReportJob \a response.
 */
void DescribeReportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DescribeReportJobResponsePrivate
 * \brief The DescribeReportJobResponsePrivate class provides private implementation for DescribeReportJobResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeReportJobResponsePrivate object with public implementation \a q.
 */
DescribeReportJobResponsePrivate::DescribeReportJobResponsePrivate(
    DescribeReportJobResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DescribeReportJob response element from \a xml.
 */
void DescribeReportJobResponsePrivate::parseDescribeReportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
