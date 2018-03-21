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

#include "createtopicresponse.h"
#include "createtopicresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SNS {

/**
 * @class  CreateTopicResponse
 *
 * @brief  Handles SNS CreateTopic responses.
 *
 * @see    SNSClient::createTopic
 */

/**
 * @brief  Constructs a new CreateTopicResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTopicResponse::CreateTopicResponse(
        const CreateTopicRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new CreateTopicResponsePrivate(this), parent)
{
    setRequest(new CreateTopicRequest(request));
    setReply(reply);
}

const CreateTopicRequest * CreateTopicResponse::request() const
{
    Q_D(const CreateTopicResponse);
    return static_cast<const CreateTopicRequest *>(d->request);
}

/**
 * @brief  Parse a SNS CreateTopic response.
 *
 * @param  response  Response to parse.
 */
void CreateTopicResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateTopicResponsePrivate
 *
 * @brief  Private implementation for CreateTopicResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTopicResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateTopicResponse instance.
 */
CreateTopicResponsePrivate::CreateTopicResponsePrivate(
    CreateTopicQueueResponse * const q) : CreateTopicPrivate(q)
{

}

/**
 * @brief  Parse an SNS CreateTopicResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateTopicResponsePrivate::CreateTopicResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTopicResponse"));
    /// @todo
}

} // namespace SNS
} // namespace AWS
