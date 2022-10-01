// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startreportjobresponse.h"
#include "startreportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::StartReportJobResponse
 * \brief The StartReportJobResponse class provides an interace for Backup StartReportJob responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::startReportJob
 */

/*!
 * Constructs a StartReportJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartReportJobResponse::StartReportJobResponse(
        const StartReportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new StartReportJobResponsePrivate(this), parent)
{
    setRequest(new StartReportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartReportJobRequest * StartReportJobResponse::request() const
{
    Q_D(const StartReportJobResponse);
    return static_cast<const StartReportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup StartReportJob \a response.
 */
void StartReportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartReportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::StartReportJobResponsePrivate
 * \brief The StartReportJobResponsePrivate class provides private implementation for StartReportJobResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a StartReportJobResponsePrivate object with public implementation \a q.
 */
StartReportJobResponsePrivate::StartReportJobResponsePrivate(
    StartReportJobResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup StartReportJob response element from \a xml.
 */
void StartReportJobResponsePrivate::parseStartReportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartReportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
