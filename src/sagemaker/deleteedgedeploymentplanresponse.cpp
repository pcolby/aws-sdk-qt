// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
