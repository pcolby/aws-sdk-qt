// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getebsvolumerecommendationsresponse.h"
#include "getebsvolumerecommendationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::GetEBSVolumeRecommendationsResponse
 * \brief The GetEBSVolumeRecommendationsResponse class provides an interace for ComputeOptimizer GetEBSVolumeRecommendations responses.
 *
 * \inmodule QtAwsComputeOptimizer
 *
 *  Compute Optimizer is a service that analyzes the configuration and utilization metrics of your Amazon Web Services
 *  compute resources, such as Amazon EC2 instances, Amazon EC2 Auto Scaling groups, Lambda functions, and Amazon EBS
 *  volumes. It reports whether your resources are optimal, and generates optimization recommendations to reduce the cost
 *  and improve the performance of your workloads. Compute Optimizer also provides recent utilization metric data, in
 *  addition to projected utilization metric data for the recommendations, which you can use to evaluate which
 *  recommendation provides the best price-performance trade-off. The analysis of your usage patterns can help you decide
 *  when to move or resize your running resources, and still meet your performance and capacity requirements. For more
 *  information about Compute Optimizer, including the required permissions to use the service, see the <a
 *  href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/">Compute Optimizer User
 *
 * \sa ComputeOptimizerClient::getEBSVolumeRecommendations
 */

/*!
 * Constructs a GetEBSVolumeRecommendationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetEBSVolumeRecommendationsResponse::GetEBSVolumeRecommendationsResponse(
        const GetEBSVolumeRecommendationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComputeOptimizerResponse(new GetEBSVolumeRecommendationsResponsePrivate(this), parent)
{
    setRequest(new GetEBSVolumeRecommendationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEBSVolumeRecommendationsRequest * GetEBSVolumeRecommendationsResponse::request() const
{
    Q_D(const GetEBSVolumeRecommendationsResponse);
    return static_cast<const GetEBSVolumeRecommendationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComputeOptimizer GetEBSVolumeRecommendations \a response.
 */
void GetEBSVolumeRecommendationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEBSVolumeRecommendationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComputeOptimizer::GetEBSVolumeRecommendationsResponsePrivate
 * \brief The GetEBSVolumeRecommendationsResponsePrivate class provides private implementation for GetEBSVolumeRecommendationsResponse.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a GetEBSVolumeRecommendationsResponsePrivate object with public implementation \a q.
 */
GetEBSVolumeRecommendationsResponsePrivate::GetEBSVolumeRecommendationsResponsePrivate(
    GetEBSVolumeRecommendationsResponse * const q) : ComputeOptimizerResponsePrivate(q)
{

}

/*!
 * Parses a ComputeOptimizer GetEBSVolumeRecommendations response element from \a xml.
 */
void GetEBSVolumeRecommendationsResponsePrivate::parseGetEBSVolumeRecommendationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEBSVolumeRecommendationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComputeOptimizer
} // namespace QtAws
