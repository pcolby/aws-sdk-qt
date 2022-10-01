// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "notifyapplicationstateresponse.h"
#include "notifyapplicationstateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::NotifyApplicationStateResponse
 * \brief The NotifyApplicationStateResponse class provides an interace for MigrationHub NotifyApplicationState responses.
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
 * \sa MigrationHubClient::notifyApplicationState
 */

/*!
 * Constructs a NotifyApplicationStateResponse object for \a reply to \a request, with parent \a parent.
 */
NotifyApplicationStateResponse::NotifyApplicationStateResponse(
        const NotifyApplicationStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new NotifyApplicationStateResponsePrivate(this), parent)
{
    setRequest(new NotifyApplicationStateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const NotifyApplicationStateRequest * NotifyApplicationStateResponse::request() const
{
    Q_D(const NotifyApplicationStateResponse);
    return static_cast<const NotifyApplicationStateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHub NotifyApplicationState \a response.
 */
void NotifyApplicationStateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(NotifyApplicationStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHub::NotifyApplicationStateResponsePrivate
 * \brief The NotifyApplicationStateResponsePrivate class provides private implementation for NotifyApplicationStateResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a NotifyApplicationStateResponsePrivate object with public implementation \a q.
 */
NotifyApplicationStateResponsePrivate::NotifyApplicationStateResponsePrivate(
    NotifyApplicationStateResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHub NotifyApplicationState response element from \a xml.
 */
void NotifyApplicationStateResponsePrivate::parseNotifyApplicationStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("NotifyApplicationStateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHub
} // namespace QtAws
