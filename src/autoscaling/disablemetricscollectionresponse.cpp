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

#include "disablemetricscollectionresponse.h"
#include "disablemetricscollectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DisableMetricsCollectionResponse
 * \brief The DisableMetricsCollectionResponse class provides an interace for AutoScaling DisableMetricsCollection responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service with AWS Auto Scaling, Amazon CloudWatch, and Elastic Load
 * 
 *  Balancing>
 * 
 *  For more information, including information about granting IAM users required permissions for Amazon EC2 Auto Scaling
 *  actions, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">Amazon EC2 Auto
 *  Scaling User
 *
 * \sa AutoScalingClient::disableMetricsCollection
 */

/*!
 * Constructs a DisableMetricsCollectionResponse object for \a reply to \a request, with parent \a parent.
 */
DisableMetricsCollectionResponse::DisableMetricsCollectionResponse(
        const DisableMetricsCollectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DisableMetricsCollectionResponsePrivate(this), parent)
{
    setRequest(new DisableMetricsCollectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisableMetricsCollectionRequest * DisableMetricsCollectionResponse::request() const
{
    Q_D(const DisableMetricsCollectionResponse);
    return static_cast<const DisableMetricsCollectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DisableMetricsCollection \a response.
 */
void DisableMetricsCollectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisableMetricsCollectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DisableMetricsCollectionResponsePrivate
 * \brief The DisableMetricsCollectionResponsePrivate class provides private implementation for DisableMetricsCollectionResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DisableMetricsCollectionResponsePrivate object with public implementation \a q.
 */
DisableMetricsCollectionResponsePrivate::DisableMetricsCollectionResponsePrivate(
    DisableMetricsCollectionResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DisableMetricsCollection response element from \a xml.
 */
void DisableMetricsCollectionResponsePrivate::parseDisableMetricsCollectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableMetricsCollectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
