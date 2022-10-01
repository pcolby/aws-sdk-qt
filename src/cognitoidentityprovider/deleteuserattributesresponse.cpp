// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteuserattributesresponse.h"
#include "deleteuserattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteUserAttributesResponse
 * \brief The DeleteUserAttributesResponse class provides an interace for CognitoIdentityProvider DeleteUserAttributes responses.
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
 * \sa CognitoIdentityProviderClient::deleteUserAttributes
 */

/*!
 * Constructs a DeleteUserAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUserAttributesResponse::DeleteUserAttributesResponse(
        const DeleteUserAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DeleteUserAttributesResponsePrivate(this), parent)
{
    setRequest(new DeleteUserAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUserAttributesRequest * DeleteUserAttributesResponse::request() const
{
    Q_D(const DeleteUserAttributesResponse);
    return static_cast<const DeleteUserAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider DeleteUserAttributes \a response.
 */
void DeleteUserAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteUserAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteUserAttributesResponsePrivate
 * \brief The DeleteUserAttributesResponsePrivate class provides private implementation for DeleteUserAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DeleteUserAttributesResponsePrivate object with public implementation \a q.
 */
DeleteUserAttributesResponsePrivate::DeleteUserAttributesResponsePrivate(
    DeleteUserAttributesResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider DeleteUserAttributes response element from \a xml.
 */
void DeleteUserAttributesResponsePrivate::parseDeleteUserAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
