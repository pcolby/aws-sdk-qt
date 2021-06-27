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
    return static_cast<const GetEnrollmentStatusRequest *>(ComputeOptimizerResponse::request());
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
