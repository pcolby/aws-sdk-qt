// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
