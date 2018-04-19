/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "notifymigrationtaskstateresponse.h"
#include "notifymigrationtaskstateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::NotifyMigrationTaskStateResponse
 * \brief The NotifyMigrationTaskStateResponse class provides an interace for MigrationHub NotifyMigrationTaskState responses.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::notifyMigrationTaskState
 */

/*!
 * Constructs a NotifyMigrationTaskStateResponse object for \a reply to \a request, with parent \a parent.
 */
NotifyMigrationTaskStateResponse::NotifyMigrationTaskStateResponse(
        const NotifyMigrationTaskStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new NotifyMigrationTaskStateResponsePrivate(this), parent)
{
    setRequest(new NotifyMigrationTaskStateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const NotifyMigrationTaskStateRequest * NotifyMigrationTaskStateResponse::request() const
{
    Q_D(const NotifyMigrationTaskStateResponse);
    return static_cast<const NotifyMigrationTaskStateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHub NotifyMigrationTaskState \a response.
 */
void NotifyMigrationTaskStateResponse::parseSuccess(QIODevice &response)
{
    Q_D(NotifyMigrationTaskStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHub::NotifyMigrationTaskStateResponsePrivate
 * \brief The NotifyMigrationTaskStateResponsePrivate class provides private implementation for NotifyMigrationTaskStateResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a NotifyMigrationTaskStateResponsePrivate object with public implementation \a q.
 */
NotifyMigrationTaskStateResponsePrivate::NotifyMigrationTaskStateResponsePrivate(
    NotifyMigrationTaskStateResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHub NotifyMigrationTaskState response element from \a xml.
 */
void NotifyMigrationTaskStateResponsePrivate::parseNotifyMigrationTaskStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("NotifyMigrationTaskStateResponse"));
    /// @todo
}

} // namespace MigrationHub
} // namespace QtAws
