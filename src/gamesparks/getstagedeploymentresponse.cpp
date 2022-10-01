// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstagedeploymentresponse.h"
#include "getstagedeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetStageDeploymentResponse
 * \brief The GetStageDeploymentResponse class provides an interace for GameSparks GetStageDeployment responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getStageDeployment
 */

/*!
 * Constructs a GetStageDeploymentResponse object for \a reply to \a request, with parent \a parent.
 */
GetStageDeploymentResponse::GetStageDeploymentResponse(
        const GetStageDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new GetStageDeploymentResponsePrivate(this), parent)
{
    setRequest(new GetStageDeploymentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStageDeploymentRequest * GetStageDeploymentResponse::request() const
{
    Q_D(const GetStageDeploymentResponse);
    return static_cast<const GetStageDeploymentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks GetStageDeployment \a response.
 */
void GetStageDeploymentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStageDeploymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::GetStageDeploymentResponsePrivate
 * \brief The GetStageDeploymentResponsePrivate class provides private implementation for GetStageDeploymentResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetStageDeploymentResponsePrivate object with public implementation \a q.
 */
GetStageDeploymentResponsePrivate::GetStageDeploymentResponsePrivate(
    GetStageDeploymentResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks GetStageDeployment response element from \a xml.
 */
void GetStageDeploymentResponsePrivate::parseGetStageDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStageDeploymentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
