// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
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
    //Q_D(AttachLoadBalancersResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
