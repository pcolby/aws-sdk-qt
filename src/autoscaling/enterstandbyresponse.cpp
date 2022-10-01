// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enterstandbyresponse.h"
#include "enterstandbyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::EnterStandbyResponse
 * \brief The EnterStandbyResponse class provides an interace for AutoScaling EnterStandby responses.
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
 * \sa AutoScalingClient::enterStandby
 */

/*!
 * Constructs a EnterStandbyResponse object for \a reply to \a request, with parent \a parent.
 */
EnterStandbyResponse::EnterStandbyResponse(
        const EnterStandbyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new EnterStandbyResponsePrivate(this), parent)
{
    setRequest(new EnterStandbyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnterStandbyRequest * EnterStandbyResponse::request() const
{
    Q_D(const EnterStandbyResponse);
    return static_cast<const EnterStandbyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling EnterStandby \a response.
 */
void EnterStandbyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnterStandbyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::EnterStandbyResponsePrivate
 * \brief The EnterStandbyResponsePrivate class provides private implementation for EnterStandbyResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a EnterStandbyResponsePrivate object with public implementation \a q.
 */
EnterStandbyResponsePrivate::EnterStandbyResponsePrivate(
    EnterStandbyResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling EnterStandby response element from \a xml.
 */
void EnterStandbyResponsePrivate::parseEnterStandbyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnterStandbyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
