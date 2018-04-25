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

#include "attachloadbalancersresponse.h"
#include "attachloadbalancersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::AttachLoadBalancersResponse
 * \brief The AttachLoadBalancersResponse class provides an interace for AutoScaling AttachLoadBalancers responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::attachLoadBalancers
 */

/*!
 * Constructs a AttachLoadBalancersResponse object for \a reply to \a request, with parent \a parent.
 */
AttachLoadBalancersResponse::AttachLoadBalancersResponse(
        const AttachLoadBalancersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new AttachLoadBalancersResponsePrivate(this), parent)
{
    setRequest(new AttachLoadBalancersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AttachLoadBalancersRequest * AttachLoadBalancersResponse::request() const
{
    Q_D(const AttachLoadBalancersResponse);
    return static_cast<const AttachLoadBalancersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling AttachLoadBalancers \a response.
 */
void AttachLoadBalancersResponse::parseSuccess(QIODevice &response)
{
    Q_D(AttachLoadBalancersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::AttachLoadBalancersResponsePrivate
 * \brief The AttachLoadBalancersResponsePrivate class provides private implementation for AttachLoadBalancersResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a AttachLoadBalancersResponsePrivate object with public implementation \a q.
 */
AttachLoadBalancersResponsePrivate::AttachLoadBalancersResponsePrivate(
    AttachLoadBalancersResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling AttachLoadBalancers response element from \a xml.
 */
void AttachLoadBalancersResponsePrivate::parseAttachLoadBalancersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachLoadBalancersResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
