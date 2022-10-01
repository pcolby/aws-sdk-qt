// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeinstancerefreshesresponse.h"
#include "describeinstancerefreshesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeInstanceRefreshesResponse
 * \brief The DescribeInstanceRefreshesResponse class provides an interace for AutoScaling DescribeInstanceRefreshes responses.
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
 * \sa AutoScalingClient::describeInstanceRefreshes
 */

/*!
 * Constructs a DescribeInstanceRefreshesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeInstanceRefreshesResponse::DescribeInstanceRefreshesResponse(
        const DescribeInstanceRefreshesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeInstanceRefreshesResponsePrivate(this), parent)
{
    setRequest(new DescribeInstanceRefreshesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeInstanceRefreshesRequest * DescribeInstanceRefreshesResponse::request() const
{
    Q_D(const DescribeInstanceRefreshesResponse);
    return static_cast<const DescribeInstanceRefreshesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribeInstanceRefreshes \a response.
 */
void DescribeInstanceRefreshesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeInstanceRefreshesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribeInstanceRefreshesResponsePrivate
 * \brief The DescribeInstanceRefreshesResponsePrivate class provides private implementation for DescribeInstanceRefreshesResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeInstanceRefreshesResponsePrivate object with public implementation \a q.
 */
DescribeInstanceRefreshesResponsePrivate::DescribeInstanceRefreshesResponsePrivate(
    DescribeInstanceRefreshesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribeInstanceRefreshes response element from \a xml.
 */
void DescribeInstanceRefreshesResponsePrivate::parseDescribeInstanceRefreshesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInstanceRefreshesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
