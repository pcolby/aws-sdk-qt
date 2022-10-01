// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereplicationsubnetgroupresponse.h"
#include "deletereplicationsubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DeleteReplicationSubnetGroupResponse
 * \brief The DeleteReplicationSubnetGroupResponse class provides an interace for DatabaseMigration DeleteReplicationSubnetGroup responses.
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
 * \sa DatabaseMigrationClient::deleteReplicationSubnetGroup
 */

/*!
 * Constructs a DeleteReplicationSubnetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReplicationSubnetGroupResponse::DeleteReplicationSubnetGroupResponse(
        const DeleteReplicationSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DeleteReplicationSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteReplicationSubnetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReplicationSubnetGroupRequest * DeleteReplicationSubnetGroupResponse::request() const
{
    Q_D(const DeleteReplicationSubnetGroupResponse);
    return static_cast<const DeleteReplicationSubnetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DeleteReplicationSubnetGroup \a response.
 */
void DeleteReplicationSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReplicationSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DeleteReplicationSubnetGroupResponsePrivate
 * \brief The DeleteReplicationSubnetGroupResponsePrivate class provides private implementation for DeleteReplicationSubnetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DeleteReplicationSubnetGroupResponsePrivate object with public implementation \a q.
 */
DeleteReplicationSubnetGroupResponsePrivate::DeleteReplicationSubnetGroupResponsePrivate(
    DeleteReplicationSubnetGroupResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DeleteReplicationSubnetGroup response element from \a xml.
 */
void DeleteReplicationSubnetGroupResponsePrivate::parseDeleteReplicationSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReplicationSubnetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
