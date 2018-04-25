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

#include "listuserpoolsresponse.h"
#include "listuserpoolsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ListUserPoolsResponse
 * \brief The ListUserPoolsResponse class provides an interace for CognitoIdentityProvider ListUserPools responses.
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
 * \sa CognitoIdentityProviderClient::listUserPools
 */

/*!
 * Constructs a ListUserPoolsResponse object for \a reply to \a request, with parent \a parent.
 */
ListUserPoolsResponse::ListUserPoolsResponse(
        const ListUserPoolsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ListUserPoolsResponsePrivate(this), parent)
{
    setRequest(new ListUserPoolsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUserPoolsRequest * ListUserPoolsResponse::request() const
{
    Q_D(const ListUserPoolsResponse);
    return static_cast<const ListUserPoolsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider ListUserPools \a response.
 */
void ListUserPoolsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListUserPoolsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::ListUserPoolsResponsePrivate
 * \brief The ListUserPoolsResponsePrivate class provides private implementation for ListUserPoolsResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ListUserPoolsResponsePrivate object with public implementation \a q.
 */
ListUserPoolsResponsePrivate::ListUserPoolsResponsePrivate(
    ListUserPoolsResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider ListUserPools response element from \a xml.
 */
void ListUserPoolsResponsePrivate::parseListUserPoolsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUserPoolsResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
