/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
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
    Q_D(DeleteUserPoolClientResponse);
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
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
