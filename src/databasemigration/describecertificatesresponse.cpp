// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecertificatesresponse.h"
#include "describecertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeCertificatesResponse
 * \brief The DescribeCertificatesResponse class provides an interace for DatabaseMigration DescribeCertificates responses.
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
 * \sa DatabaseMigrationClient::describeCertificates
 */

/*!
 * Constructs a DescribeCertificatesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCertificatesResponse::DescribeCertificatesResponse(
        const DescribeCertificatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DescribeCertificatesResponsePrivate(this), parent)
{
    setRequest(new DescribeCertificatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCertificatesRequest * DescribeCertificatesResponse::request() const
{
    Q_D(const DescribeCertificatesResponse);
    return static_cast<const DescribeCertificatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DescribeCertificates \a response.
 */
void DescribeCertificatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCertificatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DescribeCertificatesResponsePrivate
 * \brief The DescribeCertificatesResponsePrivate class provides private implementation for DescribeCertificatesResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeCertificatesResponsePrivate object with public implementation \a q.
 */
DescribeCertificatesResponsePrivate::DescribeCertificatesResponsePrivate(
    DescribeCertificatesResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DescribeCertificates response element from \a xml.
 */
void DescribeCertificatesResponsePrivate::parseDescribeCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCertificatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
