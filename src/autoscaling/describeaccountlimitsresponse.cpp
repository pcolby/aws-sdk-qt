// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeaccountlimitsresponse.h"
#include "describeaccountlimitsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeAccountLimitsResponse
 * \brief The DescribeAccountLimitsResponse class provides an interace for AutoScaling DescribeAccountLimits responses.
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
 * \sa AutoScalingClient::describeAccountLimits
 */

/*!
 * Constructs a DescribeAccountLimitsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAccountLimitsResponse::DescribeAccountLimitsResponse(
        const DescribeAccountLimitsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeAccountLimitsResponsePrivate(this), parent)
{
    setRequest(new DescribeAccountLimitsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAccountLimitsRequest * DescribeAccountLimitsResponse::request() const
{
    Q_D(const DescribeAccountLimitsResponse);
    return static_cast<const DescribeAccountLimitsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribeAccountLimits \a response.
 */
void DescribeAccountLimitsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAccountLimitsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribeAccountLimitsResponsePrivate
 * \brief The DescribeAccountLimitsResponsePrivate class provides private implementation for DescribeAccountLimitsResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeAccountLimitsResponsePrivate object with public implementation \a q.
 */
DescribeAccountLimitsResponsePrivate::DescribeAccountLimitsResponsePrivate(
    DescribeAccountLimitsResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribeAccountLimits response element from \a xml.
 */
void DescribeAccountLimitsResponsePrivate::parseDescribeAccountLimitsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccountLimitsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
