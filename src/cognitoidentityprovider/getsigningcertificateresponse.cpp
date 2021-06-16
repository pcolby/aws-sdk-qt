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

#include "getsigningcertificateresponse.h"
#include "getsigningcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::GetSigningCertificateResponse
 * \brief The GetSigningCertificateResponse class provides an interace for CognitoIdentityProvider GetSigningCertificate responses.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::getSigningCertificate
 */

/*!
 * Constructs a GetSigningCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
GetSigningCertificateResponse::GetSigningCertificateResponse(
        const GetSigningCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new GetSigningCertificateResponsePrivate(this), parent)
{
    setRequest(new GetSigningCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSigningCertificateRequest * GetSigningCertificateResponse::request() const
{
    Q_D(const GetSigningCertificateResponse);
    return static_cast<const GetSigningCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider GetSigningCertificate \a response.
 */
void GetSigningCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSigningCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::GetSigningCertificateResponsePrivate
 * \brief The GetSigningCertificateResponsePrivate class provides private implementation for GetSigningCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a GetSigningCertificateResponsePrivate object with public implementation \a q.
 */
GetSigningCertificateResponsePrivate::GetSigningCertificateResponsePrivate(
    GetSigningCertificateResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider GetSigningCertificate response element from \a xml.
 */
void GetSigningCertificateResponsePrivate::parseGetSigningCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSigningCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
