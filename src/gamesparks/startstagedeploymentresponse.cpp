// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
