// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setprincipaltagattributemapresponse.h"
#include "setprincipaltagattributemapresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentity {

/*!
 * \class QtAws::CognitoIdentity::SetPrincipalTagAttributeMapResponse
 * \brief The SetPrincipalTagAttributeMapResponse class provides an interace for CognitoIdentity SetPrincipalTagAttributeMap responses.
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
 * \sa CognitoIdentityClient::setPrincipalTagAttributeMap
 */

/*!
 * Constructs a SetPrincipalTagAttributeMapResponse object for \a reply to \a request, with parent \a parent.
 */
SetPrincipalTagAttributeMapResponse::SetPrincipalTagAttributeMapResponse(
        const SetPrincipalTagAttributeMapRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityResponse(new SetPrincipalTagAttributeMapResponsePrivate(this), parent)
{
    setRequest(new SetPrincipalTagAttributeMapRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetPrincipalTagAttributeMapRequest * SetPrincipalTagAttributeMapResponse::request() const
{
    Q_D(const SetPrincipalTagAttributeMapResponse);
    return static_cast<const SetPrincipalTagAttributeMapRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentity SetPrincipalTagAttributeMap \a response.
 */
void SetPrincipalTagAttributeMapResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetPrincipalTagAttributeMapResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentity::SetPrincipalTagAttributeMapResponsePrivate
 * \brief The SetPrincipalTagAttributeMapResponsePrivate class provides private implementation for SetPrincipalTagAttributeMapResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentity
 */

/*!
 * Constructs a SetPrincipalTagAttributeMapResponsePrivate object with public implementation \a q.
 */
SetPrincipalTagAttributeMapResponsePrivate::SetPrincipalTagAttributeMapResponsePrivate(
    SetPrincipalTagAttributeMapResponse * const q) : CognitoIdentityResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentity SetPrincipalTagAttributeMap response element from \a xml.
 */
void SetPrincipalTagAttributeMapResponsePrivate::parseSetPrincipalTagAttributeMapResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetPrincipalTagAttributeMapResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentity
} // namespace QtAws
