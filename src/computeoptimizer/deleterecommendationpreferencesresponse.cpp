// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterecommendationpreferencesresponse.h"
#include "deleterecommendationpreferencesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::DeleteRecommendationPreferencesResponse
 * \brief The DeleteRecommendationPreferencesResponse class provides an interace for ComputeOptimizer DeleteRecommendationPreferences responses.
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
 * \sa ComputeOptimizerClient::deleteRecommendationPreferences
 */

/*!
 * Constructs a DeleteRecommendationPreferencesResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRecommendationPreferencesResponse::DeleteRecommendationPreferencesResponse(
        const DeleteRecommendationPreferencesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComputeOptimizerResponse(new DeleteRecommendationPreferencesResponsePrivate(this), parent)
{
    setRequest(new DeleteRecommendationPreferencesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRecommendationPreferencesRequest * DeleteRecommendationPreferencesResponse::request() const
{
    Q_D(const DeleteRecommendationPreferencesResponse);
    return static_cast<const DeleteRecommendationPreferencesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComputeOptimizer DeleteRecommendationPreferences \a response.
 */
void DeleteRecommendationPreferencesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRecommendationPreferencesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComputeOptimizer::DeleteRecommendationPreferencesResponsePrivate
 * \brief The DeleteRecommendationPreferencesResponsePrivate class provides private implementation for DeleteRecommendationPreferencesResponse.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a DeleteRecommendationPreferencesResponsePrivate object with public implementation \a q.
 */
DeleteRecommendationPreferencesResponsePrivate::DeleteRecommendationPreferencesResponsePrivate(
    DeleteRecommendationPreferencesResponse * const q) : ComputeOptimizerResponsePrivate(q)
{

}

/*!
 * Parses a ComputeOptimizer DeleteRecommendationPreferences response element from \a xml.
 */
void DeleteRecommendationPreferencesResponsePrivate::parseDeleteRecommendationPreferencesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRecommendationPreferencesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComputeOptimizer
} // namespace QtAws
