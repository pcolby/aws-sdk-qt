// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcanaryresponse.h"
#include "getcanaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Synthetics {

/*!
 * \class QtAws::Synthetics::GetCanaryResponse
 * \brief The GetCanaryResponse class provides an interace for Synthetics GetCanary responses.
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
 * \sa SyntheticsClient::getCanary
 */

/*!
 * Constructs a GetCanaryResponse object for \a reply to \a request, with parent \a parent.
 */
GetCanaryResponse::GetCanaryResponse(
        const GetCanaryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SyntheticsResponse(new GetCanaryResponsePrivate(this), parent)
{
    setRequest(new GetCanaryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCanaryRequest * GetCanaryResponse::request() const
{
    Q_D(const GetCanaryResponse);
    return static_cast<const GetCanaryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Synthetics GetCanary \a response.
 */
void GetCanaryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCanaryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Synthetics::GetCanaryResponsePrivate
 * \brief The GetCanaryResponsePrivate class provides private implementation for GetCanaryResponse.
 * \internal
 *
 * \inmodule QtAwsSynthetics
 */

/*!
 * Constructs a GetCanaryResponsePrivate object with public implementation \a q.
 */
GetCanaryResponsePrivate::GetCanaryResponsePrivate(
    GetCanaryResponse * const q) : SyntheticsResponsePrivate(q)
{

}

/*!
 * Parses a Synthetics GetCanary response element from \a xml.
 */
void GetCanaryResponsePrivate::parseGetCanaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCanaryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Synthetics
} // namespace QtAws
