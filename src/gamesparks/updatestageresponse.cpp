// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatestageresponse.h"
#include "updatestageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::UpdateStageResponse
 * \brief The UpdateStageResponse class provides an interace for GameSparks UpdateStage responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::updateStage
 */

/*!
 * Constructs a UpdateStageResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateStageResponse::UpdateStageResponse(
        const UpdateStageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new UpdateStageResponsePrivate(this), parent)
{
    setRequest(new UpdateStageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateStageRequest * UpdateStageResponse::request() const
{
    Q_D(const UpdateStageResponse);
    return static_cast<const UpdateStageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks UpdateStage \a response.
 */
void UpdateStageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateStageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::UpdateStageResponsePrivate
 * \brief The UpdateStageResponsePrivate class provides private implementation for UpdateStageResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a UpdateStageResponsePrivate object with public implementation \a q.
 */
UpdateStageResponsePrivate::UpdateStageResponsePrivate(
    UpdateStageResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks UpdateStage response element from \a xml.
 */
void UpdateStageResponsePrivate::parseUpdateStageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
