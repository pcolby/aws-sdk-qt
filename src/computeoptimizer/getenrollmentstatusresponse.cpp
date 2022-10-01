// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getenrollmentstatusresponse.h"
#include "getenrollmentstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::GetEnrollmentStatusResponse
 * \brief The GetEnrollmentStatusResponse class provides an interace for ComputeOptimizer GetEnrollmentStatus responses.
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
 * \sa ComputeOptimizerClient::getEnrollmentStatus
 */

/*!
 * Constructs a GetEnrollmentStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetEnrollmentStatusResponse::GetEnrollmentStatusResponse(
        const GetEnrollmentStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComputeOptimizerResponse(new GetEnrollmentStatusResponsePrivate(this), parent)
{
    setRequest(new GetEnrollmentStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEnrollmentStatusRequest * GetEnrollmentStatusResponse::request() const
{
    Q_D(const GetEnrollmentStatusResponse);
    return static_cast<const GetEnrollmentStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComputeOptimizer GetEnrollmentStatus \a response.
 */
void GetEnrollmentStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEnrollmentStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComputeOptimizer::GetEnrollmentStatusResponsePrivate
 * \brief The GetEnrollmentStatusResponsePrivate class provides private implementation for GetEnrollmentStatusResponse.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a GetEnrollmentStatusResponsePrivate object with public implementation \a q.
 */
GetEnrollmentStatusResponsePrivate::GetEnrollmentStatusResponsePrivate(
    GetEnrollmentStatusResponse * const q) : ComputeOptimizerResponsePrivate(q)
{

}

/*!
 * Parses a ComputeOptimizer GetEnrollmentStatus response element from \a xml.
 */
void GetEnrollmentStatusResponsePrivate::parseGetEnrollmentStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEnrollmentStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComputeOptimizer
} // namespace QtAws
