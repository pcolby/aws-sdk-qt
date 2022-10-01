// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcopyjobsresponse.h"
#include "listcopyjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListCopyJobsResponse
 * \brief The ListCopyJobsResponse class provides an interace for Backup ListCopyJobs responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listCopyJobs
 */

/*!
 * Constructs a ListCopyJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCopyJobsResponse::ListCopyJobsResponse(
        const ListCopyJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListCopyJobsResponsePrivate(this), parent)
{
    setRequest(new ListCopyJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCopyJobsRequest * ListCopyJobsResponse::request() const
{
    Q_D(const ListCopyJobsResponse);
    return static_cast<const ListCopyJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ListCopyJobs \a response.
 */
void ListCopyJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCopyJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListCopyJobsResponsePrivate
 * \brief The ListCopyJobsResponsePrivate class provides private implementation for ListCopyJobsResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListCopyJobsResponsePrivate object with public implementation \a q.
 */
ListCopyJobsResponsePrivate::ListCopyJobsResponsePrivate(
    ListCopyJobsResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListCopyJobs response element from \a xml.
 */
void ListCopyJobsResponsePrivate::parseListCopyJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCopyJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
