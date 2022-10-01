// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getec2recommendationprojectedmetricsresponse.h"
#include "getec2recommendationprojectedmetricsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::GetEC2RecommendationProjectedMetricsResponse
 * \brief The GetEC2RecommendationProjectedMetricsResponse class provides an interace for ComputeOptimizer GetEC2RecommendationProjectedMetrics responses.
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
 * \sa ComputeOptimizerClient::getEC2RecommendationProjectedMetrics
 */

/*!
 * Constructs a GetEC2RecommendationProjectedMetricsResponse object for \a reply to \a request, with parent \a parent.
 */
GetEC2RecommendationProjectedMetricsResponse::GetEC2RecommendationProjectedMetricsResponse(
        const GetEC2RecommendationProjectedMetricsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComputeOptimizerResponse(new GetEC2RecommendationProjectedMetricsResponsePrivate(this), parent)
{
    setRequest(new GetEC2RecommendationProjectedMetricsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEC2RecommendationProjectedMetricsRequest * GetEC2RecommendationProjectedMetricsResponse::request() const
{
    Q_D(const GetEC2RecommendationProjectedMetricsResponse);
    return static_cast<const GetEC2RecommendationProjectedMetricsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComputeOptimizer GetEC2RecommendationProjectedMetrics \a response.
 */
void GetEC2RecommendationProjectedMetricsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEC2RecommendationProjectedMetricsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComputeOptimizer::GetEC2RecommendationProjectedMetricsResponsePrivate
 * \brief The GetEC2RecommendationProjectedMetricsResponsePrivate class provides private implementation for GetEC2RecommendationProjectedMetricsResponse.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a GetEC2RecommendationProjectedMetricsResponsePrivate object with public implementation \a q.
 */
GetEC2RecommendationProjectedMetricsResponsePrivate::GetEC2RecommendationProjectedMetricsResponsePrivate(
    GetEC2RecommendationProjectedMetricsResponse * const q) : ComputeOptimizerResponsePrivate(q)
{

}

/*!
 * Parses a ComputeOptimizer GetEC2RecommendationProjectedMetrics response element from \a xml.
 */
void GetEC2RecommendationProjectedMetricsResponsePrivate::parseGetEC2RecommendationProjectedMetricsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEC2RecommendationProjectedMetricsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComputeOptimizer
} // namespace QtAws
