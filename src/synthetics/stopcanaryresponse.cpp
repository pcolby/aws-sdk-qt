// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopcanaryresponse.h"
#include "stopcanaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Synthetics {

/*!
 * \class QtAws::Synthetics::StopCanaryResponse
 * \brief The StopCanaryResponse class provides an interace for Synthetics StopCanary responses.
 *
 * \inmodule QtAwsSynthetics
 *
 *  <fullname>Amazon CloudWatch Synthetics</fullname>
 * 
 *  You can use Amazon CloudWatch Synthetics to continually monitor your services. You can create and manage
 *  <i>canaries</i>, which are modular, lightweight scripts that monitor your endpoints and APIs from the outside-in. You
 *  can set up your canaries to run 24 hours a day, once per minute. The canaries help you check the availability and
 *  latency of your web services and troubleshoot anomalies by investigating load time data, screenshots of the UI, logs,
 *  and metrics. The canaries seamlessly integrate with CloudWatch ServiceLens to help you trace the causes of impacted
 *  nodes in your applications. For more information, see <a
 *  href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ServiceLens.html">Using ServiceLens to Monitor the
 *  Health of Your Applications</a> in the <i>Amazon CloudWatch User
 * 
 *  Guide</i>>
 * 
 *  Before you create and manage canaries, be aware of the security considerations. For more information, see <a
 *  href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/servicelens_canaries_security.html">Security
 *  Considerations for Synthetics
 *
 * \sa SyntheticsClient::stopCanary
 */

/*!
 * Constructs a StopCanaryResponse object for \a reply to \a request, with parent \a parent.
 */
StopCanaryResponse::StopCanaryResponse(
        const StopCanaryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SyntheticsResponse(new StopCanaryResponsePrivate(this), parent)
{
    setRequest(new StopCanaryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopCanaryRequest * StopCanaryResponse::request() const
{
    Q_D(const StopCanaryResponse);
    return static_cast<const StopCanaryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Synthetics StopCanary \a response.
 */
void StopCanaryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopCanaryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Synthetics::StopCanaryResponsePrivate
 * \brief The StopCanaryResponsePrivate class provides private implementation for StopCanaryResponse.
 * \internal
 *
 * \inmodule QtAwsSynthetics
 */

/*!
 * Constructs a StopCanaryResponsePrivate object with public implementation \a q.
 */
StopCanaryResponsePrivate::StopCanaryResponsePrivate(
    StopCanaryResponse * const q) : SyntheticsResponsePrivate(q)
{

}

/*!
 * Parses a Synthetics StopCanary response element from \a xml.
 */
void StopCanaryResponsePrivate::parseStopCanaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopCanaryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Synthetics
} // namespace QtAws
