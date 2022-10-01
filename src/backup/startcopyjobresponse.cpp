// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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
