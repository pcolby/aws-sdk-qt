// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
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
    Q_D(const DescribePoliciesResponse);
    return static_cast<const DescribePoliciesRequest *>(d->request);
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
