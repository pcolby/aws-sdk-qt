// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describescalingprocesstypesresponse.h"
#include "describescalingprocesstypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeScalingProcessTypesResponse
 * \brief The DescribeScalingProcessTypesResponse class provides an interace for AutoScaling DescribeScalingProcessTypes responses.
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
 * \sa AutoScalingClient::describeScalingProcessTypes
 */

/*!
 * Constructs a DescribeScalingProcessTypesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeScalingProcessTypesResponse::DescribeScalingProcessTypesResponse(
        const DescribeScalingProcessTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeScalingProcessTypesResponsePrivate(this), parent)
{
    setRequest(new DescribeScalingProcessTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeScalingProcessTypesRequest * DescribeScalingProcessTypesResponse::request() const
{
    Q_D(const DescribeScalingProcessTypesResponse);
    return static_cast<const DescribeScalingProcessTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribeScalingProcessTypes \a response.
 */
void DescribeScalingProcessTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeScalingProcessTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribeScalingProcessTypesResponsePrivate
 * \brief The DescribeScalingProcessTypesResponsePrivate class provides private implementation for DescribeScalingProcessTypesResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeScalingProcessTypesResponsePrivate object with public implementation \a q.
 */
DescribeScalingProcessTypesResponsePrivate::DescribeScalingProcessTypesResponsePrivate(
    DescribeScalingProcessTypesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribeScalingProcessTypes response element from \a xml.
 */
void DescribeScalingProcessTypesResponsePrivate::parseDescribeScalingProcessTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScalingProcessTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
