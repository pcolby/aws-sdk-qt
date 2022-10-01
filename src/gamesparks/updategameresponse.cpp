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

#include "updategameresponse.h"
#include "updategameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::UpdateGameResponse
 * \brief The UpdateGameResponse class provides an interace for GameSparks UpdateGame responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::updateGame
 */

/*!
 * Constructs a UpdateGameResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGameResponse::UpdateGameResponse(
        const UpdateGameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new UpdateGameResponsePrivate(this), parent)
{
    setRequest(new UpdateGameRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGameRequest * UpdateGameResponse::request() const
{
    Q_D(const UpdateGameResponse);
    return static_cast<const UpdateGameRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks UpdateGame \a response.
 */
void UpdateGameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::UpdateGameResponsePrivate
 * \brief The UpdateGameResponsePrivate class provides private implementation for UpdateGameResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a UpdateGameResponsePrivate object with public implementation \a q.
 */
UpdateGameResponsePrivate::UpdateGameResponsePrivate(
    UpdateGameResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks UpdateGame response element from \a xml.
 */
void UpdateGameResponsePrivate::parseUpdateGameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGameResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
