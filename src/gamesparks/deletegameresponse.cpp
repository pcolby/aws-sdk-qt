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

#include "deletegameresponse.h"
#include "deletegameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::DeleteGameResponse
 * \brief The DeleteGameResponse class provides an interace for GameSparks DeleteGame responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::deleteGame
 */

/*!
 * Constructs a DeleteGameResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteGameResponse::DeleteGameResponse(
        const DeleteGameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new DeleteGameResponsePrivate(this), parent)
{
    setRequest(new DeleteGameRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteGameRequest * DeleteGameResponse::request() const
{
    Q_D(const DeleteGameResponse);
    return static_cast<const DeleteGameRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks DeleteGame \a response.
 */
void DeleteGameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteGameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::DeleteGameResponsePrivate
 * \brief The DeleteGameResponsePrivate class provides private implementation for DeleteGameResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a DeleteGameResponsePrivate object with public implementation \a q.
 */
DeleteGameResponsePrivate::DeleteGameResponsePrivate(
    DeleteGameResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks DeleteGame response element from \a xml.
 */
void DeleteGameResponsePrivate::parseDeleteGameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGameResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
