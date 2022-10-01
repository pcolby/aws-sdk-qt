// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateresourceresponse.h"
#include "associateresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Synthetics {

/*!
 * \class QtAws::Synthetics::AssociateResourceResponse
 * \brief The AssociateResourceResponse class provides an interace for Synthetics AssociateResource responses.
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
 * \sa SyntheticsClient::associateResource
 */

/*!
 * Constructs a AssociateResourceResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateResourceResponse::AssociateResourceResponse(
        const AssociateResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SyntheticsResponse(new AssociateResourceResponsePrivate(this), parent)
{
    setRequest(new AssociateResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateResourceRequest * AssociateResourceResponse::request() const
{
    Q_D(const AssociateResourceResponse);
    return static_cast<const AssociateResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Synthetics AssociateResource \a response.
 */
void AssociateResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Synthetics::AssociateResourceResponsePrivate
 * \brief The AssociateResourceResponsePrivate class provides private implementation for AssociateResourceResponse.
 * \internal
 *
 * \inmodule QtAwsSynthetics
 */

/*!
 * Constructs a AssociateResourceResponsePrivate object with public implementation \a q.
 */
AssociateResourceResponsePrivate::AssociateResourceResponsePrivate(
    AssociateResourceResponse * const q) : SyntheticsResponsePrivate(q)
{

}

/*!
 * Parses a Synthetics AssociateResource response element from \a xml.
 */
void AssociateResourceResponsePrivate::parseAssociateResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Synthetics
} // namespace QtAws
