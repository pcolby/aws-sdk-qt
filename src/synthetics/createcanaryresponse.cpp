// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcanaryresponse.h"
#include "createcanaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Synthetics {

/*!
 * \class QtAws::Synthetics::CreateCanaryResponse
 * \brief The CreateCanaryResponse class provides an interace for Synthetics CreateCanary responses.
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
 * \sa SyntheticsClient::createCanary
 */

/*!
 * Constructs a CreateCanaryResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCanaryResponse::CreateCanaryResponse(
        const CreateCanaryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SyntheticsResponse(new CreateCanaryResponsePrivate(this), parent)
{
    setRequest(new CreateCanaryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCanaryRequest * CreateCanaryResponse::request() const
{
    Q_D(const CreateCanaryResponse);
    return static_cast<const CreateCanaryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Synthetics CreateCanary \a response.
 */
void CreateCanaryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCanaryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Synthetics::CreateCanaryResponsePrivate
 * \brief The CreateCanaryResponsePrivate class provides private implementation for CreateCanaryResponse.
 * \internal
 *
 * \inmodule QtAwsSynthetics
 */

/*!
 * Constructs a CreateCanaryResponsePrivate object with public implementation \a q.
 */
CreateCanaryResponsePrivate::CreateCanaryResponsePrivate(
    CreateCanaryResponse * const q) : SyntheticsResponsePrivate(q)
{

}

/*!
 * Parses a Synthetics CreateCanary response element from \a xml.
 */
void CreateCanaryResponsePrivate::parseCreateCanaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCanaryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Synthetics
} // namespace QtAws
