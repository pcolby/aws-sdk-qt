// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateuserattributesresponse.h"
#include "updateuserattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateUserAttributesResponse
 * \brief The UpdateUserAttributesResponse class provides an interace for CognitoIdentityProvider UpdateUserAttributes responses.
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
 * \sa CognitoIdentityProviderClient::updateUserAttributes
 */

/*!
 * Constructs a UpdateUserAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateUserAttributesResponse::UpdateUserAttributesResponse(
        const UpdateUserAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new UpdateUserAttributesResponsePrivate(this), parent)
{
    setRequest(new UpdateUserAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateUserAttributesRequest * UpdateUserAttributesResponse::request() const
{
    Q_D(const UpdateUserAttributesResponse);
    return static_cast<const UpdateUserAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider UpdateUserAttributes \a response.
 */
void UpdateUserAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateUserAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateUserAttributesResponsePrivate
 * \brief The UpdateUserAttributesResponsePrivate class provides private implementation for UpdateUserAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a UpdateUserAttributesResponsePrivate object with public implementation \a q.
 */
UpdateUserAttributesResponsePrivate::UpdateUserAttributesResponsePrivate(
    UpdateUserAttributesResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider UpdateUserAttributes response element from \a xml.
 */
void UpdateUserAttributesResponsePrivate::parseUpdateUserAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUserAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
