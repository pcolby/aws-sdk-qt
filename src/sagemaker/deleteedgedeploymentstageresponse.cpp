// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
