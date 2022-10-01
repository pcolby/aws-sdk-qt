// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreplicationtaskresponse.h"
#include "createreplicationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::CreateReplicationTaskResponse
 * \brief The CreateReplicationTaskResponse class provides an interace for DatabaseMigration CreateReplicationTask responses.
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
 * \sa DatabaseMigrationClient::createReplicationTask
 */

/*!
 * Constructs a CreateReplicationTaskResponse object for \a reply to \a request, with parent \a parent.
 */
CreateReplicationTaskResponse::CreateReplicationTaskResponse(
        const CreateReplicationTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new CreateReplicationTaskResponsePrivate(this), parent)
{
    setRequest(new CreateReplicationTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateReplicationTaskRequest * CreateReplicationTaskResponse::request() const
{
    Q_D(const CreateReplicationTaskResponse);
    return static_cast<const CreateReplicationTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration CreateReplicationTask \a response.
 */
void CreateReplicationTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateReplicationTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::CreateReplicationTaskResponsePrivate
 * \brief The CreateReplicationTaskResponsePrivate class provides private implementation for CreateReplicationTaskResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a CreateReplicationTaskResponsePrivate object with public implementation \a q.
 */
CreateReplicationTaskResponsePrivate::CreateReplicationTaskResponsePrivate(
    CreateReplicationTaskResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration CreateReplicationTask response element from \a xml.
 */
void CreateReplicationTaskResponsePrivate::parseCreateReplicationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReplicationTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
