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

#include "addcustomattributesresponse.h"
#include "addcustomattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AddCustomAttributesResponse
 *
 * @brief  Handles CognitoIdentityProvider AddCustomAttributes responses.
 *
 * @see    CognitoIdentityProviderClient::addCustomAttributes
 */

/**
 * @brief  Constructs a new AddCustomAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddCustomAttributesResponse::AddCustomAttributesResponse(
        const AddCustomAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AddCustomAttributesResponsePrivate(this), parent)
{
    setRequest(new AddCustomAttributesRequest(request));
    setReply(reply);
}

const AddCustomAttributesRequest * AddCustomAttributesResponse::request() const
{
    Q_D(const AddCustomAttributesResponse);
    return static_cast<const AddCustomAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AddCustomAttributes response.
 *
 * @param  response  Response to parse.
 */
void AddCustomAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddCustomAttributesResponsePrivate
 *
 * @brief  Private implementation for AddCustomAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddCustomAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddCustomAttributesResponse instance.
 */
AddCustomAttributesResponsePrivate::AddCustomAttributesResponsePrivate(
    AddCustomAttributesQueueResponse * const q) : AddCustomAttributesPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AddCustomAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddCustomAttributesResponsePrivate::AddCustomAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddCustomAttributesResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace AWS
