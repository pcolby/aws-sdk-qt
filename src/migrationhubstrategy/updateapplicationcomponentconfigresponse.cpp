// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapplicationcomponentconfigresponse.h"
#include "updateapplicationcomponentconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::UpdateApplicationComponentConfigResponse
 * \brief The UpdateApplicationComponentConfigResponse class provides an interace for MigrationHubStrategy UpdateApplicationComponentConfig responses.
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
 * \sa MigrationHubStrategyClient::updateApplicationComponentConfig
 */

/*!
 * Constructs a UpdateApplicationComponentConfigResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateApplicationComponentConfigResponse::UpdateApplicationComponentConfigResponse(
        const UpdateApplicationComponentConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubStrategyResponse(new UpdateApplicationComponentConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateApplicationComponentConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateApplicationComponentConfigRequest * UpdateApplicationComponentConfigResponse::request() const
{
    Q_D(const UpdateApplicationComponentConfigResponse);
    return static_cast<const UpdateApplicationComponentConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubStrategy UpdateApplicationComponentConfig \a response.
 */
void UpdateApplicationComponentConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateApplicationComponentConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubStrategy::UpdateApplicationComponentConfigResponsePrivate
 * \brief The UpdateApplicationComponentConfigResponsePrivate class provides private implementation for UpdateApplicationComponentConfigResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a UpdateApplicationComponentConfigResponsePrivate object with public implementation \a q.
 */
UpdateApplicationComponentConfigResponsePrivate::UpdateApplicationComponentConfigResponsePrivate(
    UpdateApplicationComponentConfigResponse * const q) : MigrationHubStrategyResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubStrategy UpdateApplicationComponentConfig response element from \a xml.
 */
void UpdateApplicationComponentConfigResponsePrivate::parseUpdateApplicationComponentConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApplicationComponentConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubStrategy
} // namespace QtAws
