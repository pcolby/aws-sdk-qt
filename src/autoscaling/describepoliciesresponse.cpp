/*
    Copyright 2013-2021 Paul Colby

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

#include "describepoliciesresponse.h"
#include "describepoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribePoliciesResponse
 * \brief The DescribePoliciesResponse class provides an interace for AutoScaling DescribePolicies responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information about Amazon EC2 Auto Scaling, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">Amazon EC2 Auto
 *  Scaling User Guide</a>. For information about granting IAM users required permissions for calls to Amazon EC2 Auto
 *  Scaling, see <a
 *  href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/ec2-auto-scaling-api-permissions.html">Granting IAM users
 *  required permissions for Amazon EC2 Auto Scaling resources</a> in the <i>Amazon EC2 Auto Scaling API
 *
 * \sa AutoScalingClient::describePolicies
 */

/*!
 * Constructs a DescribePoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePoliciesResponse::DescribePoliciesResponse(
        const DescribePoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribePoliciesResponsePrivate(this), parent)
{
    setRequest(new DescribePoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePoliciesRequest * DescribePoliciesResponse::request() const
{
    return static_cast<const DescribePoliciesRequest *>(AutoScalingResponse::request());
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribePolicies \a response.
 */
void DescribePoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribePoliciesResponsePrivate
 * \brief The DescribePoliciesResponsePrivate class provides private implementation for DescribePoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribePoliciesResponsePrivate object with public implementation \a q.
 */
DescribePoliciesResponsePrivate::DescribePoliciesResponsePrivate(
    DescribePoliciesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribePolicies response element from \a xml.
 */
void DescribePoliciesResponsePrivate::parseDescribePoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
