// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startcanaryresponse.h"
#include "startcanaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Synthetics {

/*!
 * \class QtAws::Synthetics::StartCanaryResponse
 * \brief The StartCanaryResponse class provides an interace for Synthetics StartCanary responses.
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
 * \sa SyntheticsClient::startCanary
 */

/*!
 * Constructs a StartCanaryResponse object for \a reply to \a request, with parent \a parent.
 */
StartCanaryResponse::StartCanaryResponse(
        const StartCanaryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SyntheticsResponse(new StartCanaryResponsePrivate(this), parent)
{
    setRequest(new StartCanaryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartCanaryRequest * StartCanaryResponse::request() const
{
    Q_D(const StartCanaryResponse);
    return static_cast<const StartCanaryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Synthetics StartCanary \a response.
 */
void StartCanaryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartCanaryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Synthetics::StartCanaryResponsePrivate
 * \brief The StartCanaryResponsePrivate class provides private implementation for StartCanaryResponse.
 * \internal
 *
 * \inmodule QtAwsSynthetics
 */

/*!
 * Constructs a StartCanaryResponsePrivate object with public implementation \a q.
 */
StartCanaryResponsePrivate::StartCanaryResponsePrivate(
    StartCanaryResponse * const q) : SyntheticsResponsePrivate(q)
{

}

/*!
 * Parses a Synthetics StartCanary response element from \a xml.
 */
void StartCanaryResponsePrivate::parseStartCanaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartCanaryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Synthetics
} // namespace QtAws
