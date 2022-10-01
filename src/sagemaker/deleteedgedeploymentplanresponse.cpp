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

#include "deleteedgedeploymentplanresponse.h"
#include "deleteedgedeploymentplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteEdgeDeploymentPlanResponse
 * \brief The DeleteEdgeDeploymentPlanResponse class provides an interace for SageMaker DeleteEdgeDeploymentPlan responses.
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
 * \sa SageMakerClient::deleteEdgeDeploymentPlan
 */

/*!
 * Constructs a DeleteEdgeDeploymentPlanResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEdgeDeploymentPlanResponse::DeleteEdgeDeploymentPlanResponse(
        const DeleteEdgeDeploymentPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteEdgeDeploymentPlanResponsePrivate(this), parent)
{
    setRequest(new DeleteEdgeDeploymentPlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEdgeDeploymentPlanRequest * DeleteEdgeDeploymentPlanResponse::request() const
{
    Q_D(const DeleteEdgeDeploymentPlanResponse);
    return static_cast<const DeleteEdgeDeploymentPlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteEdgeDeploymentPlan \a response.
 */
void DeleteEdgeDeploymentPlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEdgeDeploymentPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteEdgeDeploymentPlanResponsePrivate
 * \brief The DeleteEdgeDeploymentPlanResponsePrivate class provides private implementation for DeleteEdgeDeploymentPlanResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteEdgeDeploymentPlanResponsePrivate object with public implementation \a q.
 */
DeleteEdgeDeploymentPlanResponsePrivate::DeleteEdgeDeploymentPlanResponsePrivate(
    DeleteEdgeDeploymentPlanResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteEdgeDeploymentPlan response element from \a xml.
 */
void DeleteEdgeDeploymentPlanResponsePrivate::parseDeleteEdgeDeploymentPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEdgeDeploymentPlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
