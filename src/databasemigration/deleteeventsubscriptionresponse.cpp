// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteeventsubscriptionresponse.h"
#include "deleteeventsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DeleteEventSubscriptionResponse
 * \brief The DeleteEventSubscriptionResponse class provides an interace for DatabaseMigration DeleteEventSubscription responses.
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
 * \sa DatabaseMigrationClient::deleteEventSubscription
 */

/*!
 * Constructs a DeleteEventSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEventSubscriptionResponse::DeleteEventSubscriptionResponse(
        const DeleteEventSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DeleteEventSubscriptionResponsePrivate(this), parent)
{
    setRequest(new DeleteEventSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEventSubscriptionRequest * DeleteEventSubscriptionResponse::request() const
{
    Q_D(const DeleteEventSubscriptionResponse);
    return static_cast<const DeleteEventSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DeleteEventSubscription \a response.
 */
void DeleteEventSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEventSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DeleteEventSubscriptionResponsePrivate
 * \brief The DeleteEventSubscriptionResponsePrivate class provides private implementation for DeleteEventSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DeleteEventSubscriptionResponsePrivate object with public implementation \a q.
 */
DeleteEventSubscriptionResponsePrivate::DeleteEventSubscriptionResponsePrivate(
    DeleteEventSubscriptionResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DeleteEventSubscription response element from \a xml.
 */
void DeleteEventSubscriptionResponsePrivate::parseDeleteEventSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEventSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
