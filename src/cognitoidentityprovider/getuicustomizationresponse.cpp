// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getuicustomizationresponse.h"
#include "getuicustomizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::GetUICustomizationResponse
 * \brief The GetUICustomizationResponse class provides an interace for CognitoIdentityProvider GetUICustomization responses.
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
 * \sa CognitoIdentityProviderClient::getUICustomization
 */

/*!
 * Constructs a GetUICustomizationResponse object for \a reply to \a request, with parent \a parent.
 */
GetUICustomizationResponse::GetUICustomizationResponse(
        const GetUICustomizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new GetUICustomizationResponsePrivate(this), parent)
{
    setRequest(new GetUICustomizationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUICustomizationRequest * GetUICustomizationResponse::request() const
{
    Q_D(const GetUICustomizationResponse);
    return static_cast<const GetUICustomizationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider GetUICustomization \a response.
 */
void GetUICustomizationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUICustomizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::GetUICustomizationResponsePrivate
 * \brief The GetUICustomizationResponsePrivate class provides private implementation for GetUICustomizationResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a GetUICustomizationResponsePrivate object with public implementation \a q.
 */
GetUICustomizationResponsePrivate::GetUICustomizationResponsePrivate(
    GetUICustomizationResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider GetUICustomization response element from \a xml.
 */
void GetUICustomizationResponsePrivate::parseGetUICustomizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUICustomizationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
