// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getplayerconnectionstatusresponse.h"
#include "getplayerconnectionstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetPlayerConnectionStatusResponse
 * \brief The GetPlayerConnectionStatusResponse class provides an interace for GameSparks GetPlayerConnectionStatus responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getPlayerConnectionStatus
 */

/*!
 * Constructs a GetPlayerConnectionStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetPlayerConnectionStatusResponse::GetPlayerConnectionStatusResponse(
        const GetPlayerConnectionStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new GetPlayerConnectionStatusResponsePrivate(this), parent)
{
    setRequest(new GetPlayerConnectionStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPlayerConnectionStatusRequest * GetPlayerConnectionStatusResponse::request() const
{
    Q_D(const GetPlayerConnectionStatusResponse);
    return static_cast<const GetPlayerConnectionStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks GetPlayerConnectionStatus \a response.
 */
void GetPlayerConnectionStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPlayerConnectionStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::GetPlayerConnectionStatusResponsePrivate
 * \brief The GetPlayerConnectionStatusResponsePrivate class provides private implementation for GetPlayerConnectionStatusResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetPlayerConnectionStatusResponsePrivate object with public implementation \a q.
 */
GetPlayerConnectionStatusResponsePrivate::GetPlayerConnectionStatusResponsePrivate(
    GetPlayerConnectionStatusResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks GetPlayerConnectionStatus response element from \a xml.
 */
void GetPlayerConnectionStatusResponsePrivate::parseGetPlayerConnectionStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPlayerConnectionStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
