// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removetagsfromresourceresponse.h"
#include "removetagsfromresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::RemoveTagsFromResourceResponse
 * \brief The RemoveTagsFromResourceResponse class provides an interace for DatabaseMigration RemoveTagsFromResource responses.
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
 * \sa DatabaseMigrationClient::removeTagsFromResource
 */

/*!
 * Constructs a RemoveTagsFromResourceResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveTagsFromResourceResponse::RemoveTagsFromResourceResponse(
        const RemoveTagsFromResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new RemoveTagsFromResourceResponsePrivate(this), parent)
{
    setRequest(new RemoveTagsFromResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveTagsFromResourceRequest * RemoveTagsFromResourceResponse::request() const
{
    Q_D(const RemoveTagsFromResourceResponse);
    return static_cast<const RemoveTagsFromResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration RemoveTagsFromResource \a response.
 */
void RemoveTagsFromResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveTagsFromResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::RemoveTagsFromResourceResponsePrivate
 * \brief The RemoveTagsFromResourceResponsePrivate class provides private implementation for RemoveTagsFromResourceResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a RemoveTagsFromResourceResponsePrivate object with public implementation \a q.
 */
RemoveTagsFromResourceResponsePrivate::RemoveTagsFromResourceResponsePrivate(
    RemoveTagsFromResourceResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration RemoveTagsFromResource response element from \a xml.
 */
void RemoveTagsFromResourceResponsePrivate::parseRemoveTagsFromResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveTagsFromResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
