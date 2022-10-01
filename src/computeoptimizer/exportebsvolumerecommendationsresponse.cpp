// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportebsvolumerecommendationsresponse.h"
#include "exportebsvolumerecommendationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::ExportEBSVolumeRecommendationsResponse
 * \brief The ExportEBSVolumeRecommendationsResponse class provides an interace for ComputeOptimizer ExportEBSVolumeRecommendations responses.
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
 * \sa ComputeOptimizerClient::exportEBSVolumeRecommendations
 */

/*!
 * Constructs a ExportEBSVolumeRecommendationsResponse object for \a reply to \a request, with parent \a parent.
 */
ExportEBSVolumeRecommendationsResponse::ExportEBSVolumeRecommendationsResponse(
        const ExportEBSVolumeRecommendationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComputeOptimizerResponse(new ExportEBSVolumeRecommendationsResponsePrivate(this), parent)
{
    setRequest(new ExportEBSVolumeRecommendationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportEBSVolumeRecommendationsRequest * ExportEBSVolumeRecommendationsResponse::request() const
{
    Q_D(const ExportEBSVolumeRecommendationsResponse);
    return static_cast<const ExportEBSVolumeRecommendationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComputeOptimizer ExportEBSVolumeRecommendations \a response.
 */
void ExportEBSVolumeRecommendationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExportEBSVolumeRecommendationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComputeOptimizer::ExportEBSVolumeRecommendationsResponsePrivate
 * \brief The ExportEBSVolumeRecommendationsResponsePrivate class provides private implementation for ExportEBSVolumeRecommendationsResponse.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a ExportEBSVolumeRecommendationsResponsePrivate object with public implementation \a q.
 */
ExportEBSVolumeRecommendationsResponsePrivate::ExportEBSVolumeRecommendationsResponsePrivate(
    ExportEBSVolumeRecommendationsResponse * const q) : ComputeOptimizerResponsePrivate(q)
{

}

/*!
 * Parses a ComputeOptimizer ExportEBSVolumeRecommendations response element from \a xml.
 */
void ExportEBSVolumeRecommendationsResponsePrivate::parseExportEBSVolumeRecommendationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportEBSVolumeRecommendationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComputeOptimizer
} // namespace QtAws
