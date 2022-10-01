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
