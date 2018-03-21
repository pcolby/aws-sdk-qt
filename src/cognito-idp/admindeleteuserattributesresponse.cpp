/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "admindeleteuserattributesresponse.h"
#include "admindeleteuserattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminDeleteUserAttributesResponse
 *
 * @brief  Handles CognitoIdentityProvider AdminDeleteUserAttributes responses.
 *
 * @see    CognitoIdentityProviderClient::adminDeleteUserAttributes
 */

/**
 * @brief  Constructs a new AdminDeleteUserAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminDeleteUserAttributesResponse::AdminDeleteUserAttributesResponse(
        const AdminDeleteUserAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminDeleteUserAttributesResponsePrivate(this), parent)
{
    setRequest(new AdminDeleteUserAttributesRequest(request));
    setReply(reply);
}

const AdminDeleteUserAttributesRequest * AdminDeleteUserAttributesResponse::request() const
{
    Q_D(const AdminDeleteUserAttributesResponse);
    return static_cast<const AdminDeleteUserAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AdminDeleteUserAttributes response.
 *
 * @param  response  Response to parse.
 */
void AdminDeleteUserAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AdminDeleteUserAttributesResponsePrivate
 *
 * @brief  Private implementation for AdminDeleteUserAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminDeleteUserAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminDeleteUserAttributesResponse instance.
 */
AdminDeleteUserAttributesResponsePrivate::AdminDeleteUserAttributesResponsePrivate(
    AdminDeleteUserAttributesQueueResponse * const q) : AdminDeleteUserAttributesPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AdminDeleteUserAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminDeleteUserAttributesResponsePrivate::AdminDeleteUserAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminDeleteUserAttributesResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace AWS
