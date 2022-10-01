// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setuicustomizationresponse.h"
#include "setuicustomizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::SetUICustomizationResponse
 * \brief The SetUICustomizationResponse class provides an interace for CognitoIdentityProvider SetUICustomization responses.
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
 * \sa CognitoIdentityProviderClient::setUICustomization
 */

/*!
 * Constructs a SetUICustomizationResponse object for \a reply to \a request, with parent \a parent.
 */
SetUICustomizationResponse::SetUICustomizationResponse(
        const SetUICustomizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new SetUICustomizationResponsePrivate(this), parent)
{
    setRequest(new SetUICustomizationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetUICustomizationRequest * SetUICustomizationResponse::request() const
{
    Q_D(const SetUICustomizationResponse);
    return static_cast<const SetUICustomizationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider SetUICustomization \a response.
 */
void SetUICustomizationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetUICustomizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::SetUICustomizationResponsePrivate
 * \brief The SetUICustomizationResponsePrivate class provides private implementation for SetUICustomizationResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a SetUICustomizationResponsePrivate object with public implementation \a q.
 */
SetUICustomizationResponsePrivate::SetUICustomizationResponsePrivate(
    SetUICustomizationResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider SetUICustomization response element from \a xml.
 */
void SetUICustomizationResponsePrivate::parseSetUICustomizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetUICustomizationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
