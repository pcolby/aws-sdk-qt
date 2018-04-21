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

#include "deleteuserpooldomainresponse.h"
#include "deleteuserpooldomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteUserPoolDomainResponse
 * \brief The DeleteUserPoolDomainResponse class provides an interace for CognitoIdentityProvider DeleteUserPoolDomain responses.
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
 * \sa CognitoIdentityProviderClient::deleteUserPoolDomain
 */

/*!
 * Constructs a DeleteUserPoolDomainResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUserPoolDomainResponse::DeleteUserPoolDomainResponse(
        const DeleteUserPoolDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DeleteUserPoolDomainResponsePrivate(this), parent)
{
    setRequest(new DeleteUserPoolDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUserPoolDomainRequest * DeleteUserPoolDomainResponse::request() const
{
    Q_D(const DeleteUserPoolDomainResponse);
    return static_cast<const DeleteUserPoolDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider DeleteUserPoolDomain \a response.
 */
void DeleteUserPoolDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteUserPoolDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteUserPoolDomainResponsePrivate
 * \brief The DeleteUserPoolDomainResponsePrivate class provides private implementation for DeleteUserPoolDomainResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DeleteUserPoolDomainResponsePrivate object with public implementation \a q.
 */
DeleteUserPoolDomainResponsePrivate::DeleteUserPoolDomainResponsePrivate(
    DeleteUserPoolDomainResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider DeleteUserPoolDomain response element from \a xml.
 */
void DeleteUserPoolDomainResponsePrivate::parseDeleteUserPoolDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserPoolDomainResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
