/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "attachloadbalancertlscertificateresponse.h"
#include "attachloadbalancertlscertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::AttachLoadBalancerTlsCertificateResponse
 * \brief The AttachLoadBalancerTlsCertificateResponse class provides an interace for Lightsail AttachLoadBalancerTlsCertificate responses.
 *
 * \inmodule QtAwsLightsail
 *
 *  Amazon Lightsail is the easiest way to get started with AWS for developers who just need virtual private servers.
 *  Lightsail includes everything you need to launch your project quickly - a virtual machine, a managed database, SSD-based
 *  storage, data transfer, DNS management, and a static IP - for a low, predictable price. You manage those Lightsail
 *  servers through the Lightsail console or by using the API or command-line interface
 * 
 *  (CLI)>
 * 
 *  For more information about Lightsail concepts and tasks, see the <a
 *  href="https://lightsail.aws.amazon.com/ls/docs/all">Lightsail Dev
 * 
 *  Guide</a>>
 * 
 *  To use the Lightsail API or the CLI, you will need to use AWS Identity and Access Management (IAM) to generate access
 *  keys. For details about how to set this up, see the <a
 *  href="http://lightsail.aws.amazon.com/ls/docs/how-to/article/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Lightsail
 *  Dev
 *
 * \sa LightsailClient::attachLoadBalancerTlsCertificate
 */

/*!
 * Constructs a AttachLoadBalancerTlsCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
AttachLoadBalancerTlsCertificateResponse::AttachLoadBalancerTlsCertificateResponse(
        const AttachLoadBalancerTlsCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new AttachLoadBalancerTlsCertificateResponsePrivate(this), parent)
{
    setRequest(new AttachLoadBalancerTlsCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AttachLoadBalancerTlsCertificateRequest * AttachLoadBalancerTlsCertificateResponse::request() const
{
    Q_D(const AttachLoadBalancerTlsCertificateResponse);
    return static_cast<const AttachLoadBalancerTlsCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail AttachLoadBalancerTlsCertificate \a response.
 */
void AttachLoadBalancerTlsCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AttachLoadBalancerTlsCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::AttachLoadBalancerTlsCertificateResponsePrivate
 * \brief The AttachLoadBalancerTlsCertificateResponsePrivate class provides private implementation for AttachLoadBalancerTlsCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a AttachLoadBalancerTlsCertificateResponsePrivate object with public implementation \a q.
 */
AttachLoadBalancerTlsCertificateResponsePrivate::AttachLoadBalancerTlsCertificateResponsePrivate(
    AttachLoadBalancerTlsCertificateResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail AttachLoadBalancerTlsCertificate response element from \a xml.
 */
void AttachLoadBalancerTlsCertificateResponsePrivate::parseAttachLoadBalancerTlsCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachLoadBalancerTlsCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lightsail
} // namespace QtAws
