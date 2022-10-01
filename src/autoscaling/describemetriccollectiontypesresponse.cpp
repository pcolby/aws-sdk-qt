// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemetriccollectiontypesresponse.h"
#include "describemetriccollectiontypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeMetricCollectionTypesResponse
 * \brief The DescribeMetricCollectionTypesResponse class provides an interace for AutoScaling DescribeMetricCollectionTypes responses.
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
 * \sa AutoScalingClient::describeMetricCollectionTypes
 */

/*!
 * Constructs a DescribeMetricCollectionTypesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeMetricCollectionTypesResponse::DescribeMetricCollectionTypesResponse(
        const DescribeMetricCollectionTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeMetricCollectionTypesResponsePrivate(this), parent)
{
    setRequest(new DescribeMetricCollectionTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeMetricCollectionTypesRequest * DescribeMetricCollectionTypesResponse::request() const
{
    Q_D(const DescribeMetricCollectionTypesResponse);
    return static_cast<const DescribeMetricCollectionTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribeMetricCollectionTypes \a response.
 */
void DescribeMetricCollectionTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeMetricCollectionTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribeMetricCollectionTypesResponsePrivate
 * \brief The DescribeMetricCollectionTypesResponsePrivate class provides private implementation for DescribeMetricCollectionTypesResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeMetricCollectionTypesResponsePrivate object with public implementation \a q.
 */
DescribeMetricCollectionTypesResponsePrivate::DescribeMetricCollectionTypesResponsePrivate(
    DescribeMetricCollectionTypesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribeMetricCollectionTypes response element from \a xml.
 */
void DescribeMetricCollectionTypesResponsePrivate::parseDescribeMetricCollectionTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMetricCollectionTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
