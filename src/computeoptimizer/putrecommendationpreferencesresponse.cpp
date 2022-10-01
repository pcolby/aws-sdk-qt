// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putrecommendationpreferencesresponse.h"
#include "putrecommendationpreferencesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::PutRecommendationPreferencesResponse
 * \brief The PutRecommendationPreferencesResponse class provides an interace for ComputeOptimizer PutRecommendationPreferences responses.
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
 * \sa ComputeOptimizerClient::putRecommendationPreferences
 */

/*!
 * Constructs a PutRecommendationPreferencesResponse object for \a reply to \a request, with parent \a parent.
 */
PutRecommendationPreferencesResponse::PutRecommendationPreferencesResponse(
        const PutRecommendationPreferencesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComputeOptimizerResponse(new PutRecommendationPreferencesResponsePrivate(this), parent)
{
    setRequest(new PutRecommendationPreferencesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutRecommendationPreferencesRequest * PutRecommendationPreferencesResponse::request() const
{
    Q_D(const PutRecommendationPreferencesResponse);
    return static_cast<const PutRecommendationPreferencesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComputeOptimizer PutRecommendationPreferences \a response.
 */
void PutRecommendationPreferencesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutRecommendationPreferencesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComputeOptimizer::PutRecommendationPreferencesResponsePrivate
 * \brief The PutRecommendationPreferencesResponsePrivate class provides private implementation for PutRecommendationPreferencesResponse.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a PutRecommendationPreferencesResponsePrivate object with public implementation \a q.
 */
PutRecommendationPreferencesResponsePrivate::PutRecommendationPreferencesResponsePrivate(
    PutRecommendationPreferencesResponse * const q) : ComputeOptimizerResponsePrivate(q)
{

}

/*!
 * Parses a ComputeOptimizer PutRecommendationPreferences response element from \a xml.
 */
void PutRecommendationPreferencesResponsePrivate::parsePutRecommendationPreferencesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRecommendationPreferencesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComputeOptimizer
} // namespace QtAws
