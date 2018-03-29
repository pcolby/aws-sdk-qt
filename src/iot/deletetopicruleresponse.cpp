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

#include "deletetopicruleresponse.h"
#include "deletetopicruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  DeleteTopicRuleResponse
 *
 * @brief  Handles IoT DeleteTopicRule responses.
 *
 * @see    IoTClient::deleteTopicRule
 */

/**
 * @brief  Constructs a new DeleteTopicRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTopicRuleResponse::DeleteTopicRuleResponse(
        const DeleteTopicRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DeleteTopicRuleResponsePrivate(this), parent)
{
    setRequest(new DeleteTopicRuleRequest(request));
    setReply(reply);
}

const DeleteTopicRuleRequest * DeleteTopicRuleResponse::request() const
{
    Q_D(const DeleteTopicRuleResponse);
    return static_cast<const DeleteTopicRuleRequest *>(d->request);
}

/**
 * @brief  Parse a IoT DeleteTopicRule response.
 *
 * @param  response  Response to parse.
 */
void DeleteTopicRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteTopicRuleResponsePrivate
 *
 * @brief  Private implementation for DeleteTopicRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTopicRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteTopicRuleResponse instance.
 */
DeleteTopicRuleResponsePrivate::DeleteTopicRuleResponsePrivate(
    DeleteTopicRuleQueueResponse * const q) : DeleteTopicRulePrivate(q)
{

}

/**
 * @brief  Parse an IoT DeleteTopicRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteTopicRuleResponsePrivate::DeleteTopicRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTopicRuleResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
