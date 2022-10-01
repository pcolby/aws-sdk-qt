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

#include "startedgedeploymentstageresponse.h"
#include "startedgedeploymentstageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StartEdgeDeploymentStageResponse
 * \brief The StartEdgeDeploymentStageResponse class provides an interace for SageMaker StartEdgeDeploymentStage responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::startEdgeDeploymentStage
 */

/*!
 * Constructs a StartEdgeDeploymentStageResponse object for \a reply to \a request, with parent \a parent.
 */
StartEdgeDeploymentStageResponse::StartEdgeDeploymentStageResponse(
        const StartEdgeDeploymentStageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StartEdgeDeploymentStageResponsePrivate(this), parent)
{
    setRequest(new StartEdgeDeploymentStageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartEdgeDeploymentStageRequest * StartEdgeDeploymentStageResponse::request() const
{
    Q_D(const StartEdgeDeploymentStageResponse);
    return static_cast<const StartEdgeDeploymentStageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker StartEdgeDeploymentStage \a response.
 */
void StartEdgeDeploymentStageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartEdgeDeploymentStageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StartEdgeDeploymentStageResponsePrivate
 * \brief The StartEdgeDeploymentStageResponsePrivate class provides private implementation for StartEdgeDeploymentStageResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StartEdgeDeploymentStageResponsePrivate object with public implementation \a q.
 */
StartEdgeDeploymentStageResponsePrivate::StartEdgeDeploymentStageResponsePrivate(
    StartEdgeDeploymentStageResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StartEdgeDeploymentStage response element from \a xml.
 */
void StartEdgeDeploymentStageResponsePrivate::parseStartEdgeDeploymentStageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartEdgeDeploymentStageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
