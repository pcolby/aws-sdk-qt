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

#include "updateserverconfigresponse.h"
#include "updateserverconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::UpdateServerConfigResponse
 * \brief The UpdateServerConfigResponse class provides an interace for MigrationHubStrategy UpdateServerConfig responses.
 *
 * \inmodule QtAwsMigrationHubStrategy
 *
 *  <fullname>Migration Hub Strategy Recommendations</fullname>
 * 
 *  This API reference provides descriptions, syntax, and other details about each of the actions and data types for
 *  Migration Hub Strategy Recommendations (Strategy Recommendations). The topic for each action shows the API request
 *  parameters and the response. Alternatively, you can use one of the AWS SDKs to access an API that is tailored to the
 *  programming language or platform that you're using. For more information, see <a
 *  href="http://aws.amazon.com/tools/#SDKs">AWS
 *
 * \sa MigrationHubStrategyClient::updateServerConfig
 */

/*!
 * Constructs a UpdateServerConfigResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateServerConfigResponse::UpdateServerConfigResponse(
        const UpdateServerConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubStrategyResponse(new UpdateServerConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateServerConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateServerConfigRequest * UpdateServerConfigResponse::request() const
{
    Q_D(const UpdateServerConfigResponse);
    return static_cast<const UpdateServerConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubStrategy UpdateServerConfig \a response.
 */
void UpdateServerConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateServerConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubStrategy::UpdateServerConfigResponsePrivate
 * \brief The UpdateServerConfigResponsePrivate class provides private implementation for UpdateServerConfigResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a UpdateServerConfigResponsePrivate object with public implementation \a q.
 */
UpdateServerConfigResponsePrivate::UpdateServerConfigResponsePrivate(
    UpdateServerConfigResponse * const q) : MigrationHubStrategyResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubStrategy UpdateServerConfig response element from \a xml.
 */
void UpdateServerConfigResponsePrivate::parseUpdateServerConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateServerConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubStrategy
} // namespace QtAws
