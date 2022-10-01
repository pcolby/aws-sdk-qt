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

#include "stopedgedeploymentstageresponse.h"
#include "stopedgedeploymentstageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopEdgeDeploymentStageResponse
 * \brief The StopEdgeDeploymentStageResponse class provides an interace for SageMaker StopEdgeDeploymentStage responses.
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
 * \sa SageMakerClient::stopEdgeDeploymentStage
 */

/*!
 * Constructs a StopEdgeDeploymentStageResponse object for \a reply to \a request, with parent \a parent.
 */
StopEdgeDeploymentStageResponse::StopEdgeDeploymentStageResponse(
        const StopEdgeDeploymentStageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StopEdgeDeploymentStageResponsePrivate(this), parent)
{
    setRequest(new StopEdgeDeploymentStageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopEdgeDeploymentStageRequest * StopEdgeDeploymentStageResponse::request() const
{
    Q_D(const StopEdgeDeploymentStageResponse);
    return static_cast<const StopEdgeDeploymentStageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker StopEdgeDeploymentStage \a response.
 */
void StopEdgeDeploymentStageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopEdgeDeploymentStageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StopEdgeDeploymentStageResponsePrivate
 * \brief The StopEdgeDeploymentStageResponsePrivate class provides private implementation for StopEdgeDeploymentStageResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopEdgeDeploymentStageResponsePrivate object with public implementation \a q.
 */
StopEdgeDeploymentStageResponsePrivate::StopEdgeDeploymentStageResponsePrivate(
    StopEdgeDeploymentStageResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StopEdgeDeploymentStage response element from \a xml.
 */
void StopEdgeDeploymentStageResponsePrivate::parseStopEdgeDeploymentStageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopEdgeDeploymentStageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
