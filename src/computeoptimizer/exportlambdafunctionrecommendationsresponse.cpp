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

#include "exportlambdafunctionrecommendationsresponse.h"
#include "exportlambdafunctionrecommendationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::ExportLambdaFunctionRecommendationsResponse
 * \brief The ExportLambdaFunctionRecommendationsResponse class provides an interace for ComputeOptimizer ExportLambdaFunctionRecommendations responses.
 *
 * \inmodule QtAwsComputeOptimizer
 *
 *  AWS Compute Optimizer is a service that analyzes the configuration and utilization metrics of your AWS compute
 *  resources, such as EC2 instances, Auto Scaling groups, AWS Lambda functions, and Amazon EBS volumes. It reports whether
 *  your resources are optimal, and generates optimization recommendations to reduce the cost and improve the performance of
 *  your workloads. Compute Optimizer also provides recent utilization metric data, as well as projected utilization metric
 *  data for the recommendations, which you can use to evaluate which recommendation provides the best price-performance
 *  trade-off. The analysis of your usage patterns can help you decide when to move or resize your running resources, and
 *  still meet your performance and capacity requirements. For more information about Compute Optimizer, including the
 *  required permissions to use the service, see the <a href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/">AWS
 *  Compute Optimizer User
 *
 * \sa ComputeOptimizerClient::exportLambdaFunctionRecommendations
 */

/*!
 * Constructs a ExportLambdaFunctionRecommendationsResponse object for \a reply to \a request, with parent \a parent.
 */
ExportLambdaFunctionRecommendationsResponse::ExportLambdaFunctionRecommendationsResponse(
        const ExportLambdaFunctionRecommendationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComputeOptimizerResponse(new ExportLambdaFunctionRecommendationsResponsePrivate(this), parent)
{
    setRequest(new ExportLambdaFunctionRecommendationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportLambdaFunctionRecommendationsRequest * ExportLambdaFunctionRecommendationsResponse::request() const
{
    Q_D(const ExportLambdaFunctionRecommendationsResponse);
    return static_cast<const ExportLambdaFunctionRecommendationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComputeOptimizer ExportLambdaFunctionRecommendations \a response.
 */
void ExportLambdaFunctionRecommendationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExportLambdaFunctionRecommendationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComputeOptimizer::ExportLambdaFunctionRecommendationsResponsePrivate
 * \brief The ExportLambdaFunctionRecommendationsResponsePrivate class provides private implementation for ExportLambdaFunctionRecommendationsResponse.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a ExportLambdaFunctionRecommendationsResponsePrivate object with public implementation \a q.
 */
ExportLambdaFunctionRecommendationsResponsePrivate::ExportLambdaFunctionRecommendationsResponsePrivate(
    ExportLambdaFunctionRecommendationsResponse * const q) : ComputeOptimizerResponsePrivate(q)
{

}

/*!
 * Parses a ComputeOptimizer ExportLambdaFunctionRecommendations response element from \a xml.
 */
void ExportLambdaFunctionRecommendationsResponsePrivate::parseExportLambdaFunctionRecommendationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportLambdaFunctionRecommendationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComputeOptimizer
} // namespace QtAws
