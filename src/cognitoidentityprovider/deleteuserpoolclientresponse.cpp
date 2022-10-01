// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteuserpoolclientresponse.h"
#include "deleteuserpoolclientresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteUserPoolClientResponse
 * \brief The DeleteUserPoolClientResponse class provides an interace for CognitoIdentityProvider DeleteUserPoolClient responses.
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
 * \sa CognitoIdentityProviderClient::deleteUserPoolClient
 */

/*!
 * Constructs a DeleteUserPoolClientResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUserPoolClientResponse::DeleteUserPoolClientResponse(
        const DeleteUserPoolClientRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DeleteUserPoolClientResponsePrivate(this), parent)
{
    setRequest(new DeleteUserPoolClientRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUserPoolClientRequest * DeleteUserPoolClientResponse::request() const
{
    Q_D(const DeleteUserPoolClientResponse);
    return static_cast<const DeleteUserPoolClientRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider DeleteUserPoolClient \a response.
 */
void DeleteUserPoolClientResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteUserPoolClientResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteUserPoolClientResponsePrivate
 * \brief The DeleteUserPoolClientResponsePrivate class provides private implementation for DeleteUserPoolClientResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DeleteUserPoolClientResponsePrivate object with public implementation \a q.
 */
DeleteUserPoolClientResponsePrivate::DeleteUserPoolClientResponsePrivate(
    DeleteUserPoolClientResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider DeleteUserPoolClient response element from \a xml.
 */
void DeleteUserPoolClientResponsePrivate::parseDeleteUserPoolClientResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserPoolClientResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
