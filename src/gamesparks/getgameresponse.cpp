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

#include "getgameresponse.h"
#include "getgameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetGameResponse
 * \brief The GetGameResponse class provides an interace for GameSparks GetGame responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getGame
 */

/*!
 * Constructs a GetGameResponse object for \a reply to \a request, with parent \a parent.
 */
GetGameResponse::GetGameResponse(
        const GetGameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new GetGameResponsePrivate(this), parent)
{
    setRequest(new GetGameRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGameRequest * GetGameResponse::request() const
{
    Q_D(const GetGameResponse);
    return static_cast<const GetGameRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks GetGame \a response.
 */
void GetGameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::GetGameResponsePrivate
 * \brief The GetGameResponsePrivate class provides private implementation for GetGameResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetGameResponsePrivate object with public implementation \a q.
 */
GetGameResponsePrivate::GetGameResponsePrivate(
    GetGameResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks GetGame response element from \a xml.
 */
void GetGameResponsePrivate::parseGetGameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGameResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
