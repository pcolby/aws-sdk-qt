// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereplicationtaskresponse.h"
#include "deletereplicationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DeleteReplicationTaskResponse
 * \brief The DeleteReplicationTaskResponse class provides an interace for DatabaseMigration DeleteReplicationTask responses.
 *
 * \inmodule QtAwsDatabaseMigration
 *
 *  <fullname>Database Migration Service</fullname>
 * 
 *  Database Migration Service (DMS) can migrate your data to and from the most widely used commercial and open-source
 *  databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon Redshift, MariaDB, Amazon Aurora, MySQL, and SAP
 *  Adaptive Server Enterprise (ASE). The service supports homogeneous migrations such as Oracle to Oracle, as well as
 *  heterogeneous migrations between different database platforms, such as Oracle to MySQL or SQL Server to
 * 
 *  PostgreSQL>
 * 
 *  For more information about DMS, see <a href="https://docs.aws.amazon.com/dms/latest/userguide/Welcome.html">What Is
 *  Database Migration Service?</a> in the <i>Database Migration Service User Guide.</i>
 *
 * \sa DatabaseMigrationClient::deleteReplicationTask
 */

/*!
 * Constructs a DeleteReplicationTaskResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReplicationTaskResponse::DeleteReplicationTaskResponse(
        const DeleteReplicationTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DeleteReplicationTaskResponsePrivate(this), parent)
{
    setRequest(new DeleteReplicationTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReplicationTaskRequest * DeleteReplicationTaskResponse::request() const
{
    Q_D(const DeleteReplicationTaskResponse);
    return static_cast<const DeleteReplicationTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DeleteReplicationTask \a response.
 */
void DeleteReplicationTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReplicationTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DeleteReplicationTaskResponsePrivate
 * \brief The DeleteReplicationTaskResponsePrivate class provides private implementation for DeleteReplicationTaskResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DeleteReplicationTaskResponsePrivate object with public implementation \a q.
 */
DeleteReplicationTaskResponsePrivate::DeleteReplicationTaskResponsePrivate(
    DeleteReplicationTaskResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DeleteReplicationTask response element from \a xml.
 */
void DeleteReplicationTaskResponsePrivate::parseDeleteReplicationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReplicationTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
