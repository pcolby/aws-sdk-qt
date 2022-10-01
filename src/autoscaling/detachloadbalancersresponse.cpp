// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
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
