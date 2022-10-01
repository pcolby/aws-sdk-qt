// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbackupplantemplatesresponse.h"
#include "listbackupplantemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListBackupPlanTemplatesResponse
 * \brief The ListBackupPlanTemplatesResponse class provides an interace for Backup ListBackupPlanTemplates responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listBackupPlanTemplates
 */

/*!
 * Constructs a ListBackupPlanTemplatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListBackupPlanTemplatesResponse::ListBackupPlanTemplatesResponse(
        const ListBackupPlanTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListBackupPlanTemplatesResponsePrivate(this), parent)
{
    setRequest(new ListBackupPlanTemplatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBackupPlanTemplatesRequest * ListBackupPlanTemplatesResponse::request() const
{
    Q_D(const ListBackupPlanTemplatesResponse);
    return static_cast<const ListBackupPlanTemplatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ListBackupPlanTemplates \a response.
 */
void ListBackupPlanTemplatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBackupPlanTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListBackupPlanTemplatesResponsePrivate
 * \brief The ListBackupPlanTemplatesResponsePrivate class provides private implementation for ListBackupPlanTemplatesResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListBackupPlanTemplatesResponsePrivate object with public implementation \a q.
 */
ListBackupPlanTemplatesResponsePrivate::ListBackupPlanTemplatesResponsePrivate(
    ListBackupPlanTemplatesResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListBackupPlanTemplates response element from \a xml.
 */
void ListBackupPlanTemplatesResponsePrivate::parseListBackupPlanTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBackupPlanTemplatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
