/*
    Copyright 2013-2018 Paul Colby

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

#include "getidentityproviderbyidentifierresponse.h"
#include "getidentityproviderbyidentifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::GetIdentityProviderByIdentifierResponse
 * \brief The GetIdentityProviderByIdentifierResponse class provides an interace for CognitoIdentityProvider GetIdentityProviderByIdentifier responses.
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
 * \sa CognitoIdentityProviderClient::getIdentityProviderByIdentifier
 */

/*!
 * Constructs a GetIdentityProviderByIdentifierResponse object for \a reply to \a request, with parent \a parent.
 */
GetIdentityProviderByIdentifierResponse::GetIdentityProviderByIdentifierResponse(
        const GetIdentityProviderByIdentifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new GetIdentityProviderByIdentifierResponsePrivate(this), parent)
{
    setRequest(new GetIdentityProviderByIdentifierRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIdentityProviderByIdentifierRequest * GetIdentityProviderByIdentifierResponse::request() const
{
    Q_D(const GetIdentityProviderByIdentifierResponse);
    return static_cast<const GetIdentityProviderByIdentifierRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider GetIdentityProviderByIdentifier \a response.
 */
void GetIdentityProviderByIdentifierResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetIdentityProviderByIdentifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::GetIdentityProviderByIdentifierResponsePrivate
 * \brief The GetIdentityProviderByIdentifierResponsePrivate class provides private implementation for GetIdentityProviderByIdentifierResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a GetIdentityProviderByIdentifierResponsePrivate object with public implementation \a q.
 */
GetIdentityProviderByIdentifierResponsePrivate::GetIdentityProviderByIdentifierResponsePrivate(
    GetIdentityProviderByIdentifierResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider GetIdentityProviderByIdentifier response element from \a xml.
 */
void GetIdentityProviderByIdentifierResponsePrivate::parseGetIdentityProviderByIdentifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIdentityProviderByIdentifierResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
