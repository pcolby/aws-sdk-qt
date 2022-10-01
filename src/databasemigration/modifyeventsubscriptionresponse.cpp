// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyeventsubscriptionresponse.h"
#include "modifyeventsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::ModifyEventSubscriptionResponse
 * \brief The ModifyEventSubscriptionResponse class provides an interace for DatabaseMigration ModifyEventSubscription responses.
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
 * \sa DatabaseMigrationClient::modifyEventSubscription
 */

/*!
 * Constructs a ModifyEventSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyEventSubscriptionResponse::ModifyEventSubscriptionResponse(
        const ModifyEventSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new ModifyEventSubscriptionResponsePrivate(this), parent)
{
    setRequest(new ModifyEventSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyEventSubscriptionRequest * ModifyEventSubscriptionResponse::request() const
{
    Q_D(const ModifyEventSubscriptionResponse);
    return static_cast<const ModifyEventSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration ModifyEventSubscription \a response.
 */
void ModifyEventSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyEventSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::ModifyEventSubscriptionResponsePrivate
 * \brief The ModifyEventSubscriptionResponsePrivate class provides private implementation for ModifyEventSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a ModifyEventSubscriptionResponsePrivate object with public implementation \a q.
 */
ModifyEventSubscriptionResponsePrivate::ModifyEventSubscriptionResponsePrivate(
    ModifyEventSubscriptionResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration ModifyEventSubscription response element from \a xml.
 */
void ModifyEventSubscriptionResponsePrivate::parseModifyEventSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyEventSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
