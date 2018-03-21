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

#include "updatepartitionresponse.h"
#include "updatepartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  UpdatePartitionResponse
 *
 * @brief  Handles Glue UpdatePartition responses.
 *
 * @see    GlueClient::updatePartition
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdatePartitionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdatePartitionResponsePrivate(this), parent)
{
    setRequest(new UpdatePartitionRequest(request));
    setReply(reply);
}

const UpdatePartitionRequest * UpdatePartitionResponse::request() const
{
    Q_D(const UpdatePartitionResponse);
    return static_cast<const UpdatePartitionRequest *>(d->request);
}

/**
 * @brief  Parse a Glue UpdatePartition response.
 *
 * @param  response  Response to parse.
 */
void UpdatePartitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdatePartitionResponsePrivate
 *
 * @brief  Private implementation for UpdatePartitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePartitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdatePartitionResponse instance.
 */
UpdatePartitionResponsePrivate::UpdatePartitionResponsePrivate(
    UpdatePartitionQueueResponse * const q) : UpdatePartitionPrivate(q)
{

}

/**
 * @brief  Parse an Glue UpdatePartitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdatePartitionResponsePrivate::UpdatePartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePartitionResponse"));
    /// @todo
}
