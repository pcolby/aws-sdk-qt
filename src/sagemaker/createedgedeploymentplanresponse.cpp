// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createedgedeploymentplanresponse.h"
#include "createedgedeploymentplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateEdgeDeploymentPlanResponse
 * \brief The CreateEdgeDeploymentPlanResponse class provides an interace for SageMaker CreateEdgeDeploymentPlan responses.
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
 * \sa SageMakerClient::createEdgeDeploymentPlan
 */

/*!
 * Constructs a CreateEdgeDeploymentPlanResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEdgeDeploymentPlanResponse::CreateEdgeDeploymentPlanResponse(
        const CreateEdgeDeploymentPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateEdgeDeploymentPlanResponsePrivate(this), parent)
{
    setRequest(new CreateEdgeDeploymentPlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEdgeDeploymentPlanRequest * CreateEdgeDeploymentPlanResponse::request() const
{
    Q_D(const CreateEdgeDeploymentPlanResponse);
    return static_cast<const CreateEdgeDeploymentPlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateEdgeDeploymentPlan \a response.
 */
void CreateEdgeDeploymentPlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEdgeDeploymentPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateEdgeDeploymentPlanResponsePrivate
 * \brief The CreateEdgeDeploymentPlanResponsePrivate class provides private implementation for CreateEdgeDeploymentPlanResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateEdgeDeploymentPlanResponsePrivate object with public implementation \a q.
 */
CreateEdgeDeploymentPlanResponsePrivate::CreateEdgeDeploymentPlanResponsePrivate(
    CreateEdgeDeploymentPlanResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateEdgeDeploymentPlan response element from \a xml.
 */
void CreateEdgeDeploymentPlanResponsePrivate::parseCreateEdgeDeploymentPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEdgeDeploymentPlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
