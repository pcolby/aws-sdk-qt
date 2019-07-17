/*
    Copyright 2013-2019 Paul Colby

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

#include "unlinkdeveloperidentityresponse.h"
#include "unlinkdeveloperidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentity {

/*!
 * \class QtAws::CognitoIdentity::UnlinkDeveloperIdentityResponse
 * \brief The UnlinkDeveloperIdentityResponse class provides an interace for CognitoIdentity UnlinkDeveloperIdentity responses.
 *
 * \inmodule QtAwsCognitoIdentity
 *
 *  <fullname>Amazon Cognito Federated Identities</fullname>
 * 
 *  Amazon Cognito Federated Identities is a web service that delivers scoped temporary credentials to mobile devices and
 *  other untrusted environments. It uniquely identifies a device and supplies the user with a consistent identity over the
 *  lifetime of an
 * 
 *  application>
 * 
 *  Using Amazon Cognito Federated Identities, you can enable authentication with one or more third-party identity providers
 *  (Facebook, Google, or Login with Amazon) or an Amazon Cognito user pool, and you can also choose to support
 *  unauthenticated access from your app. Cognito delivers a unique identifier for each user and acts as an OpenID token
 *  provider trusted by AWS Security Token Service (STS) to access temporary, limited-privilege AWS
 * 
 *  credentials>
 * 
 *  For a description of the authentication flow from the Amazon Cognito Developer Guide see <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/authentication-flow.html">Authentication
 * 
 *  Flow</a>>
 * 
 *  For more information see <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-identity.html">Amazon Cognito Federated
 *
 * \sa CognitoIdentityClient::unlinkDeveloperIdentity
 */

/*!
 * Constructs a UnlinkDeveloperIdentityResponse object for \a reply to \a request, with parent \a parent.
 */
UnlinkDeveloperIdentityResponse::UnlinkDeveloperIdentityResponse(
        const UnlinkDeveloperIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityResponse(new UnlinkDeveloperIdentityResponsePrivate(this), parent)
{
    setRequest(new UnlinkDeveloperIdentityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UnlinkDeveloperIdentityRequest * UnlinkDeveloperIdentityResponse::request() const
{
    Q_D(const UnlinkDeveloperIdentityResponse);
    return static_cast<const UnlinkDeveloperIdentityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentity UnlinkDeveloperIdentity \a response.
 */
void UnlinkDeveloperIdentityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UnlinkDeveloperIdentityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentity::UnlinkDeveloperIdentityResponsePrivate
 * \brief The UnlinkDeveloperIdentityResponsePrivate class provides private implementation for UnlinkDeveloperIdentityResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentity
 */

/*!
 * Constructs a UnlinkDeveloperIdentityResponsePrivate object with public implementation \a q.
 */
UnlinkDeveloperIdentityResponsePrivate::UnlinkDeveloperIdentityResponsePrivate(
    UnlinkDeveloperIdentityResponse * const q) : CognitoIdentityResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentity UnlinkDeveloperIdentity response element from \a xml.
 */
void UnlinkDeveloperIdentityResponsePrivate::parseUnlinkDeveloperIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UnlinkDeveloperIdentityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentity
} // namespace QtAws
