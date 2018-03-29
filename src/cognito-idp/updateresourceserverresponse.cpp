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

#include "updateresourceserverresponse.h"
#include "updateresourceserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  UpdateResourceServerResponse
 *
 * @brief  Handles CognitoIdentityProvider UpdateResourceServer responses.
 *
 * @see    CognitoIdentityProviderClient::updateResourceServer
 */

/**
 * @brief  Constructs a new UpdateResourceServerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateResourceServerResponse::UpdateResourceServerResponse(
        const UpdateResourceServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new UpdateResourceServerResponsePrivate(this), parent)
{
    setRequest(new UpdateResourceServerRequest(request));
    setReply(reply);
}

const UpdateResourceServerRequest * UpdateResourceServerResponse::request() const
{
    Q_D(const UpdateResourceServerResponse);
    return static_cast<const UpdateResourceServerRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider UpdateResourceServer response.
 *
 * @param  response  Response to parse.
 */
void UpdateResourceServerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateResourceServerResponsePrivate
 *
 * @brief  Private implementation for UpdateResourceServerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateResourceServerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateResourceServerResponse instance.
 */
UpdateResourceServerResponsePrivate::UpdateResourceServerResponsePrivate(
    UpdateResourceServerQueueResponse * const q) : UpdateResourceServerPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider UpdateResourceServerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateResourceServerResponsePrivate::UpdateResourceServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateResourceServerResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace AWS
