// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createeventsubscriptionresponse.h"
#include "createeventsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::CreateEventSubscriptionResponse
 * \brief The CreateEventSubscriptionResponse class provides an interace for DatabaseMigration CreateEventSubscription responses.
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
 * \sa DatabaseMigrationClient::createEventSubscription
 */

/*!
 * Constructs a CreateEventSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEventSubscriptionResponse::CreateEventSubscriptionResponse(
        const CreateEventSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new CreateEventSubscriptionResponsePrivate(this), parent)
{
    setRequest(new CreateEventSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEventSubscriptionRequest * CreateEventSubscriptionResponse::request() const
{
    Q_D(const CreateEventSubscriptionResponse);
    return static_cast<const CreateEventSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration CreateEventSubscription \a response.
 */
void CreateEventSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEventSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::CreateEventSubscriptionResponsePrivate
 * \brief The CreateEventSubscriptionResponsePrivate class provides private implementation for CreateEventSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a CreateEventSubscriptionResponsePrivate object with public implementation \a q.
 */
CreateEventSubscriptionResponsePrivate::CreateEventSubscriptionResponsePrivate(
    CreateEventSubscriptionResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration CreateEventSubscription response element from \a xml.
 */
void CreateEventSubscriptionResponsePrivate::parseCreateEventSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEventSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
