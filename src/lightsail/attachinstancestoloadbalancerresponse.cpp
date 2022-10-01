// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "attachinstancestoloadbalancerresponse.h"
#include "attachinstancestoloadbalancerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::AttachInstancesToLoadBalancerResponse
 * \brief The AttachInstancesToLoadBalancerResponse class provides an interace for Lightsail AttachInstancesToLoadBalancer responses.
 *
 * \inmodule QtAwsLightsail
 *
 *  Amazon Lightsail is the easiest way to get started with Amazon Web Services (Amazon Web Services) for developers who
 *  need to build websites or web applications. It includes everything you need to launch your project quickly - instances
 *  (virtual private servers), container services, storage buckets, managed databases, SSD-based block storage, static IP
 *  addresses, load balancers, content delivery network (CDN) distributions, DNS management of registered domains, and
 *  resource snapshots (backups) - for a low, predictable monthly
 * 
 *  price>
 * 
 *  You can manage your Lightsail resources using the Lightsail console, Lightsail API, AWS Command Line Interface (AWS
 *  CLI), or SDKs. For more information about Lightsail concepts and tasks, see the <a
 *  href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Amazon
 *  Lightsail Developer
 * 
 *  Guide</a>>
 * 
 *  This API Reference provides detailed information about the actions, data types, parameters, and errors of the Lightsail
 *  service. For more information about the supported Amazon Web Services Regions, endpoints, and service quotas of the
 *  Lightsail service, see <a href="https://docs.aws.amazon.com/general/latest/gr/lightsail.html">Amazon Lightsail Endpoints
 *  and Quotas</a> in the <i>Amazon Web Services General
 *
 * \sa LightsailClient::attachInstancesToLoadBalancer
 */

/*!
 * Constructs a AttachInstancesToLoadBalancerResponse object for \a reply to \a request, with parent \a parent.
 */
AttachInstancesToLoadBalancerResponse::AttachInstancesToLoadBalancerResponse(
        const AttachInstancesToLoadBalancerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new AttachInstancesToLoadBalancerResponsePrivate(this), parent)
{
    setRequest(new AttachInstancesToLoadBalancerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AttachInstancesToLoadBalancerRequest * AttachInstancesToLoadBalancerResponse::request() const
{
    Q_D(const AttachInstancesToLoadBalancerResponse);
    return static_cast<const AttachInstancesToLoadBalancerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail AttachInstancesToLoadBalancer \a response.
 */
void AttachInstancesToLoadBalancerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AttachInstancesToLoadBalancerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::AttachInstancesToLoadBalancerResponsePrivate
 * \brief The AttachInstancesToLoadBalancerResponsePrivate class provides private implementation for AttachInstancesToLoadBalancerResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a AttachInstancesToLoadBalancerResponsePrivate object with public implementation \a q.
 */
AttachInstancesToLoadBalancerResponsePrivate::AttachInstancesToLoadBalancerResponsePrivate(
    AttachInstancesToLoadBalancerResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail AttachInstancesToLoadBalancer response element from \a xml.
 */
void AttachInstancesToLoadBalancerResponsePrivate::parseAttachInstancesToLoadBalancerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachInstancesToLoadBalancerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lightsail
} // namespace QtAws
