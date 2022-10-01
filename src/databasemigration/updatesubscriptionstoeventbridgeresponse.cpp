// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesubscriptionstoeventbridgeresponse.h"
#include "updatesubscriptionstoeventbridgeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::UpdateSubscriptionsToEventBridgeResponse
 * \brief The UpdateSubscriptionsToEventBridgeResponse class provides an interace for DatabaseMigration UpdateSubscriptionsToEventBridge responses.
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
 * \sa DatabaseMigrationClient::updateSubscriptionsToEventBridge
 */

/*!
 * Constructs a UpdateSubscriptionsToEventBridgeResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSubscriptionsToEventBridgeResponse::UpdateSubscriptionsToEventBridgeResponse(
        const UpdateSubscriptionsToEventBridgeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new UpdateSubscriptionsToEventBridgeResponsePrivate(this), parent)
{
    setRequest(new UpdateSubscriptionsToEventBridgeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSubscriptionsToEventBridgeRequest * UpdateSubscriptionsToEventBridgeResponse::request() const
{
    Q_D(const UpdateSubscriptionsToEventBridgeResponse);
    return static_cast<const UpdateSubscriptionsToEventBridgeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration UpdateSubscriptionsToEventBridge \a response.
 */
void UpdateSubscriptionsToEventBridgeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSubscriptionsToEventBridgeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::UpdateSubscriptionsToEventBridgeResponsePrivate
 * \brief The UpdateSubscriptionsToEventBridgeResponsePrivate class provides private implementation for UpdateSubscriptionsToEventBridgeResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a UpdateSubscriptionsToEventBridgeResponsePrivate object with public implementation \a q.
 */
UpdateSubscriptionsToEventBridgeResponsePrivate::UpdateSubscriptionsToEventBridgeResponsePrivate(
    UpdateSubscriptionsToEventBridgeResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration UpdateSubscriptionsToEventBridge response element from \a xml.
 */
void UpdateSubscriptionsToEventBridgeResponsePrivate::parseUpdateSubscriptionsToEventBridgeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSubscriptionsToEventBridgeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
