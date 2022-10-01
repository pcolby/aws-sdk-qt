// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereportplanresponse.h"
#include "deletereportplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteReportPlanResponse
 * \brief The DeleteReportPlanResponse class provides an interace for Backup DeleteReportPlan responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteReportPlan
 */

/*!
 * Constructs a DeleteReportPlanResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReportPlanResponse::DeleteReportPlanResponse(
        const DeleteReportPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DeleteReportPlanResponsePrivate(this), parent)
{
    setRequest(new DeleteReportPlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReportPlanRequest * DeleteReportPlanResponse::request() const
{
    Q_D(const DeleteReportPlanResponse);
    return static_cast<const DeleteReportPlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DeleteReportPlan \a response.
 */
void DeleteReportPlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReportPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DeleteReportPlanResponsePrivate
 * \brief The DeleteReportPlanResponsePrivate class provides private implementation for DeleteReportPlanResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteReportPlanResponsePrivate object with public implementation \a q.
 */
DeleteReportPlanResponsePrivate::DeleteReportPlanResponsePrivate(
    DeleteReportPlanResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DeleteReportPlan response element from \a xml.
 */
void DeleteReportPlanResponsePrivate::parseDeleteReportPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReportPlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
