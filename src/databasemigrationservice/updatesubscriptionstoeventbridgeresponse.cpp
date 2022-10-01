/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatesubscriptionstoeventbridgeresponse.h"
#include "updatesubscriptionstoeventbridgeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::UpdateSubscriptionsToEventBridgeResponse
 * \brief The UpdateSubscriptionsToEventBridgeResponse class provides an interace for DatabaseMigrationService UpdateSubscriptionsToEventBridge responses.
 *
 * \inmodule QtAwsDatabaseMigrationService
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
 * \sa DatabaseMigrationServiceClient::updateSubscriptionsToEventBridge
 */

/*!
 * Constructs a UpdateSubscriptionsToEventBridgeResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSubscriptionsToEventBridgeResponse::UpdateSubscriptionsToEventBridgeResponse(
        const UpdateSubscriptionsToEventBridgeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new UpdateSubscriptionsToEventBridgeResponsePrivate(this), parent)
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
 * Parses a successful DatabaseMigrationService UpdateSubscriptionsToEventBridge \a response.
 */
void UpdateSubscriptionsToEventBridgeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSubscriptionsToEventBridgeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigrationService::UpdateSubscriptionsToEventBridgeResponsePrivate
 * \brief The UpdateSubscriptionsToEventBridgeResponsePrivate class provides private implementation for UpdateSubscriptionsToEventBridgeResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a UpdateSubscriptionsToEventBridgeResponsePrivate object with public implementation \a q.
 */
UpdateSubscriptionsToEventBridgeResponsePrivate::UpdateSubscriptionsToEventBridgeResponsePrivate(
    UpdateSubscriptionsToEventBridgeResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigrationService UpdateSubscriptionsToEventBridge response element from \a xml.
 */
void UpdateSubscriptionsToEventBridgeResponsePrivate::parseUpdateSubscriptionsToEventBridgeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSubscriptionsToEventBridgeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
