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

#include "createtapesresponse.h"
#include "createtapesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  CreateTapesResponse
 *
 * @brief  Handles StorageGateway CreateTapes responses.
 *
 * @see    StorageGatewayClient::createTapes
 */

/**
 * @brief  Constructs a new CreateTapesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTapesResponse::CreateTapesResponse(
        const CreateTapesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new CreateTapesResponsePrivate(this), parent)
{
    setRequest(new CreateTapesRequest(request));
    setReply(reply);
}

const CreateTapesRequest * CreateTapesResponse::request() const
{
    Q_D(const CreateTapesResponse);
    return static_cast<const CreateTapesRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway CreateTapes response.
 *
 * @param  response  Response to parse.
 */
void CreateTapesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateTapesResponsePrivate
 *
 * @brief  Private implementation for CreateTapesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTapesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateTapesResponse instance.
 */
CreateTapesResponsePrivate::CreateTapesResponsePrivate(
    CreateTapesQueueResponse * const q) : CreateTapesPrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway CreateTapesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateTapesResponsePrivate::CreateTapesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTapesResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace AWS
