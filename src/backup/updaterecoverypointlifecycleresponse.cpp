// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updaterecoverypointlifecycleresponse.h"
#include "updaterecoverypointlifecycleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::UpdateRecoveryPointLifecycleResponse
 * \brief The UpdateRecoveryPointLifecycleResponse class provides an interace for Backup UpdateRecoveryPointLifecycle responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::updateRecoveryPointLifecycle
 */

/*!
 * Constructs a UpdateRecoveryPointLifecycleResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRecoveryPointLifecycleResponse::UpdateRecoveryPointLifecycleResponse(
        const UpdateRecoveryPointLifecycleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new UpdateRecoveryPointLifecycleResponsePrivate(this), parent)
{
    setRequest(new UpdateRecoveryPointLifecycleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRecoveryPointLifecycleRequest * UpdateRecoveryPointLifecycleResponse::request() const
{
    Q_D(const UpdateRecoveryPointLifecycleResponse);
    return static_cast<const UpdateRecoveryPointLifecycleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup UpdateRecoveryPointLifecycle \a response.
 */
void UpdateRecoveryPointLifecycleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRecoveryPointLifecycleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::UpdateRecoveryPointLifecycleResponsePrivate
 * \brief The UpdateRecoveryPointLifecycleResponsePrivate class provides private implementation for UpdateRecoveryPointLifecycleResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a UpdateRecoveryPointLifecycleResponsePrivate object with public implementation \a q.
 */
UpdateRecoveryPointLifecycleResponsePrivate::UpdateRecoveryPointLifecycleResponsePrivate(
    UpdateRecoveryPointLifecycleResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup UpdateRecoveryPointLifecycle response element from \a xml.
 */
void UpdateRecoveryPointLifecycleResponsePrivate::parseUpdateRecoveryPointLifecycleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRecoveryPointLifecycleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
