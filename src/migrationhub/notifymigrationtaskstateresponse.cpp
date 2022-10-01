// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  resource-specific migration tool by providing a programmatic interface to Migration
 * 
 *  Hub>
 * 
 *  Remember that you must set your AWS Migration Hub home region before you call any of these APIs, or a
 *  <code>HomeRegionNotSetException</code> error will be returned. Also, you must make the API calls while in your home
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
    //Q_D(NotifyMigrationTaskStateResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHub
} // namespace QtAws
