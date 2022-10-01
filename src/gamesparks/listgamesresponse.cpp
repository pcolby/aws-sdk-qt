// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgamesresponse.h"
#include "listgamesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ListGamesResponse
 * \brief The ListGamesResponse class provides an interace for GameSparks ListGames responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::listGames
 */

/*!
 * Constructs a ListGamesResponse object for \a reply to \a request, with parent \a parent.
 */
ListGamesResponse::ListGamesResponse(
        const ListGamesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new ListGamesResponsePrivate(this), parent)
{
    setRequest(new ListGamesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGamesRequest * ListGamesResponse::request() const
{
    Q_D(const ListGamesResponse);
    return static_cast<const ListGamesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks ListGames \a response.
 */
void ListGamesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGamesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::ListGamesResponsePrivate
 * \brief The ListGamesResponsePrivate class provides private implementation for ListGamesResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ListGamesResponsePrivate object with public implementation \a q.
 */
ListGamesResponsePrivate::ListGamesResponsePrivate(
    ListGamesResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks ListGames response element from \a xml.
 */
void ListGamesResponsePrivate::parseListGamesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGamesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
