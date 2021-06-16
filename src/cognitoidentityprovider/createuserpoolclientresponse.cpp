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

#include "createuserpoolclientresponse.h"
#include "createuserpoolclientresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserPoolClientResponse
 * \brief The CreateUserPoolClientResponse class provides an interace for CognitoIdentityProvider CreateUserPoolClient responses.
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
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::createUserPoolClient
 */

/*!
 * Constructs a CreateUserPoolClientResponse object for \a reply to \a request, with parent \a parent.
 */
CreateUserPoolClientResponse::CreateUserPoolClientResponse(
        const CreateUserPoolClientRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new CreateUserPoolClientResponsePrivate(this), parent)
{
    setRequest(new CreateUserPoolClientRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateUserPoolClientRequest * CreateUserPoolClientResponse::request() const
{
    Q_D(const CreateUserPoolClientResponse);
    return static_cast<const CreateUserPoolClientRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider CreateUserPoolClient \a response.
 */
void CreateUserPoolClientResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateUserPoolClientResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserPoolClientResponsePrivate
 * \brief The CreateUserPoolClientResponsePrivate class provides private implementation for CreateUserPoolClientResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a CreateUserPoolClientResponsePrivate object with public implementation \a q.
 */
CreateUserPoolClientResponsePrivate::CreateUserPoolClientResponsePrivate(
    CreateUserPoolClientResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider CreateUserPoolClient response element from \a xml.
 */
void CreateUserPoolClientResponsePrivate::parseCreateUserPoolClientResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUserPoolClientResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
