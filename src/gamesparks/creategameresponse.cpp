// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategameresponse.h"
#include "creategameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::CreateGameResponse
 * \brief The CreateGameResponse class provides an interace for GameSparks CreateGame responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::createGame
 */

/*!
 * Constructs a CreateGameResponse object for \a reply to \a request, with parent \a parent.
 */
CreateGameResponse::CreateGameResponse(
        const CreateGameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new CreateGameResponsePrivate(this), parent)
{
    setRequest(new CreateGameRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateGameRequest * CreateGameResponse::request() const
{
    Q_D(const CreateGameResponse);
    return static_cast<const CreateGameRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks CreateGame \a response.
 */
void CreateGameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateGameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::CreateGameResponsePrivate
 * \brief The CreateGameResponsePrivate class provides private implementation for CreateGameResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a CreateGameResponsePrivate object with public implementation \a q.
 */
CreateGameResponsePrivate::CreateGameResponsePrivate(
    CreateGameResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks CreateGame response element from \a xml.
 */
void CreateGameResponsePrivate::parseCreateGameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGameResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
