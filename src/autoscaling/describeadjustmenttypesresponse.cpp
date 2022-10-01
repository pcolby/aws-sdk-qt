// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeadjustmenttypesresponse.h"
#include "describeadjustmenttypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeAdjustmentTypesResponse
 * \brief The DescribeAdjustmentTypesResponse class provides an interace for AutoScaling DescribeAdjustmentTypes responses.
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
 * \sa AutoScalingClient::describeAdjustmentTypes
 */

/*!
 * Constructs a DescribeAdjustmentTypesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAdjustmentTypesResponse::DescribeAdjustmentTypesResponse(
        const DescribeAdjustmentTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeAdjustmentTypesResponsePrivate(this), parent)
{
    setRequest(new DescribeAdjustmentTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAdjustmentTypesRequest * DescribeAdjustmentTypesResponse::request() const
{
    Q_D(const DescribeAdjustmentTypesResponse);
    return static_cast<const DescribeAdjustmentTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribeAdjustmentTypes \a response.
 */
void DescribeAdjustmentTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAdjustmentTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribeAdjustmentTypesResponsePrivate
 * \brief The DescribeAdjustmentTypesResponsePrivate class provides private implementation for DescribeAdjustmentTypesResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeAdjustmentTypesResponsePrivate object with public implementation \a q.
 */
DescribeAdjustmentTypesResponsePrivate::DescribeAdjustmentTypesResponsePrivate(
    DescribeAdjustmentTypesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribeAdjustmentTypes response element from \a xml.
 */
void DescribeAdjustmentTypesResponsePrivate::parseDescribeAdjustmentTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAdjustmentTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
