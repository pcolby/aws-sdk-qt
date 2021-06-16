/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteuserpoolresponse.h"
#include "deleteuserpoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteUserPoolResponse
 * \brief The DeleteUserPoolResponse class provides an interace for CognitoIdentityProvider DeleteUserPool responses.
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
 * \sa CognitoIdentityProviderClient::deleteUserPool
 */

/*!
 * Constructs a DeleteUserPoolResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUserPoolResponse::DeleteUserPoolResponse(
        const DeleteUserPoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DeleteUserPoolResponsePrivate(this), parent)
{
    setRequest(new DeleteUserPoolRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUserPoolRequest * DeleteUserPoolResponse::request() const
{
    Q_D(const DeleteUserPoolResponse);
    return static_cast<const DeleteUserPoolRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider DeleteUserPool \a response.
 */
void DeleteUserPoolResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteUserPoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteUserPoolResponsePrivate
 * \brief The DeleteUserPoolResponsePrivate class provides private implementation for DeleteUserPoolResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DeleteUserPoolResponsePrivate object with public implementation \a q.
 */
DeleteUserPoolResponsePrivate::DeleteUserPoolResponsePrivate(
    DeleteUserPoolResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider DeleteUserPool response element from \a xml.
 */
void DeleteUserPoolResponsePrivate::parseDeleteUserPoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserPoolResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
