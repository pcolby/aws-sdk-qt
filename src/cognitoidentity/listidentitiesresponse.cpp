// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listidentitiesresponse.h"
#include "listidentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentity {

/*!
 * \class QtAws::CognitoIdentity::ListIdentitiesResponse
 * \brief The ListIdentitiesResponse class provides an interace for CognitoIdentity ListIdentities responses.
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
 * \sa CognitoIdentityClient::listIdentities
 */

/*!
 * Constructs a ListIdentitiesResponse object for \a reply to \a request, with parent \a parent.
 */
ListIdentitiesResponse::ListIdentitiesResponse(
        const ListIdentitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityResponse(new ListIdentitiesResponsePrivate(this), parent)
{
    setRequest(new ListIdentitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListIdentitiesRequest * ListIdentitiesResponse::request() const
{
    Q_D(const ListIdentitiesResponse);
    return static_cast<const ListIdentitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentity ListIdentities \a response.
 */
void ListIdentitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListIdentitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentity::ListIdentitiesResponsePrivate
 * \brief The ListIdentitiesResponsePrivate class provides private implementation for ListIdentitiesResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentity
 */

/*!
 * Constructs a ListIdentitiesResponsePrivate object with public implementation \a q.
 */
ListIdentitiesResponsePrivate::ListIdentitiesResponsePrivate(
    ListIdentitiesResponse * const q) : CognitoIdentityResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentity ListIdentities response element from \a xml.
 */
void ListIdentitiesResponsePrivate::parseListIdentitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIdentitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentity
} // namespace QtAws
