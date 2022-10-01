// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportec2instancerecommendationsresponse.h"
#include "exportec2instancerecommendationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::ExportEC2InstanceRecommendationsResponse
 * \brief The ExportEC2InstanceRecommendationsResponse class provides an interace for ComputeOptimizer ExportEC2InstanceRecommendations responses.
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
 * \sa ComputeOptimizerClient::exportEC2InstanceRecommendations
 */

/*!
 * Constructs a ExportEC2InstanceRecommendationsResponse object for \a reply to \a request, with parent \a parent.
 */
ExportEC2InstanceRecommendationsResponse::ExportEC2InstanceRecommendationsResponse(
        const ExportEC2InstanceRecommendationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComputeOptimizerResponse(new ExportEC2InstanceRecommendationsResponsePrivate(this), parent)
{
    setRequest(new ExportEC2InstanceRecommendationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportEC2InstanceRecommendationsRequest * ExportEC2InstanceRecommendationsResponse::request() const
{
    Q_D(const ExportEC2InstanceRecommendationsResponse);
    return static_cast<const ExportEC2InstanceRecommendationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComputeOptimizer ExportEC2InstanceRecommendations \a response.
 */
void ExportEC2InstanceRecommendationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExportEC2InstanceRecommendationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComputeOptimizer::ExportEC2InstanceRecommendationsResponsePrivate
 * \brief The ExportEC2InstanceRecommendationsResponsePrivate class provides private implementation for ExportEC2InstanceRecommendationsResponse.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a ExportEC2InstanceRecommendationsResponsePrivate object with public implementation \a q.
 */
ExportEC2InstanceRecommendationsResponsePrivate::ExportEC2InstanceRecommendationsResponsePrivate(
    ExportEC2InstanceRecommendationsResponse * const q) : ComputeOptimizerResponsePrivate(q)
{

}

/*!
 * Parses a ComputeOptimizer ExportEC2InstanceRecommendations response element from \a xml.
 */
void ExportEC2InstanceRecommendationsResponsePrivate::parseExportEC2InstanceRecommendationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportEC2InstanceRecommendationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComputeOptimizer
} // namespace QtAws
