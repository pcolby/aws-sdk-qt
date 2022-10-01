// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeedgedeploymentplanresponse.h"
#include "describeedgedeploymentplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeEdgeDeploymentPlanResponse
 * \brief The DescribeEdgeDeploymentPlanResponse class provides an interace for SageMaker DescribeEdgeDeploymentPlan responses.
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
 * \sa SageMakerClient::describeEdgeDeploymentPlan
 */

/*!
 * Constructs a DescribeEdgeDeploymentPlanResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEdgeDeploymentPlanResponse::DescribeEdgeDeploymentPlanResponse(
        const DescribeEdgeDeploymentPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeEdgeDeploymentPlanResponsePrivate(this), parent)
{
    setRequest(new DescribeEdgeDeploymentPlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEdgeDeploymentPlanRequest * DescribeEdgeDeploymentPlanResponse::request() const
{
    Q_D(const DescribeEdgeDeploymentPlanResponse);
    return static_cast<const DescribeEdgeDeploymentPlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeEdgeDeploymentPlan \a response.
 */
void DescribeEdgeDeploymentPlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEdgeDeploymentPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeEdgeDeploymentPlanResponsePrivate
 * \brief The DescribeEdgeDeploymentPlanResponsePrivate class provides private implementation for DescribeEdgeDeploymentPlanResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeEdgeDeploymentPlanResponsePrivate object with public implementation \a q.
 */
DescribeEdgeDeploymentPlanResponsePrivate::DescribeEdgeDeploymentPlanResponsePrivate(
    DescribeEdgeDeploymentPlanResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeEdgeDeploymentPlan response element from \a xml.
 */
void DescribeEdgeDeploymentPlanResponsePrivate::parseDescribeEdgeDeploymentPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEdgeDeploymentPlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
