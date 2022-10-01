// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreplicationsubnetgroupresponse.h"
#include "createreplicationsubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::CreateReplicationSubnetGroupResponse
 * \brief The CreateReplicationSubnetGroupResponse class provides an interace for DatabaseMigration CreateReplicationSubnetGroup responses.
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
 * \sa DatabaseMigrationClient::createReplicationSubnetGroup
 */

/*!
 * Constructs a CreateReplicationSubnetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateReplicationSubnetGroupResponse::CreateReplicationSubnetGroupResponse(
        const CreateReplicationSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new CreateReplicationSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new CreateReplicationSubnetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateReplicationSubnetGroupRequest * CreateReplicationSubnetGroupResponse::request() const
{
    Q_D(const CreateReplicationSubnetGroupResponse);
    return static_cast<const CreateReplicationSubnetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration CreateReplicationSubnetGroup \a response.
 */
void CreateReplicationSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateReplicationSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::CreateReplicationSubnetGroupResponsePrivate
 * \brief The CreateReplicationSubnetGroupResponsePrivate class provides private implementation for CreateReplicationSubnetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a CreateReplicationSubnetGroupResponsePrivate object with public implementation \a q.
 */
CreateReplicationSubnetGroupResponsePrivate::CreateReplicationSubnetGroupResponsePrivate(
    CreateReplicationSubnetGroupResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration CreateReplicationSubnetGroup response element from \a xml.
 */
void CreateReplicationSubnetGroupResponsePrivate::parseCreateReplicationSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReplicationSubnetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
