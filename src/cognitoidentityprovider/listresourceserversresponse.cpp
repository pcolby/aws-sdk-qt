/*
    Copyright 2013-2020 Paul Colby

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

#include "listresourceserversresponse.h"
#include "listresourceserversresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ListResourceServersResponse
 * \brief The ListResourceServersResponse class provides an interace for CognitoIdentityProvider ListResourceServers responses.
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
 * \sa CognitoIdentityProviderClient::listResourceServers
 */

/*!
 * Constructs a ListResourceServersResponse object for \a reply to \a request, with parent \a parent.
 */
ListResourceServersResponse::ListResourceServersResponse(
        const ListResourceServersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ListResourceServersResponsePrivate(this), parent)
{
    setRequest(new ListResourceServersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResourceServersRequest * ListResourceServersResponse::request() const
{
    Q_D(const ListResourceServersResponse);
    return static_cast<const ListResourceServersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider ListResourceServers \a response.
 */
void ListResourceServersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListResourceServersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::ListResourceServersResponsePrivate
 * \brief The ListResourceServersResponsePrivate class provides private implementation for ListResourceServersResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ListResourceServersResponsePrivate object with public implementation \a q.
 */
ListResourceServersResponsePrivate::ListResourceServersResponsePrivate(
    ListResourceServersResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider ListResourceServers response element from \a xml.
 */
void ListResourceServersResponsePrivate::parseListResourceServersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourceServersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
