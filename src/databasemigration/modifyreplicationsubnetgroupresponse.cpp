// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyreplicationsubnetgroupresponse.h"
#include "modifyreplicationsubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::ModifyReplicationSubnetGroupResponse
 * \brief The ModifyReplicationSubnetGroupResponse class provides an interace for DatabaseMigration ModifyReplicationSubnetGroup responses.
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
 * \sa DatabaseMigrationClient::modifyReplicationSubnetGroup
 */

/*!
 * Constructs a ModifyReplicationSubnetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyReplicationSubnetGroupResponse::ModifyReplicationSubnetGroupResponse(
        const ModifyReplicationSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new ModifyReplicationSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new ModifyReplicationSubnetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyReplicationSubnetGroupRequest * ModifyReplicationSubnetGroupResponse::request() const
{
    Q_D(const ModifyReplicationSubnetGroupResponse);
    return static_cast<const ModifyReplicationSubnetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration ModifyReplicationSubnetGroup \a response.
 */
void ModifyReplicationSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyReplicationSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::ModifyReplicationSubnetGroupResponsePrivate
 * \brief The ModifyReplicationSubnetGroupResponsePrivate class provides private implementation for ModifyReplicationSubnetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a ModifyReplicationSubnetGroupResponsePrivate object with public implementation \a q.
 */
ModifyReplicationSubnetGroupResponsePrivate::ModifyReplicationSubnetGroupResponsePrivate(
    ModifyReplicationSubnetGroupResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration ModifyReplicationSubnetGroup response element from \a xml.
 */
void ModifyReplicationSubnetGroupResponsePrivate::parseModifyReplicationSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyReplicationSubnetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
