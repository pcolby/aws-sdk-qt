// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startreplicationtaskresponse.h"
#include "startreplicationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::StartReplicationTaskResponse
 * \brief The StartReplicationTaskResponse class provides an interace for DatabaseMigration StartReplicationTask responses.
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
 * \sa DatabaseMigrationClient::startReplicationTask
 */

/*!
 * Constructs a StartReplicationTaskResponse object for \a reply to \a request, with parent \a parent.
 */
StartReplicationTaskResponse::StartReplicationTaskResponse(
        const StartReplicationTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new StartReplicationTaskResponsePrivate(this), parent)
{
    setRequest(new StartReplicationTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartReplicationTaskRequest * StartReplicationTaskResponse::request() const
{
    Q_D(const StartReplicationTaskResponse);
    return static_cast<const StartReplicationTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration StartReplicationTask \a response.
 */
void StartReplicationTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartReplicationTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::StartReplicationTaskResponsePrivate
 * \brief The StartReplicationTaskResponsePrivate class provides private implementation for StartReplicationTaskResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a StartReplicationTaskResponsePrivate object with public implementation \a q.
 */
StartReplicationTaskResponsePrivate::StartReplicationTaskResponsePrivate(
    StartReplicationTaskResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration StartReplicationTask response element from \a xml.
 */
void StartReplicationTaskResponsePrivate::parseStartReplicationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartReplicationTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
