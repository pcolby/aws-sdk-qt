// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstageresponse.h"
#include "getstageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetStageResponse
 * \brief The GetStageResponse class provides an interace for GameSparks GetStage responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getStage
 */

/*!
 * Constructs a GetStageResponse object for \a reply to \a request, with parent \a parent.
 */
GetStageResponse::GetStageResponse(
        const GetStageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new GetStageResponsePrivate(this), parent)
{
    setRequest(new GetStageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStageRequest * GetStageResponse::request() const
{
    Q_D(const GetStageResponse);
    return static_cast<const GetStageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks GetStage \a response.
 */
void GetStageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::GetStageResponsePrivate
 * \brief The GetStageResponsePrivate class provides private implementation for GetStageResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetStageResponsePrivate object with public implementation \a q.
 */
GetStageResponsePrivate::GetStageResponsePrivate(
    GetStageResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks GetStage response element from \a xml.
 */
void GetStageResponsePrivate::parseGetStageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
