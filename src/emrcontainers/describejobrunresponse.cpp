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

#include "describejobrunresponse.h"
#include "describejobrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMRContainers {

/*!
 * \class QtAws::EMRContainers::DescribeJobRunResponse
 * \brief The DescribeJobRunResponse class provides an interace for EMRContainers DescribeJobRun responses.
 *
 * \inmodule QtAwsEMRContainers
 *
 *  Amazon EMR on EKS provides a deployment option for Amazon EMR that allows you to run open-source big data frameworks on
 *  Amazon Elastic Kubernetes Service (Amazon EKS). With this deployment option, you can focus on running analytics
 *  workloads while Amazon EMR on EKS builds, configures, and manages containers for open-source applications. For more
 *  information about Amazon EMR on EKS concepts and tasks, see <a
 *  href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/emr-eks.html">What is Amazon EMR on
 * 
 *  EKS</a>>
 * 
 *  <i>Amazon EMR containers</i> is the API name for Amazon EMR on EKS. The <code>emr-containers</code> prefix is used in
 *  the following scenarios:
 * 
 *  </p <ul> <li>
 * 
 *  It is the prefix in the CLI commands for Amazon EMR on EKS. For example, <code>aws emr-containers
 * 
 *  start-job-run</code>> </li> <li>
 * 
 *  It is the prefix before IAM policy actions for Amazon EMR on EKS. For example, <code>"Action": [
 *  "emr-containers:StartJobRun"]</code>. For more information, see <a
 *  href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-actions">Policy
 *  actions for Amazon EMR on
 * 
 *  EKS</a>> </li> <li>
 * 
 *  It is the prefix used in Amazon EMR on EKS service endpoints. For example,
 *  <code>emr-containers.us-east-2.amazonaws.com</code>. For more information, see <a
 *  href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/service-quotas.html#service-endpoints">Amazon
 *  EMR on EKS Service
 *
 * \sa EMRContainersClient::describeJobRun
 */

/*!
 * Constructs a DescribeJobRunResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeJobRunResponse::DescribeJobRunResponse(
        const DescribeJobRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRContainersResponse(new DescribeJobRunResponsePrivate(this), parent)
{
    setRequest(new DescribeJobRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeJobRunRequest * DescribeJobRunResponse::request() const
{
    Q_D(const DescribeJobRunResponse);
    return static_cast<const DescribeJobRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EMRContainers DescribeJobRun \a response.
 */
void DescribeJobRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeJobRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMRContainers::DescribeJobRunResponsePrivate
 * \brief The DescribeJobRunResponsePrivate class provides private implementation for DescribeJobRunResponse.
 * \internal
 *
 * \inmodule QtAwsEMRContainers
 */

/*!
 * Constructs a DescribeJobRunResponsePrivate object with public implementation \a q.
 */
DescribeJobRunResponsePrivate::DescribeJobRunResponsePrivate(
    DescribeJobRunResponse * const q) : EMRContainersResponsePrivate(q)
{

}

/*!
 * Parses a EMRContainers DescribeJobRun response element from \a xml.
 */
void DescribeJobRunResponsePrivate::parseDescribeJobRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeJobRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EMRContainers
} // namespace QtAws
