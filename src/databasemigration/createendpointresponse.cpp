// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createendpointresponse.h"
#include "createendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::CreateEndpointResponse
 * \brief The CreateEndpointResponse class provides an interace for DatabaseMigration CreateEndpoint responses.
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
 * \sa DatabaseMigrationClient::createEndpoint
 */

/*!
 * Constructs a CreateEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEndpointResponse::CreateEndpointResponse(
        const CreateEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new CreateEndpointResponsePrivate(this), parent)
{
    setRequest(new CreateEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEndpointRequest * CreateEndpointResponse::request() const
{
    Q_D(const CreateEndpointResponse);
    return static_cast<const CreateEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration CreateEndpoint \a response.
 */
void CreateEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::CreateEndpointResponsePrivate
 * \brief The CreateEndpointResponsePrivate class provides private implementation for CreateEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a CreateEndpointResponsePrivate object with public implementation \a q.
 */
CreateEndpointResponsePrivate::CreateEndpointResponsePrivate(
    CreateEndpointResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration CreateEndpoint response element from \a xml.
 */
void CreateEndpointResponsePrivate::parseCreateEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
