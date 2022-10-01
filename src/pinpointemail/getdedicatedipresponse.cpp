// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdedicatedipresponse.h"
#include "getdedicatedipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointEmail {

/*!
 * \class QtAws::PinpointEmail::GetDedicatedIpResponse
 * \brief The GetDedicatedIpResponse class provides an interace for PinpointEmail GetDedicatedIp responses.
 *
 * \inmodule QtAwsPinpointEmail
 *
 *  <fullname>Amazon Pinpoint Email Service</fullname>
 * 
 *  Welcome to the <i>Amazon Pinpoint Email API Reference</i>. This guide provides information about the Amazon Pinpoint
 *  Email API (version 1.0), including supported operations, data types, parameters, and
 * 
 *  schemas>
 * 
 *  <a href="https://aws.amazon.com/pinpoint">Amazon Pinpoint</a> is an AWS service that you can use to engage with your
 *  customers across multiple messaging channels. You can use Amazon Pinpoint to send email, SMS text messages, voice
 *  messages, and push notifications. The Amazon Pinpoint Email API provides programmatic access to options that are unique
 *  to the email channel and supplement the options provided by the Amazon Pinpoint
 * 
 *  API>
 * 
 *  If you're new to Amazon Pinpoint, you might find it helpful to also review the <a
 *  href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon Pinpoint Developer Guide</a>. The
 *  <i>Amazon Pinpoint Developer Guide</i> provides tutorials, code samples, and procedures that demonstrate how to use
 *  Amazon Pinpoint features programmatically and how to integrate Amazon Pinpoint functionality into mobile apps and other
 *  types of applications. The guide also provides information about key topics such as Amazon Pinpoint integration with
 *  other AWS services and the limits that apply to using the
 * 
 *  service>
 * 
 *  The Amazon Pinpoint Email API is available in several AWS Regions and it provides an endpoint for each of these Regions.
 *  For a list of all the Regions and endpoints where the API is currently available, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#pinpoint_region">AWS Service Endpoints</a> in the
 *  <i>Amazon Web Services General Reference</i>. To learn more about AWS Regions, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html">Managing AWS Regions</a> in the <i>Amazon Web
 *  Services General
 * 
 *  Reference</i>>
 * 
 *  In each Region, AWS maintains multiple Availability Zones. These Availability Zones are physically isolated from each
 *  other, but are united by private, low-latency, high-throughput, and highly redundant network connections. These
 *  Availability Zones enable us to provide very high levels of availability and redundancy, while also minimizing latency.
 *  To learn more about the number of Availability Zones that are available in each Region, see <a
 *  href="http://aws.amazon.com/about-aws/global-infrastructure/">AWS Global
 *
 * \sa PinpointEmailClient::getDedicatedIp
 */

/*!
 * Constructs a GetDedicatedIpResponse object for \a reply to \a request, with parent \a parent.
 */
GetDedicatedIpResponse::GetDedicatedIpResponse(
        const GetDedicatedIpRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointEmailResponse(new GetDedicatedIpResponsePrivate(this), parent)
{
    setRequest(new GetDedicatedIpRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDedicatedIpRequest * GetDedicatedIpResponse::request() const
{
    Q_D(const GetDedicatedIpResponse);
    return static_cast<const GetDedicatedIpRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointEmail GetDedicatedIp \a response.
 */
void GetDedicatedIpResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDedicatedIpResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointEmail::GetDedicatedIpResponsePrivate
 * \brief The GetDedicatedIpResponsePrivate class provides private implementation for GetDedicatedIpResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * Constructs a GetDedicatedIpResponsePrivate object with public implementation \a q.
 */
GetDedicatedIpResponsePrivate::GetDedicatedIpResponsePrivate(
    GetDedicatedIpResponse * const q) : PinpointEmailResponsePrivate(q)
{

}

/*!
 * Parses a PinpointEmail GetDedicatedIp response element from \a xml.
 */
void GetDedicatedIpResponsePrivate::parseGetDedicatedIpResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDedicatedIpResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointEmail
} // namespace QtAws
