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

#include "describecopyjobresponse.h"
#include "describecopyjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeCopyJobResponse
 * \brief The DescribeCopyJobResponse class provides an interace for Backup DescribeCopyJob responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeCopyJob
 */

/*!
 * Constructs a DescribeCopyJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCopyJobResponse::DescribeCopyJobResponse(
        const DescribeCopyJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DescribeCopyJobResponsePrivate(this), parent)
{
    setRequest(new DescribeCopyJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCopyJobRequest * DescribeCopyJobResponse::request() const
{
    return static_cast<const DescribeCopyJobRequest *>(BackupResponse::request());
}

/*!
 * \reimp
 * Parses a successful Backup DescribeCopyJob \a response.
 */
void DescribeCopyJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCopyJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DescribeCopyJobResponsePrivate
 * \brief The DescribeCopyJobResponsePrivate class provides private implementation for DescribeCopyJobResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeCopyJobResponsePrivate object with public implementation \a q.
 */
DescribeCopyJobResponsePrivate::DescribeCopyJobResponsePrivate(
    DescribeCopyJobResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DescribeCopyJob response element from \a xml.
 */
void DescribeCopyJobResponsePrivate::parseDescribeCopyJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCopyJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
