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

#include "deleteattributesresponse.h"
#include "deleteattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECS {

/**
 * @class  DeleteAttributesResponse
 *
 * @brief  Handles ECS DeleteAttributes responses.
 *
 * @see    ECSClient::deleteAttributes
 */

/**
 * @brief  Constructs a new DeleteAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteAttributesResponse::DeleteAttributesResponse(
        const DeleteAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new DeleteAttributesResponsePrivate(this), parent)
{
    setRequest(new DeleteAttributesRequest(request));
    setReply(reply);
}

const DeleteAttributesRequest * DeleteAttributesResponse::request() const
{
    Q_D(const DeleteAttributesResponse);
    return static_cast<const DeleteAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a ECS DeleteAttributes response.
 *
 * @param  response  Response to parse.
 */
void DeleteAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteAttributesResponsePrivate
 *
 * @brief  Private implementation for DeleteAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteAttributesResponse instance.
 */
DeleteAttributesResponsePrivate::DeleteAttributesResponsePrivate(
    DeleteAttributesQueueResponse * const q) : DeleteAttributesPrivate(q)
{

}

/**
 * @brief  Parse an ECS DeleteAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteAttributesResponsePrivate::DeleteAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAttributesResponse"));
    /// @todo
}

} // namespace ECS
} // namespace AWS
