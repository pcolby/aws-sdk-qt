// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describejobsresponse.h"
#include "describejobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::DescribeJobsResponse
 * \brief The DescribeJobsResponse class provides an interace for Batch DescribeJobs responses.
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
 * \sa BatchClient::describeJobs
 */

/*!
 * Constructs a DescribeJobsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeJobsResponse::DescribeJobsResponse(
        const DescribeJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new DescribeJobsResponsePrivate(this), parent)
{
    setRequest(new DescribeJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeJobsRequest * DescribeJobsResponse::request() const
{
    Q_D(const DescribeJobsResponse);
    return static_cast<const DescribeJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Batch DescribeJobs \a response.
 */
void DescribeJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Batch::DescribeJobsResponsePrivate
 * \brief The DescribeJobsResponsePrivate class provides private implementation for DescribeJobsResponse.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a DescribeJobsResponsePrivate object with public implementation \a q.
 */
DescribeJobsResponsePrivate::DescribeJobsResponsePrivate(
    DescribeJobsResponse * const q) : BatchResponsePrivate(q)
{

}

/*!
 * Parses a Batch DescribeJobs response element from \a xml.
 */
void DescribeJobsResponsePrivate::parseDescribeJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Batch
} // namespace QtAws
