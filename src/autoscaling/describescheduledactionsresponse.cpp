// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describescheduledactionsresponse.h"
#include "describescheduledactionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeScheduledActionsResponse
 * \brief The DescribeScheduledActionsResponse class provides an interace for AutoScaling DescribeScheduledActions responses.
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
 * \sa AutoScalingClient::describeScheduledActions
 */

/*!
 * Constructs a DescribeScheduledActionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeScheduledActionsResponse::DescribeScheduledActionsResponse(
        const DescribeScheduledActionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeScheduledActionsResponsePrivate(this), parent)
{
    setRequest(new DescribeScheduledActionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeScheduledActionsRequest * DescribeScheduledActionsResponse::request() const
{
    Q_D(const DescribeScheduledActionsResponse);
    return static_cast<const DescribeScheduledActionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribeScheduledActions \a response.
 */
void DescribeScheduledActionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeScheduledActionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribeScheduledActionsResponsePrivate
 * \brief The DescribeScheduledActionsResponsePrivate class provides private implementation for DescribeScheduledActionsResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeScheduledActionsResponsePrivate object with public implementation \a q.
 */
DescribeScheduledActionsResponsePrivate::DescribeScheduledActionsResponsePrivate(
    DescribeScheduledActionsResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribeScheduledActions response element from \a xml.
 */
void DescribeScheduledActionsResponsePrivate::parseDescribeScheduledActionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScheduledActionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
