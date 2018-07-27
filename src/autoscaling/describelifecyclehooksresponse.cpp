/*
    Copyright 2013-2018 Paul Colby

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
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
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
