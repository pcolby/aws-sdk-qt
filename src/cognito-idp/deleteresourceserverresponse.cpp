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

#include "deleteresourceserverresponse.h"
#include "deleteresourceserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  DeleteResourceServerResponse
 *
 * @brief  Handles CognitoIdentityProvider DeleteResourceServer responses.
 *
 * @see    CognitoIdentityProviderClient::deleteResourceServer
 */

/**
 * @brief  Constructs a new DeleteResourceServerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteResourceServerResponse::DeleteResourceServerResponse(
        const DeleteResourceServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DeleteResourceServerResponsePrivate(this), parent)
{
    setRequest(new DeleteResourceServerRequest(request));
    setReply(reply);
}

const DeleteResourceServerRequest * DeleteResourceServerResponse::request() const
{
    Q_D(const DeleteResourceServerResponse);
    return static_cast<const DeleteResourceServerRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider DeleteResourceServer response.
 *
 * @param  response  Response to parse.
 */
void DeleteResourceServerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteResourceServerResponsePrivate
 *
 * @brief  Private implementation for DeleteResourceServerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteResourceServerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteResourceServerResponse instance.
 */
DeleteResourceServerResponsePrivate::DeleteResourceServerResponsePrivate(
    DeleteResourceServerQueueResponse * const q) : DeleteResourceServerPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider DeleteResourceServerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteResourceServerResponsePrivate::DeleteResourceServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResourceServerResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace AWS
