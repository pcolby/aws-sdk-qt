// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrecommendationpreferencesresponse.h"
#include "getrecommendationpreferencesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::GetRecommendationPreferencesResponse
 * \brief The GetRecommendationPreferencesResponse class provides an interace for ComputeOptimizer GetRecommendationPreferences responses.
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
 * \sa ComputeOptimizerClient::getRecommendationPreferences
 */

/*!
 * Constructs a GetRecommendationPreferencesResponse object for \a reply to \a request, with parent \a parent.
 */
GetRecommendationPreferencesResponse::GetRecommendationPreferencesResponse(
        const GetRecommendationPreferencesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComputeOptimizerResponse(new GetRecommendationPreferencesResponsePrivate(this), parent)
{
    setRequest(new GetRecommendationPreferencesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRecommendationPreferencesRequest * GetRecommendationPreferencesResponse::request() const
{
    Q_D(const GetRecommendationPreferencesResponse);
    return static_cast<const GetRecommendationPreferencesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComputeOptimizer GetRecommendationPreferences \a response.
 */
void GetRecommendationPreferencesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRecommendationPreferencesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComputeOptimizer::GetRecommendationPreferencesResponsePrivate
 * \brief The GetRecommendationPreferencesResponsePrivate class provides private implementation for GetRecommendationPreferencesResponse.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a GetRecommendationPreferencesResponsePrivate object with public implementation \a q.
 */
GetRecommendationPreferencesResponsePrivate::GetRecommendationPreferencesResponsePrivate(
    GetRecommendationPreferencesResponse * const q) : ComputeOptimizerResponsePrivate(q)
{

}

/*!
 * Parses a ComputeOptimizer GetRecommendationPreferences response element from \a xml.
 */
void GetRecommendationPreferencesResponsePrivate::parseGetRecommendationPreferencesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRecommendationPreferencesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComputeOptimizer
} // namespace QtAws
