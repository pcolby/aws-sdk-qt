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
