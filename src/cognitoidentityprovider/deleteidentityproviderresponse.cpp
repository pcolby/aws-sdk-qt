/*
    Copyright 2013-2019 Paul Colby

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

#include "deleteidentityproviderresponse.h"
#include "deleteidentityproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteIdentityProviderResponse
 * \brief The DeleteIdentityProviderResponse class provides an interace for CognitoIdentityProvider DeleteIdentityProvider responses.
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
 * \sa CognitoIdentityProviderClient::deleteIdentityProvider
 */

/*!
 * Constructs a DeleteIdentityProviderResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIdentityProviderResponse::DeleteIdentityProviderResponse(
        const DeleteIdentityProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DeleteIdentityProviderResponsePrivate(this), parent)
{
    setRequest(new DeleteIdentityProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIdentityProviderRequest * DeleteIdentityProviderResponse::request() const
{
    Q_D(const DeleteIdentityProviderResponse);
    return static_cast<const DeleteIdentityProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider DeleteIdentityProvider \a response.
 */
void DeleteIdentityProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIdentityProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteIdentityProviderResponsePrivate
 * \brief The DeleteIdentityProviderResponsePrivate class provides private implementation for DeleteIdentityProviderResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DeleteIdentityProviderResponsePrivate object with public implementation \a q.
 */
DeleteIdentityProviderResponsePrivate::DeleteIdentityProviderResponsePrivate(
    DeleteIdentityProviderResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider DeleteIdentityProvider response element from \a xml.
 */
void DeleteIdentityProviderResponsePrivate::parseDeleteIdentityProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIdentityProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
