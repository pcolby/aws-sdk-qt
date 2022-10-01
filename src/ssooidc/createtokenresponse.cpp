/*
    Copyright 2013-2021 Paul Colby

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

#include "createtokenresponse.h"
#include "createtokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsoOidc {

/*!
 * \class QtAws::SsoOidc::CreateTokenResponse
 * \brief The CreateTokenResponse class provides an interace for SsoOidc CreateToken responses.
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
 * \sa SsoOidcClient::createToken
 */

/*!
 * Constructs a CreateTokenResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTokenResponse::CreateTokenResponse(
        const CreateTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsoOidcResponse(new CreateTokenResponsePrivate(this), parent)
{
    setRequest(new CreateTokenRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTokenRequest * CreateTokenResponse::request() const
{
    Q_D(const CreateTokenResponse);
    return static_cast<const CreateTokenRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsoOidc CreateToken \a response.
 */
void CreateTokenResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsoOidc::CreateTokenResponsePrivate
 * \brief The CreateTokenResponsePrivate class provides private implementation for CreateTokenResponse.
 * \internal
 *
 * \inmodule QtAwsSsoOidc
 */

/*!
 * Constructs a CreateTokenResponsePrivate object with public implementation \a q.
 */
CreateTokenResponsePrivate::CreateTokenResponsePrivate(
    CreateTokenResponse * const q) : SsoOidcResponsePrivate(q)
{

}

/*!
 * Parses a SsoOidc CreateToken response element from \a xml.
 */
void CreateTokenResponsePrivate::parseCreateTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTokenResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsoOidc
} // namespace QtAws
