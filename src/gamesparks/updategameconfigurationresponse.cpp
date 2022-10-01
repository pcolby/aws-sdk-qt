// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategameconfigurationresponse.h"
#include "updategameconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::UpdateGameConfigurationResponse
 * \brief The UpdateGameConfigurationResponse class provides an interace for GameSparks UpdateGameConfiguration responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::updateGameConfiguration
 */

/*!
 * Constructs a UpdateGameConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGameConfigurationResponse::UpdateGameConfigurationResponse(
        const UpdateGameConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new UpdateGameConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateGameConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGameConfigurationRequest * UpdateGameConfigurationResponse::request() const
{
    Q_D(const UpdateGameConfigurationResponse);
    return static_cast<const UpdateGameConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks UpdateGameConfiguration \a response.
 */
void UpdateGameConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGameConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::UpdateGameConfigurationResponsePrivate
 * \brief The UpdateGameConfigurationResponsePrivate class provides private implementation for UpdateGameConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a UpdateGameConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateGameConfigurationResponsePrivate::UpdateGameConfigurationResponsePrivate(
    UpdateGameConfigurationResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks UpdateGameConfiguration response element from \a xml.
 */
void UpdateGameConfigurationResponsePrivate::parseUpdateGameConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGameConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
