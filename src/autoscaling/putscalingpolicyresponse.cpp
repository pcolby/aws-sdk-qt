// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putscalingpolicyresponse.h"
#include "putscalingpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::PutScalingPolicyResponse
 * \brief The PutScalingPolicyResponse class provides an interace for AutoScaling PutScalingPolicy responses.
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
 * \sa AutoScalingClient::putScalingPolicy
 */

/*!
 * Constructs a PutScalingPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutScalingPolicyResponse::PutScalingPolicyResponse(
        const PutScalingPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new PutScalingPolicyResponsePrivate(this), parent)
{
    setRequest(new PutScalingPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutScalingPolicyRequest * PutScalingPolicyResponse::request() const
{
    Q_D(const PutScalingPolicyResponse);
    return static_cast<const PutScalingPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling PutScalingPolicy \a response.
 */
void PutScalingPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutScalingPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::PutScalingPolicyResponsePrivate
 * \brief The PutScalingPolicyResponsePrivate class provides private implementation for PutScalingPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a PutScalingPolicyResponsePrivate object with public implementation \a q.
 */
PutScalingPolicyResponsePrivate::PutScalingPolicyResponsePrivate(
    PutScalingPolicyResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling PutScalingPolicy response element from \a xml.
 */
void PutScalingPolicyResponsePrivate::parsePutScalingPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutScalingPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
