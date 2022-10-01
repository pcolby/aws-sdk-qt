// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describewarmpoolresponse.h"
#include "describewarmpoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeWarmPoolResponse
 * \brief The DescribeWarmPoolResponse class provides an interace for AutoScaling DescribeWarmPool responses.
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
 * \sa AutoScalingClient::describeWarmPool
 */

/*!
 * Constructs a DescribeWarmPoolResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWarmPoolResponse::DescribeWarmPoolResponse(
        const DescribeWarmPoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeWarmPoolResponsePrivate(this), parent)
{
    setRequest(new DescribeWarmPoolRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWarmPoolRequest * DescribeWarmPoolResponse::request() const
{
    Q_D(const DescribeWarmPoolResponse);
    return static_cast<const DescribeWarmPoolRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribeWarmPool \a response.
 */
void DescribeWarmPoolResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWarmPoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribeWarmPoolResponsePrivate
 * \brief The DescribeWarmPoolResponsePrivate class provides private implementation for DescribeWarmPoolResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeWarmPoolResponsePrivate object with public implementation \a q.
 */
DescribeWarmPoolResponsePrivate::DescribeWarmPoolResponsePrivate(
    DescribeWarmPoolResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribeWarmPool response element from \a xml.
 */
void DescribeWarmPoolResponsePrivate::parseDescribeWarmPoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWarmPoolResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
