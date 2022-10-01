// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disconnectplayerresponse.h"
#include "disconnectplayerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::DisconnectPlayerResponse
 * \brief The DisconnectPlayerResponse class provides an interace for GameSparks DisconnectPlayer responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::disconnectPlayer
 */

/*!
 * Constructs a DisconnectPlayerResponse object for \a reply to \a request, with parent \a parent.
 */
DisconnectPlayerResponse::DisconnectPlayerResponse(
        const DisconnectPlayerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new DisconnectPlayerResponsePrivate(this), parent)
{
    setRequest(new DisconnectPlayerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisconnectPlayerRequest * DisconnectPlayerResponse::request() const
{
    Q_D(const DisconnectPlayerResponse);
    return static_cast<const DisconnectPlayerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks DisconnectPlayer \a response.
 */
void DisconnectPlayerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisconnectPlayerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::DisconnectPlayerResponsePrivate
 * \brief The DisconnectPlayerResponsePrivate class provides private implementation for DisconnectPlayerResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a DisconnectPlayerResponsePrivate object with public implementation \a q.
 */
DisconnectPlayerResponsePrivate::DisconnectPlayerResponsePrivate(
    DisconnectPlayerResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks DisconnectPlayer response element from \a xml.
 */
void DisconnectPlayerResponsePrivate::parseDisconnectPlayerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisconnectPlayerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
