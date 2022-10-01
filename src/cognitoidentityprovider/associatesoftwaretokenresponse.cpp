// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatesoftwaretokenresponse.h"
#include "associatesoftwaretokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AssociateSoftwareTokenResponse
 * \brief The AssociateSoftwareTokenResponse class provides an interace for CognitoIdentityProvider AssociateSoftwareToken responses.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito user pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito user
 * 
 *  pools>
 * 
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::associateSoftwareToken
 */

/*!
 * Constructs a AssociateSoftwareTokenResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateSoftwareTokenResponse::AssociateSoftwareTokenResponse(
        const AssociateSoftwareTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AssociateSoftwareTokenResponsePrivate(this), parent)
{
    setRequest(new AssociateSoftwareTokenRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateSoftwareTokenRequest * AssociateSoftwareTokenResponse::request() const
{
    Q_D(const AssociateSoftwareTokenResponse);
    return static_cast<const AssociateSoftwareTokenRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AssociateSoftwareToken \a response.
 */
void AssociateSoftwareTokenResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateSoftwareTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AssociateSoftwareTokenResponsePrivate
 * \brief The AssociateSoftwareTokenResponsePrivate class provides private implementation for AssociateSoftwareTokenResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AssociateSoftwareTokenResponsePrivate object with public implementation \a q.
 */
AssociateSoftwareTokenResponsePrivate::AssociateSoftwareTokenResponsePrivate(
    AssociateSoftwareTokenResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AssociateSoftwareToken response element from \a xml.
 */
void AssociateSoftwareTokenResponsePrivate::parseAssociateSoftwareTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateSoftwareTokenResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
