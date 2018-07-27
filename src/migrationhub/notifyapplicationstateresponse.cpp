/*
    Copyright 2013-2018 Paul Colby

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
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
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
