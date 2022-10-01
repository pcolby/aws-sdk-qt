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

#include "describeschedulingpoliciesresponse.h"
#include "describeschedulingpoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::DescribeSchedulingPoliciesResponse
 * \brief The DescribeSchedulingPoliciesResponse class provides an interace for Batch DescribeSchedulingPolicies responses.
 *
 * \inmodule QtAwsBatch
 *
 *  <fullname>Batch</fullname>
 * 
 *  Using Batch, you can run batch computing workloads on the Amazon Web Services Cloud. Batch computing is a common means
 *  for developers, scientists, and engineers to access large amounts of compute resources. Batch uses the advantages of
 *  this computing workload to remove the undifferentiated heavy lifting of configuring and managing required
 *  infrastructure. At the same time, it also adopts a familiar batch computing software approach. Given these advantages,
 *  Batch can help you to efficiently provision resources in response to jobs submitted, thus effectively helping you to
 *  eliminate capacity constraints, reduce compute costs, and deliver your results more
 * 
 *  quickly>
 * 
 *  As a fully managed service, Batch can run batch computing workloads of any scale. Batch automatically provisions compute
 *  resources and optimizes workload distribution based on the quantity and scale of your specific workloads. With Batch,
 *  there's no need to install or manage batch computing software. This means that you can focus your time and energy on
 *  analyzing results and solving your specific
 *
 * \sa BatchClient::describeSchedulingPolicies
 */

/*!
 * Constructs a DescribeSchedulingPoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSchedulingPoliciesResponse::DescribeSchedulingPoliciesResponse(
        const DescribeSchedulingPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new DescribeSchedulingPoliciesResponsePrivate(this), parent)
{
    setRequest(new DescribeSchedulingPoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSchedulingPoliciesRequest * DescribeSchedulingPoliciesResponse::request() const
{
    Q_D(const DescribeSchedulingPoliciesResponse);
    return static_cast<const DescribeSchedulingPoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Batch DescribeSchedulingPolicies \a response.
 */
void DescribeSchedulingPoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSchedulingPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Batch::DescribeSchedulingPoliciesResponsePrivate
 * \brief The DescribeSchedulingPoliciesResponsePrivate class provides private implementation for DescribeSchedulingPoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a DescribeSchedulingPoliciesResponsePrivate object with public implementation \a q.
 */
DescribeSchedulingPoliciesResponsePrivate::DescribeSchedulingPoliciesResponsePrivate(
    DescribeSchedulingPoliciesResponse * const q) : BatchResponsePrivate(q)
{

}

/*!
 * Parses a Batch DescribeSchedulingPolicies response element from \a xml.
 */
void DescribeSchedulingPoliciesResponsePrivate::parseDescribeSchedulingPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSchedulingPoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Batch
} // namespace QtAws
