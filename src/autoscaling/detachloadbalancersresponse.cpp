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

#include "detachloadbalancersresponse.h"
#include "detachloadbalancersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DetachLoadBalancersResponse
 * \brief The DetachLoadBalancersResponse class provides an interace for AutoScaling DetachLoadBalancers responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::detachLoadBalancers
 */

/*!
 * Constructs a DetachLoadBalancersResponse object for \a reply to \a request, with parent \a parent.
 */
DetachLoadBalancersResponse::DetachLoadBalancersResponse(
        const DetachLoadBalancersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DetachLoadBalancersResponsePrivate(this), parent)
{
    setRequest(new DetachLoadBalancersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetachLoadBalancersRequest * DetachLoadBalancersResponse::request() const
{
    Q_D(const DetachLoadBalancersResponse);
    return static_cast<const DetachLoadBalancersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DetachLoadBalancers \a response.
 */
void DetachLoadBalancersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetachLoadBalancersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DetachLoadBalancersResponsePrivate
 * \brief The DetachLoadBalancersResponsePrivate class provides private implementation for DetachLoadBalancersResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DetachLoadBalancersResponsePrivate object with public implementation \a q.
 */
DetachLoadBalancersResponsePrivate::DetachLoadBalancersResponsePrivate(
    DetachLoadBalancersResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DetachLoadBalancers response element from \a xml.
 */
void DetachLoadBalancersResponsePrivate::parseDetachLoadBalancersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachLoadBalancersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
