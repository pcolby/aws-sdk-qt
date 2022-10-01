// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
