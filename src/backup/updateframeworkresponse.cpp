// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateframeworkresponse.h"
#include "updateframeworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::UpdateFrameworkResponse
 * \brief The UpdateFrameworkResponse class provides an interace for Backup UpdateFramework responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::updateFramework
 */

/*!
 * Constructs a UpdateFrameworkResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFrameworkResponse::UpdateFrameworkResponse(
        const UpdateFrameworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new UpdateFrameworkResponsePrivate(this), parent)
{
    setRequest(new UpdateFrameworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFrameworkRequest * UpdateFrameworkResponse::request() const
{
    Q_D(const UpdateFrameworkResponse);
    return static_cast<const UpdateFrameworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup UpdateFramework \a response.
 */
void UpdateFrameworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFrameworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::UpdateFrameworkResponsePrivate
 * \brief The UpdateFrameworkResponsePrivate class provides private implementation for UpdateFrameworkResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a UpdateFrameworkResponsePrivate object with public implementation \a q.
 */
UpdateFrameworkResponsePrivate::UpdateFrameworkResponsePrivate(
    UpdateFrameworkResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup UpdateFramework response element from \a xml.
 */
void UpdateFrameworkResponsePrivate::parseUpdateFrameworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFrameworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
