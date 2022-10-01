// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
