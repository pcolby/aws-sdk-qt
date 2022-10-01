// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startdeviceauthorizationresponse.h"
#include "startdeviceauthorizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsoOidc {

/*!
 * \class QtAws::SsoOidc::StartDeviceAuthorizationResponse
 * \brief The StartDeviceAuthorizationResponse class provides an interace for SsoOidc StartDeviceAuthorization responses.
 *
 * \inmodule QtAwsSsoOidc
 *
 *  AWS Single Sign-On (SSO) OpenID Connect (OIDC) is a web service that enables a client (such as AWS CLI or a native
 *  application) to register with AWS SSO. The service also enables the client to fetch the user’s access token upon
 *  successful authentication and authorization with AWS SSO. This service conforms with the OAuth 2.0 based implementation
 *  of the device authorization grant standard (<a
 * 
 *  href="https://tools.ietf.org/html/rfc8628">https://tools.ietf.org/html/rfc8628</a>)>
 * 
 *  For general information about AWS SSO, see <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">What is AWS Single Sign-On?</a> in the
 *  <i>AWS SSO User
 * 
 *  Guide</i>>
 * 
 *  This API reference guide describes the AWS SSO OIDC operations that you can call programatically and includes detailed
 *  information on data types and
 * 
 *  errors> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms such as
 *  Java, Ruby, .Net, iOS, and Android. The SDKs provide a convenient way to create programmatic access to AWS SSO and other
 *  AWS services. For more information about the AWS SDKs, including how to download and install them, see <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * \sa SsoOidcClient::startDeviceAuthorization
 */

/*!
 * Constructs a StartDeviceAuthorizationResponse object for \a reply to \a request, with parent \a parent.
 */
StartDeviceAuthorizationResponse::StartDeviceAuthorizationResponse(
        const StartDeviceAuthorizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsoOidcResponse(new StartDeviceAuthorizationResponsePrivate(this), parent)
{
    setRequest(new StartDeviceAuthorizationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartDeviceAuthorizationRequest * StartDeviceAuthorizationResponse::request() const
{
    Q_D(const StartDeviceAuthorizationResponse);
    return static_cast<const StartDeviceAuthorizationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsoOidc StartDeviceAuthorization \a response.
 */
void StartDeviceAuthorizationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartDeviceAuthorizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsoOidc::StartDeviceAuthorizationResponsePrivate
 * \brief The StartDeviceAuthorizationResponsePrivate class provides private implementation for StartDeviceAuthorizationResponse.
 * \internal
 *
 * \inmodule QtAwsSsoOidc
 */

/*!
 * Constructs a StartDeviceAuthorizationResponsePrivate object with public implementation \a q.
 */
StartDeviceAuthorizationResponsePrivate::StartDeviceAuthorizationResponsePrivate(
    StartDeviceAuthorizationResponse * const q) : SsoOidcResponsePrivate(q)
{

}

/*!
 * Parses a SsoOidc StartDeviceAuthorization response element from \a xml.
 */
void StartDeviceAuthorizationResponsePrivate::parseStartDeviceAuthorizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDeviceAuthorizationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsoOidc
} // namespace QtAws
