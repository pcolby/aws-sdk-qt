// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereplicationinstanceresponse.h"
#include "deletereplicationinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DeleteReplicationInstanceResponse
 * \brief The DeleteReplicationInstanceResponse class provides an interace for DatabaseMigration DeleteReplicationInstance responses.
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
 * \sa DatabaseMigrationClient::deleteReplicationInstance
 */

/*!
 * Constructs a DeleteReplicationInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReplicationInstanceResponse::DeleteReplicationInstanceResponse(
        const DeleteReplicationInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DeleteReplicationInstanceResponsePrivate(this), parent)
{
    setRequest(new DeleteReplicationInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReplicationInstanceRequest * DeleteReplicationInstanceResponse::request() const
{
    Q_D(const DeleteReplicationInstanceResponse);
    return static_cast<const DeleteReplicationInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DeleteReplicationInstance \a response.
 */
void DeleteReplicationInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReplicationInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DeleteReplicationInstanceResponsePrivate
 * \brief The DeleteReplicationInstanceResponsePrivate class provides private implementation for DeleteReplicationInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DeleteReplicationInstanceResponsePrivate object with public implementation \a q.
 */
DeleteReplicationInstanceResponsePrivate::DeleteReplicationInstanceResponsePrivate(
    DeleteReplicationInstanceResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DeleteReplicationInstance response element from \a xml.
 */
void DeleteReplicationInstanceResponsePrivate::parseDeleteReplicationInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReplicationInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
