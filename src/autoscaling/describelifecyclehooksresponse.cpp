// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelifecyclehooksresponse.h"
#include "describelifecyclehooksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeLifecycleHooksResponse
 * \brief The DescribeLifecycleHooksResponse class provides an interace for AutoScaling DescribeLifecycleHooks responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
 *
 * \sa AutoScalingClient::describeLifecycleHooks
 */

/*!
 * Constructs a DescribeLifecycleHooksResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLifecycleHooksResponse::DescribeLifecycleHooksResponse(
        const DescribeLifecycleHooksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeLifecycleHooksResponsePrivate(this), parent)
{
    setRequest(new DescribeLifecycleHooksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLifecycleHooksRequest * DescribeLifecycleHooksResponse::request() const
{
    Q_D(const DescribeLifecycleHooksResponse);
    return static_cast<const DescribeLifecycleHooksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribeLifecycleHooks \a response.
 */
void DescribeLifecycleHooksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLifecycleHooksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribeLifecycleHooksResponsePrivate
 * \brief The DescribeLifecycleHooksResponsePrivate class provides private implementation for DescribeLifecycleHooksResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeLifecycleHooksResponsePrivate object with public implementation \a q.
 */
DescribeLifecycleHooksResponsePrivate::DescribeLifecycleHooksResponsePrivate(
    DescribeLifecycleHooksResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribeLifecycleHooks response element from \a xml.
 */
void DescribeLifecycleHooksResponsePrivate::parseDescribeLifecycleHooksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLifecycleHooksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
