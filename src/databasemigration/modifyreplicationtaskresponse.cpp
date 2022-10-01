// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyreplicationtaskresponse.h"
#include "modifyreplicationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::ModifyReplicationTaskResponse
 * \brief The ModifyReplicationTaskResponse class provides an interace for DatabaseMigration ModifyReplicationTask responses.
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
 * \sa DatabaseMigrationClient::modifyReplicationTask
 */

/*!
 * Constructs a ModifyReplicationTaskResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyReplicationTaskResponse::ModifyReplicationTaskResponse(
        const ModifyReplicationTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new ModifyReplicationTaskResponsePrivate(this), parent)
{
    setRequest(new ModifyReplicationTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyReplicationTaskRequest * ModifyReplicationTaskResponse::request() const
{
    Q_D(const ModifyReplicationTaskResponse);
    return static_cast<const ModifyReplicationTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration ModifyReplicationTask \a response.
 */
void ModifyReplicationTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyReplicationTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::ModifyReplicationTaskResponsePrivate
 * \brief The ModifyReplicationTaskResponsePrivate class provides private implementation for ModifyReplicationTaskResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a ModifyReplicationTaskResponsePrivate object with public implementation \a q.
 */
ModifyReplicationTaskResponsePrivate::ModifyReplicationTaskResponsePrivate(
    ModifyReplicationTaskResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration ModifyReplicationTask response element from \a xml.
 */
void ModifyReplicationTaskResponsePrivate::parseModifyReplicationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyReplicationTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
