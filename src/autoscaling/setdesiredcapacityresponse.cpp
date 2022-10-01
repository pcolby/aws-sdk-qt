// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setdesiredcapacityresponse.h"
#include "setdesiredcapacityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::SetDesiredCapacityResponse
 * \brief The SetDesiredCapacityResponse class provides an interace for AutoScaling SetDesiredCapacity responses.
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
 * \sa AutoScalingClient::setDesiredCapacity
 */

/*!
 * Constructs a SetDesiredCapacityResponse object for \a reply to \a request, with parent \a parent.
 */
SetDesiredCapacityResponse::SetDesiredCapacityResponse(
        const SetDesiredCapacityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new SetDesiredCapacityResponsePrivate(this), parent)
{
    setRequest(new SetDesiredCapacityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetDesiredCapacityRequest * SetDesiredCapacityResponse::request() const
{
    Q_D(const SetDesiredCapacityResponse);
    return static_cast<const SetDesiredCapacityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling SetDesiredCapacity \a response.
 */
void SetDesiredCapacityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetDesiredCapacityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::SetDesiredCapacityResponsePrivate
 * \brief The SetDesiredCapacityResponsePrivate class provides private implementation for SetDesiredCapacityResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a SetDesiredCapacityResponsePrivate object with public implementation \a q.
 */
SetDesiredCapacityResponsePrivate::SetDesiredCapacityResponsePrivate(
    SetDesiredCapacityResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling SetDesiredCapacity response element from \a xml.
 */
void SetDesiredCapacityResponsePrivate::parseSetDesiredCapacityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetDesiredCapacityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
