// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelifecyclehooktypesresponse.h"
#include "describelifecyclehooktypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeLifecycleHookTypesResponse
 * \brief The DescribeLifecycleHookTypesResponse class provides an interace for AutoScaling DescribeLifecycleHookTypes responses.
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
 * \sa AutoScalingClient::describeLifecycleHookTypes
 */

/*!
 * Constructs a DescribeLifecycleHookTypesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLifecycleHookTypesResponse::DescribeLifecycleHookTypesResponse(
        const DescribeLifecycleHookTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeLifecycleHookTypesResponsePrivate(this), parent)
{
    setRequest(new DescribeLifecycleHookTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLifecycleHookTypesRequest * DescribeLifecycleHookTypesResponse::request() const
{
    Q_D(const DescribeLifecycleHookTypesResponse);
    return static_cast<const DescribeLifecycleHookTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribeLifecycleHookTypes \a response.
 */
void DescribeLifecycleHookTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLifecycleHookTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribeLifecycleHookTypesResponsePrivate
 * \brief The DescribeLifecycleHookTypesResponsePrivate class provides private implementation for DescribeLifecycleHookTypesResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeLifecycleHookTypesResponsePrivate object with public implementation \a q.
 */
DescribeLifecycleHookTypesResponsePrivate::DescribeLifecycleHookTypesResponsePrivate(
    DescribeLifecycleHookTypesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribeLifecycleHookTypes response element from \a xml.
 */
void DescribeLifecycleHookTypesResponsePrivate::parseDescribeLifecycleHookTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLifecycleHookTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
