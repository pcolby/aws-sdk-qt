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

#include "deleteedgedeploymentstageresponse.h"
#include "deleteedgedeploymentstageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteEdgeDeploymentStageResponse
 * \brief The DeleteEdgeDeploymentStageResponse class provides an interace for SageMaker DeleteEdgeDeploymentStage responses.
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
 * \sa SageMakerClient::deleteEdgeDeploymentStage
 */

/*!
 * Constructs a DeleteEdgeDeploymentStageResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEdgeDeploymentStageResponse::DeleteEdgeDeploymentStageResponse(
        const DeleteEdgeDeploymentStageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteEdgeDeploymentStageResponsePrivate(this), parent)
{
    setRequest(new DeleteEdgeDeploymentStageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEdgeDeploymentStageRequest * DeleteEdgeDeploymentStageResponse::request() const
{
    Q_D(const DeleteEdgeDeploymentStageResponse);
    return static_cast<const DeleteEdgeDeploymentStageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteEdgeDeploymentStage \a response.
 */
void DeleteEdgeDeploymentStageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEdgeDeploymentStageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteEdgeDeploymentStageResponsePrivate
 * \brief The DeleteEdgeDeploymentStageResponsePrivate class provides private implementation for DeleteEdgeDeploymentStageResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteEdgeDeploymentStageResponsePrivate object with public implementation \a q.
 */
DeleteEdgeDeploymentStageResponsePrivate::DeleteEdgeDeploymentStageResponsePrivate(
    DeleteEdgeDeploymentStageResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteEdgeDeploymentStage response element from \a xml.
 */
void DeleteEdgeDeploymentStageResponsePrivate::parseDeleteEdgeDeploymentStageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEdgeDeploymentStageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
