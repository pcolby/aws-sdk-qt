// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const DescribeJobQueuesResponse);
    return static_cast<const DescribeJobQueuesRequest *>(d->request);
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
