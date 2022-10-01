// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createedgedeploymentstageresponse.h"
#include "createedgedeploymentstageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateEdgeDeploymentStageResponse
 * \brief The CreateEdgeDeploymentStageResponse class provides an interace for SageMaker CreateEdgeDeploymentStage responses.
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
 * \sa SageMakerClient::createEdgeDeploymentStage
 */

/*!
 * Constructs a CreateEdgeDeploymentStageResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEdgeDeploymentStageResponse::CreateEdgeDeploymentStageResponse(
        const CreateEdgeDeploymentStageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateEdgeDeploymentStageResponsePrivate(this), parent)
{
    setRequest(new CreateEdgeDeploymentStageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEdgeDeploymentStageRequest * CreateEdgeDeploymentStageResponse::request() const
{
    Q_D(const CreateEdgeDeploymentStageResponse);
    return static_cast<const CreateEdgeDeploymentStageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateEdgeDeploymentStage \a response.
 */
void CreateEdgeDeploymentStageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEdgeDeploymentStageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateEdgeDeploymentStageResponsePrivate
 * \brief The CreateEdgeDeploymentStageResponsePrivate class provides private implementation for CreateEdgeDeploymentStageResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateEdgeDeploymentStageResponsePrivate object with public implementation \a q.
 */
CreateEdgeDeploymentStageResponsePrivate::CreateEdgeDeploymentStageResponsePrivate(
    CreateEdgeDeploymentStageResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateEdgeDeploymentStage response element from \a xml.
 */
void CreateEdgeDeploymentStageResponsePrivate::parseCreateEdgeDeploymentStageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEdgeDeploymentStageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
