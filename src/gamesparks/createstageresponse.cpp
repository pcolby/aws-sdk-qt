// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstageresponse.h"
#include "createstageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::CreateStageResponse
 * \brief The CreateStageResponse class provides an interace for GameSparks CreateStage responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::createStage
 */

/*!
 * Constructs a CreateStageResponse object for \a reply to \a request, with parent \a parent.
 */
CreateStageResponse::CreateStageResponse(
        const CreateStageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new CreateStageResponsePrivate(this), parent)
{
    setRequest(new CreateStageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateStageRequest * CreateStageResponse::request() const
{
    Q_D(const CreateStageResponse);
    return static_cast<const CreateStageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks CreateStage \a response.
 */
void CreateStageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateStageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::CreateStageResponsePrivate
 * \brief The CreateStageResponsePrivate class provides private implementation for CreateStageResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a CreateStageResponsePrivate object with public implementation \a q.
 */
CreateStageResponsePrivate::CreateStageResponsePrivate(
    CreateStageResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks CreateStage response element from \a xml.
 */
void CreateStageResponsePrivate::parseCreateStageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
