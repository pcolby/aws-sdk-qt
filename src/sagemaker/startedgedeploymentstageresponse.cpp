// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
