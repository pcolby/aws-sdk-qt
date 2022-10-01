// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefleetadvisorcollectorresponse.h"
#include "deletefleetadvisorcollectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DeleteFleetAdvisorCollectorResponse
 * \brief The DeleteFleetAdvisorCollectorResponse class provides an interace for DatabaseMigration DeleteFleetAdvisorCollector responses.
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
 * \sa DatabaseMigrationClient::deleteFleetAdvisorCollector
 */

/*!
 * Constructs a DeleteFleetAdvisorCollectorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFleetAdvisorCollectorResponse::DeleteFleetAdvisorCollectorResponse(
        const DeleteFleetAdvisorCollectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DeleteFleetAdvisorCollectorResponsePrivate(this), parent)
{
    setRequest(new DeleteFleetAdvisorCollectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFleetAdvisorCollectorRequest * DeleteFleetAdvisorCollectorResponse::request() const
{
    Q_D(const DeleteFleetAdvisorCollectorResponse);
    return static_cast<const DeleteFleetAdvisorCollectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DeleteFleetAdvisorCollector \a response.
 */
void DeleteFleetAdvisorCollectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFleetAdvisorCollectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DeleteFleetAdvisorCollectorResponsePrivate
 * \brief The DeleteFleetAdvisorCollectorResponsePrivate class provides private implementation for DeleteFleetAdvisorCollectorResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DeleteFleetAdvisorCollectorResponsePrivate object with public implementation \a q.
 */
DeleteFleetAdvisorCollectorResponsePrivate::DeleteFleetAdvisorCollectorResponsePrivate(
    DeleteFleetAdvisorCollectorResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DeleteFleetAdvisorCollector response element from \a xml.
 */
void DeleteFleetAdvisorCollectorResponsePrivate::parseDeleteFleetAdvisorCollectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFleetAdvisorCollectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
