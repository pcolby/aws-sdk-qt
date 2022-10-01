/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "startstagedeploymentresponse.h"
#include "startstagedeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::StartStageDeploymentResponse
 * \brief The StartStageDeploymentResponse class provides an interace for GameSparks StartStageDeployment responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::startStageDeployment
 */

/*!
 * Constructs a StartStageDeploymentResponse object for \a reply to \a request, with parent \a parent.
 */
StartStageDeploymentResponse::StartStageDeploymentResponse(
        const StartStageDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new StartStageDeploymentResponsePrivate(this), parent)
{
    setRequest(new StartStageDeploymentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartStageDeploymentRequest * StartStageDeploymentResponse::request() const
{
    Q_D(const StartStageDeploymentResponse);
    return static_cast<const StartStageDeploymentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks StartStageDeployment \a response.
 */
void StartStageDeploymentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartStageDeploymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::StartStageDeploymentResponsePrivate
 * \brief The StartStageDeploymentResponsePrivate class provides private implementation for StartStageDeploymentResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a StartStageDeploymentResponsePrivate object with public implementation \a q.
 */
StartStageDeploymentResponsePrivate::StartStageDeploymentResponsePrivate(
    StartStageDeploymentResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks StartStageDeployment response element from \a xml.
 */
void StartStageDeploymentResponsePrivate::parseStartStageDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartStageDeploymentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
