// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreplicationinstanceresponse.h"
#include "createreplicationinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::CreateReplicationInstanceResponse
 * \brief The CreateReplicationInstanceResponse class provides an interace for DatabaseMigration CreateReplicationInstance responses.
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
 * \sa DatabaseMigrationClient::createReplicationInstance
 */

/*!
 * Constructs a CreateReplicationInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateReplicationInstanceResponse::CreateReplicationInstanceResponse(
        const CreateReplicationInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new CreateReplicationInstanceResponsePrivate(this), parent)
{
    setRequest(new CreateReplicationInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateReplicationInstanceRequest * CreateReplicationInstanceResponse::request() const
{
    Q_D(const CreateReplicationInstanceResponse);
    return static_cast<const CreateReplicationInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration CreateReplicationInstance \a response.
 */
void CreateReplicationInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateReplicationInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::CreateReplicationInstanceResponsePrivate
 * \brief The CreateReplicationInstanceResponsePrivate class provides private implementation for CreateReplicationInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a CreateReplicationInstanceResponsePrivate object with public implementation \a q.
 */
CreateReplicationInstanceResponsePrivate::CreateReplicationInstanceResponsePrivate(
    CreateReplicationInstanceResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration CreateReplicationInstance response element from \a xml.
 */
void CreateReplicationInstanceResponsePrivate::parseCreateReplicationInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReplicationInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
