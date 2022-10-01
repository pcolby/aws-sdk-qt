// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "geteffectiverecommendationpreferencesresponse.h"
#include "geteffectiverecommendationpreferencesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::GetEffectiveRecommendationPreferencesResponse
 * \brief The GetEffectiveRecommendationPreferencesResponse class provides an interace for ComputeOptimizer GetEffectiveRecommendationPreferences responses.
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
 * \sa ComputeOptimizerClient::getEffectiveRecommendationPreferences
 */

/*!
 * Constructs a GetEffectiveRecommendationPreferencesResponse object for \a reply to \a request, with parent \a parent.
 */
GetEffectiveRecommendationPreferencesResponse::GetEffectiveRecommendationPreferencesResponse(
        const GetEffectiveRecommendationPreferencesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComputeOptimizerResponse(new GetEffectiveRecommendationPreferencesResponsePrivate(this), parent)
{
    setRequest(new GetEffectiveRecommendationPreferencesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEffectiveRecommendationPreferencesRequest * GetEffectiveRecommendationPreferencesResponse::request() const
{
    Q_D(const GetEffectiveRecommendationPreferencesResponse);
    return static_cast<const GetEffectiveRecommendationPreferencesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComputeOptimizer GetEffectiveRecommendationPreferences \a response.
 */
void GetEffectiveRecommendationPreferencesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEffectiveRecommendationPreferencesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComputeOptimizer::GetEffectiveRecommendationPreferencesResponsePrivate
 * \brief The GetEffectiveRecommendationPreferencesResponsePrivate class provides private implementation for GetEffectiveRecommendationPreferencesResponse.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a GetEffectiveRecommendationPreferencesResponsePrivate object with public implementation \a q.
 */
GetEffectiveRecommendationPreferencesResponsePrivate::GetEffectiveRecommendationPreferencesResponsePrivate(
    GetEffectiveRecommendationPreferencesResponse * const q) : ComputeOptimizerResponsePrivate(q)
{

}

/*!
 * Parses a ComputeOptimizer GetEffectiveRecommendationPreferences response element from \a xml.
 */
void GetEffectiveRecommendationPreferencesResponsePrivate::parseGetEffectiveRecommendationPreferencesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEffectiveRecommendationPreferencesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComputeOptimizer
} // namespace QtAws
