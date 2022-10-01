// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
