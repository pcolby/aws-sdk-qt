// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "verifyuserattributeresponse.h"
#include "verifyuserattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::VerifyUserAttributeResponse
 * \brief The VerifyUserAttributeResponse class provides an interace for CognitoIdentityProvider VerifyUserAttribute responses.
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
 * \sa CognitoIdentityProviderClient::verifyUserAttribute
 */

/*!
 * Constructs a VerifyUserAttributeResponse object for \a reply to \a request, with parent \a parent.
 */
VerifyUserAttributeResponse::VerifyUserAttributeResponse(
        const VerifyUserAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new VerifyUserAttributeResponsePrivate(this), parent)
{
    setRequest(new VerifyUserAttributeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const VerifyUserAttributeRequest * VerifyUserAttributeResponse::request() const
{
    Q_D(const VerifyUserAttributeResponse);
    return static_cast<const VerifyUserAttributeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider VerifyUserAttribute \a response.
 */
void VerifyUserAttributeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(VerifyUserAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::VerifyUserAttributeResponsePrivate
 * \brief The VerifyUserAttributeResponsePrivate class provides private implementation for VerifyUserAttributeResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a VerifyUserAttributeResponsePrivate object with public implementation \a q.
 */
VerifyUserAttributeResponsePrivate::VerifyUserAttributeResponsePrivate(
    VerifyUserAttributeResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider VerifyUserAttribute response element from \a xml.
 */
void VerifyUserAttributeResponsePrivate::parseVerifyUserAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("VerifyUserAttributeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
