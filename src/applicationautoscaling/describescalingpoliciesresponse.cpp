// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describescalingpoliciesresponse.h"
#include "describescalingpoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationAutoScaling {

/*!
 * \class QtAws::ApplicationAutoScaling::DescribeScalingPoliciesResponse
 * \brief The DescribeScalingPoliciesResponse class provides an interace for ApplicationAutoScaling DescribeScalingPolicies responses.
 *
 * \inmodule QtAwsApplicationAutoScaling
 *
 *  With Application Auto Scaling, you can configure automatic scaling for the following
 * 
 *  resources> <ul> <li>
 * 
 *  Amazon AppStream 2.0
 * 
 *  fleet> </li> <li>
 * 
 *  Amazon Aurora
 * 
 *  Replica> </li> <li>
 * 
 *  Amazon Comprehend document classification and entity recognizer
 * 
 *  endpoint> </li> <li>
 * 
 *  Amazon DynamoDB tables and global secondary indexes throughput
 * 
 *  capacit> </li> <li>
 * 
 *  Amazon ECS
 * 
 *  service> </li> <li>
 * 
 *  Amazon ElastiCache for Redis clusters (replication
 * 
 *  groups> </li> <li>
 * 
 *  Amazon EMR
 * 
 *  cluster> </li> <li>
 * 
 *  Amazon Keyspaces (for Apache Cassandra)
 * 
 *  table> </li> <li>
 * 
 *  Lambda function provisioned
 * 
 *  concurrenc> </li> <li>
 * 
 *  Amazon Managed Streaming for Apache Kafka broker
 * 
 *  storag> </li> <li>
 * 
 *  Amazon Neptune
 * 
 *  cluster> </li> <li>
 * 
 *  Amazon SageMaker endpoint
 * 
 *  variant> </li> <li>
 * 
 *  Spot Fleets (Amazon
 * 
 *  EC2> </li> <li>
 * 
 *  Custom resources provided by your own applications or
 * 
 *  service> </li> </ul>
 * 
 *  <b>API Summary</b>
 * 
 *  </p
 * 
 *  The Application Auto Scaling service API includes three key sets of actions:
 * 
 *  </p <ul> <li>
 * 
 *  Register and manage scalable targets - Register Amazon Web Services or custom resources as scalable targets (a resource
 *  that Application Auto Scaling can scale), set minimum and maximum capacity limits, and retrieve information on existing
 *  scalable
 * 
 *  targets> </li> <li>
 * 
 *  Configure and manage automatic scaling - Define scaling policies to dynamically scale your resources in response to
 *  CloudWatch alarms, schedule one-time or recurring scaling actions, and retrieve your recent scaling activity
 * 
 *  history> </li> <li>
 * 
 *  Suspend and resume scaling - Temporarily suspend and later resume automatic scaling by calling the <a
 *  href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_RegisterScalableTarget.html">RegisterScalableTarget</a>
 *  API action for any Application Auto Scaling scalable target. You can suspend and resume (individually or in combination)
 *  scale-out activities that are triggered by a scaling policy, scale-in activities that are triggered by a scaling policy,
 *  and scheduled
 * 
 *  scaling> </li> </ul>
 * 
 *  To learn more about Application Auto Scaling, including information about granting IAM users required permissions for
 *  Application Auto Scaling actions, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/application/userguide/what-is-application-auto-scaling.html">Application
 *  Auto Scaling User
 *
 * \sa ApplicationAutoScalingClient::describeScalingPolicies
 */

/*!
 * Constructs a DescribeScalingPoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeScalingPoliciesResponse::DescribeScalingPoliciesResponse(
        const DescribeScalingPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationAutoScalingResponse(new DescribeScalingPoliciesResponsePrivate(this), parent)
{
    setRequest(new DescribeScalingPoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeScalingPoliciesRequest * DescribeScalingPoliciesResponse::request() const
{
    Q_D(const DescribeScalingPoliciesResponse);
    return static_cast<const DescribeScalingPoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationAutoScaling DescribeScalingPolicies \a response.
 */
void DescribeScalingPoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeScalingPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationAutoScaling::DescribeScalingPoliciesResponsePrivate
 * \brief The DescribeScalingPoliciesResponsePrivate class provides private implementation for DescribeScalingPoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationAutoScaling
 */

/*!
 * Constructs a DescribeScalingPoliciesResponsePrivate object with public implementation \a q.
 */
DescribeScalingPoliciesResponsePrivate::DescribeScalingPoliciesResponsePrivate(
    DescribeScalingPoliciesResponse * const q) : ApplicationAutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationAutoScaling DescribeScalingPolicies response element from \a xml.
 */
void DescribeScalingPoliciesResponsePrivate::parseDescribeScalingPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScalingPoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationAutoScaling
} // namespace QtAws
