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

#include "startcopyjobresponse.h"
#include "startcopyjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::StartCopyJobResponse
 * \brief The StartCopyJobResponse class provides an interace for Backup StartCopyJob responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::startCopyJob
 */

/*!
 * Constructs a StartCopyJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartCopyJobResponse::StartCopyJobResponse(
        const StartCopyJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new StartCopyJobResponsePrivate(this), parent)
{
    setRequest(new StartCopyJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartCopyJobRequest * StartCopyJobResponse::request() const
{
    Q_D(const StartCopyJobResponse);
    return static_cast<const StartCopyJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup StartCopyJob \a response.
 */
void StartCopyJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartCopyJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::StartCopyJobResponsePrivate
 * \brief The StartCopyJobResponsePrivate class provides private implementation for StartCopyJobResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a StartCopyJobResponsePrivate object with public implementation \a q.
 */
StartCopyJobResponsePrivate::StartCopyJobResponsePrivate(
    StartCopyJobResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup StartCopyJob response element from \a xml.
 */
void StartCopyJobResponsePrivate::parseStartCopyJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartCopyJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
