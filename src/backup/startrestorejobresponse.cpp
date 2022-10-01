// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startrestorejobresponse.h"
#include "startrestorejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::StartRestoreJobResponse
 * \brief The StartRestoreJobResponse class provides an interace for Backup StartRestoreJob responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::startRestoreJob
 */

/*!
 * Constructs a StartRestoreJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartRestoreJobResponse::StartRestoreJobResponse(
        const StartRestoreJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new StartRestoreJobResponsePrivate(this), parent)
{
    setRequest(new StartRestoreJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartRestoreJobRequest * StartRestoreJobResponse::request() const
{
    Q_D(const StartRestoreJobResponse);
    return static_cast<const StartRestoreJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup StartRestoreJob \a response.
 */
void StartRestoreJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartRestoreJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::StartRestoreJobResponsePrivate
 * \brief The StartRestoreJobResponsePrivate class provides private implementation for StartRestoreJobResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a StartRestoreJobResponsePrivate object with public implementation \a q.
 */
StartRestoreJobResponsePrivate::StartRestoreJobResponsePrivate(
    StartRestoreJobResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup StartRestoreJob response element from \a xml.
 */
void StartRestoreJobResponsePrivate::parseStartRestoreJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartRestoreJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
