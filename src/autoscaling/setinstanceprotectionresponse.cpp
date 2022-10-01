// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setinstanceprotectionresponse.h"
#include "setinstanceprotectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::SetInstanceProtectionResponse
 * \brief The SetInstanceProtectionResponse class provides an interace for AutoScaling SetInstanceProtection responses.
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
 * \sa AutoScalingClient::setInstanceProtection
 */

/*!
 * Constructs a SetInstanceProtectionResponse object for \a reply to \a request, with parent \a parent.
 */
SetInstanceProtectionResponse::SetInstanceProtectionResponse(
        const SetInstanceProtectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new SetInstanceProtectionResponsePrivate(this), parent)
{
    setRequest(new SetInstanceProtectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetInstanceProtectionRequest * SetInstanceProtectionResponse::request() const
{
    Q_D(const SetInstanceProtectionResponse);
    return static_cast<const SetInstanceProtectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling SetInstanceProtection \a response.
 */
void SetInstanceProtectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetInstanceProtectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::SetInstanceProtectionResponsePrivate
 * \brief The SetInstanceProtectionResponsePrivate class provides private implementation for SetInstanceProtectionResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a SetInstanceProtectionResponsePrivate object with public implementation \a q.
 */
SetInstanceProtectionResponsePrivate::SetInstanceProtectionResponsePrivate(
    SetInstanceProtectionResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling SetInstanceProtection response element from \a xml.
 */
void SetInstanceProtectionResponsePrivate::parseSetInstanceProtectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetInstanceProtectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
