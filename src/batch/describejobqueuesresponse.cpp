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

#include "describejobqueuesresponse.h"
#include "describejobqueuesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::DescribeJobQueuesResponse
 * \brief The DescribeJobQueuesResponse class provides an interace for Batch DescribeJobQueues responses.
 *
 * \inmodule QtAwsBatch
 *
 *  Using AWS Batch, you can run batch computing workloads on the AWS Cloud. Batch computing is a common means for
 *  developers, scientists, and engineers to access large amounts of compute resources. AWS Batch uses the advantages of
 *  this computing workload to remove the undifferentiated heavy lifting of configuring and managing required
 *  infrastructure. At the same time, it also adopts a familiar batch computing software approach. Given these advantages,
 *  AWS Batch can help you to efficiently provision resources in response to jobs submitted, thus effectively helping you to
 *  eliminate capacity constraints, reduce compute costs, and deliver your results more
 * 
 *  quickly>
 * 
 *  As a fully managed service, AWS Batch can run batch computing workloads of any scale. AWS Batch automatically provisions
 *  compute resources and optimizes workload distribution based on the quantity and scale of your specific workloads. With
 *  AWS Batch, there's no need to install or manage batch computing software. This means that you can focus your time and
 *  energy on analyzing results and solving your specific
 *
 * \sa BatchClient::describeJobQueues
 */

/*!
 * Constructs a DescribeJobQueuesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeJobQueuesResponse::DescribeJobQueuesResponse(
        const DescribeJobQueuesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new DescribeJobQueuesResponsePrivate(this), parent)
{
    setRequest(new DescribeJobQueuesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeJobQueuesRequest * DescribeJobQueuesResponse::request() const
{
    return static_cast<const DescribeJobQueuesRequest *>(BatchResponse::request());
}

/*!
 * \reimp
 * Parses a successful Batch DescribeJobQueues \a response.
 */
void DescribeJobQueuesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeJobQueuesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Batch::DescribeJobQueuesResponsePrivate
 * \brief The DescribeJobQueuesResponsePrivate class provides private implementation for DescribeJobQueuesResponse.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a DescribeJobQueuesResponsePrivate object with public implementation \a q.
 */
DescribeJobQueuesResponsePrivate::DescribeJobQueuesResponsePrivate(
    DescribeJobQueuesResponse * const q) : BatchResponsePrivate(q)
{

}

/*!
 * Parses a Batch DescribeJobQueues response element from \a xml.
 */
void DescribeJobQueuesResponsePrivate::parseDescribeJobQueuesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeJobQueuesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Batch
} // namespace QtAws
