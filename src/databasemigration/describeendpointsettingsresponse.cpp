// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeendpointsettingsresponse.h"
#include "describeendpointsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeEndpointSettingsResponse
 * \brief The DescribeEndpointSettingsResponse class provides an interace for DatabaseMigration DescribeEndpointSettings responses.
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
 * \sa DatabaseMigrationClient::describeEndpointSettings
 */

/*!
 * Constructs a DescribeEndpointSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEndpointSettingsResponse::DescribeEndpointSettingsResponse(
        const DescribeEndpointSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DescribeEndpointSettingsResponsePrivate(this), parent)
{
    setRequest(new DescribeEndpointSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEndpointSettingsRequest * DescribeEndpointSettingsResponse::request() const
{
    Q_D(const DescribeEndpointSettingsResponse);
    return static_cast<const DescribeEndpointSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DescribeEndpointSettings \a response.
 */
void DescribeEndpointSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEndpointSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DescribeEndpointSettingsResponsePrivate
 * \brief The DescribeEndpointSettingsResponsePrivate class provides private implementation for DescribeEndpointSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeEndpointSettingsResponsePrivate object with public implementation \a q.
 */
DescribeEndpointSettingsResponsePrivate::DescribeEndpointSettingsResponsePrivate(
    DescribeEndpointSettingsResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DescribeEndpointSettings response element from \a xml.
 */
void DescribeEndpointSettingsResponsePrivate::parseDescribeEndpointSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEndpointSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
