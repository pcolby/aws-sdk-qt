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

#include "createqueueresponse.h"
#include "createqueueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaConvert {

/**
 * @class  CreateQueueResponse
 *
 * @brief  Handles MediaConvert CreateQueue responses.
 *
 * @see    MediaConvertClient::createQueue
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateQueueResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new CreateQueueResponsePrivate(this), parent)
{
    setRequest(new CreateQueueRequest(request));
    setReply(reply);
}

const CreateQueueRequest * CreateQueueResponse::request() const
{
    Q_D(const CreateQueueResponse);
    return static_cast<const CreateQueueRequest *>(d->request);
}

/**
 * @brief  Parse a MediaConvert CreateQueue response.
 *
 * @param  response  Response to parse.
 */
void CreateQueueResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateQueueResponsePrivate
 *
 * @brief  Private implementation for CreateQueueResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateQueueResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateQueueResponse instance.
 */
CreateQueueResponsePrivate::CreateQueueResponsePrivate(
    CreateQueueQueueResponse * const q) : CreateQueuePrivate(q)
{

}

/**
 * @brief  Parse an MediaConvert CreateQueueResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateQueueResponsePrivate::CreateQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateQueueResponse"));
    /// @todo
}

} // namespace MediaConvert
} // namespace AWS
