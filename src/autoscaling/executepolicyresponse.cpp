// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "executepolicyresponse.h"
#include "executepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::ExecutePolicyResponse
 * \brief The ExecutePolicyResponse class provides an interace for AutoScaling ExecutePolicy responses.
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
 * \sa AutoScalingClient::executePolicy
 */

/*!
 * Constructs a ExecutePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
ExecutePolicyResponse::ExecutePolicyResponse(
        const ExecutePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new ExecutePolicyResponsePrivate(this), parent)
{
    setRequest(new ExecutePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExecutePolicyRequest * ExecutePolicyResponse::request() const
{
    Q_D(const ExecutePolicyResponse);
    return static_cast<const ExecutePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling ExecutePolicy \a response.
 */
void ExecutePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExecutePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::ExecutePolicyResponsePrivate
 * \brief The ExecutePolicyResponsePrivate class provides private implementation for ExecutePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a ExecutePolicyResponsePrivate object with public implementation \a q.
 */
ExecutePolicyResponsePrivate::ExecutePolicyResponsePrivate(
    ExecutePolicyResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling ExecutePolicy response element from \a xml.
 */
void ExecutePolicyResponsePrivate::parseExecutePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExecutePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
