// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreportplansresponse.h"
#include "listreportplansresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListReportPlansResponse
 * \brief The ListReportPlansResponse class provides an interace for Backup ListReportPlans responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listReportPlans
 */

/*!
 * Constructs a ListReportPlansResponse object for \a reply to \a request, with parent \a parent.
 */
ListReportPlansResponse::ListReportPlansResponse(
        const ListReportPlansRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListReportPlansResponsePrivate(this), parent)
{
    setRequest(new ListReportPlansRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReportPlansRequest * ListReportPlansResponse::request() const
{
    Q_D(const ListReportPlansResponse);
    return static_cast<const ListReportPlansRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ListReportPlans \a response.
 */
void ListReportPlansResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListReportPlansResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListReportPlansResponsePrivate
 * \brief The ListReportPlansResponsePrivate class provides private implementation for ListReportPlansResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListReportPlansResponsePrivate object with public implementation \a q.
 */
ListReportPlansResponsePrivate::ListReportPlansResponsePrivate(
    ListReportPlansResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListReportPlans response element from \a xml.
 */
void ListReportPlansResponsePrivate::parseListReportPlansResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReportPlansResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
