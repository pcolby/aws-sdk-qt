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

#include "createqueueresponse.h"
#include "createqueueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/**
 * @class  CreateQueueResponse
 *
 * @brief  Handles MediaConvert CreateQueue responses.
 *
 * @see    MediaConvertClient::createQueue
 */

/**
 * @brief  Constructs a new CreateQueueResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateQueueResponse::CreateQueueResponse(
        const CreateQueueRequest &request,
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
    Q_D(CreateQueueResponse);
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
    CreateQueueResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/**
 * @brief  Parse an MediaConvert CreateQueueResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateQueueResponsePrivate::parseCreateQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateQueueResponse"));
    /// @todo
}

} // namespace MediaConvert
} // namespace QtAws
