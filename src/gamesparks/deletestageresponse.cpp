// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestageresponse.h"
#include "deletestageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::DeleteStageResponse
 * \brief The DeleteStageResponse class provides an interace for GameSparks DeleteStage responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::deleteStage
 */

/*!
 * Constructs a DeleteStageResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStageResponse::DeleteStageResponse(
        const DeleteStageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new DeleteStageResponsePrivate(this), parent)
{
    setRequest(new DeleteStageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStageRequest * DeleteStageResponse::request() const
{
    Q_D(const DeleteStageResponse);
    return static_cast<const DeleteStageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks DeleteStage \a response.
 */
void DeleteStageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::DeleteStageResponsePrivate
 * \brief The DeleteStageResponsePrivate class provides private implementation for DeleteStageResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a DeleteStageResponsePrivate object with public implementation \a q.
 */
DeleteStageResponsePrivate::DeleteStageResponsePrivate(
    DeleteStageResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks DeleteStage response element from \a xml.
 */
void DeleteStageResponsePrivate::parseDeleteStageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
