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

#include "updateuserattributesresponse.h"
#include "updateuserattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  UpdateUserAttributesResponse
 *
 * @brief  Handles CognitoIdentityProvider UpdateUserAttributes responses.
 *
 * @see    CognitoIdentityProviderClient::updateUserAttributes
 */

/**
 * @brief  Constructs a new UpdateUserAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateUserAttributesResponse::UpdateUserAttributesResponse(
        const UpdateUserAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateUserAttributesResponse(new UpdateUserAttributesResponsePrivate(this), parent)
{
    setRequest(new UpdateUserAttributesRequest(request));
    setReply(reply);
}

const UpdateUserAttributesRequest * UpdateUserAttributesResponse::request() const
{
    Q_D(const UpdateUserAttributesResponse);
    return static_cast<const UpdateUserAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider UpdateUserAttributes response.
 *
 * @param  response  Response to parse.
 */
void UpdateUserAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateUserAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateUserAttributesResponsePrivate
 *
 * @brief  Private implementation for UpdateUserAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUserAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateUserAttributesResponse instance.
 */
UpdateUserAttributesResponsePrivate::UpdateUserAttributesResponsePrivate(
    UpdateUserAttributesResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider UpdateUserAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateUserAttributesResponsePrivate::parseUpdateUserAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUserAttributesResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
