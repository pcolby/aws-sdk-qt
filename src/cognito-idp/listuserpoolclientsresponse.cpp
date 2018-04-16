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

#include "listuserpoolclientsresponse.h"
#include "listuserpoolclientsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ListUserPoolClientsResponse
 *
 * \brief The ListUserPoolClientsResponse class provides an interace for CognitoIdentityProvider ListUserPoolClients responses.
 *
 * \ingroup CognitoIdentityProvider
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
 * \sa CognitoIdentityProviderClient::listUserPoolClients
 */

/*!
 * @brief  Constructs a new ListUserPoolClientsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListUserPoolClientsResponse::ListUserPoolClientsResponse(
        const ListUserPoolClientsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ListUserPoolClientsResponsePrivate(this), parent)
{
    setRequest(new ListUserPoolClientsRequest(request));
    setReply(reply);
}

const ListUserPoolClientsRequest * ListUserPoolClientsResponse::request() const
{
    Q_D(const ListUserPoolClientsResponse);
    return static_cast<const ListUserPoolClientsRequest *>(d->request);
}

/*!
 * @brief  Parse a CognitoIdentityProvider ListUserPoolClients response.
 *
 * @param  response  Response to parse.
 */
void ListUserPoolClientsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListUserPoolClientsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListUserPoolClientsResponsePrivate
 *
 * \brief Private implementation for ListUserPoolClientsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListUserPoolClientsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListUserPoolClientsResponse instance.
 */
ListUserPoolClientsResponsePrivate::ListUserPoolClientsResponsePrivate(
    ListUserPoolClientsResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CognitoIdentityProvider ListUserPoolClientsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListUserPoolClientsResponsePrivate::parseListUserPoolClientsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUserPoolClientsResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
