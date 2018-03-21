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

#include "listtopicrulesresponse.h"
#include "listtopicrulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  ListTopicRulesResponse
 *
 * @brief  Handles IoT ListTopicRules responses.
 *
 * @see    IoTClient::listTopicRules
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTopicRulesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListTopicRulesResponsePrivate(this), parent)
{
    setRequest(new ListTopicRulesRequest(request));
    setReply(reply);
}

const ListTopicRulesRequest * ListTopicRulesResponse::request() const
{
    Q_D(const ListTopicRulesResponse);
    return static_cast<const ListTopicRulesRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListTopicRules response.
 *
 * @param  response  Response to parse.
 */
void ListTopicRulesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTopicRulesResponsePrivate
 *
 * @brief  Private implementation for ListTopicRulesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTopicRulesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTopicRulesResponse instance.
 */
ListTopicRulesResponsePrivate::ListTopicRulesResponsePrivate(
    ListTopicRulesQueueResponse * const q) : ListTopicRulesPrivate(q)
{

}

/**
 * @brief  Parse an IoT ListTopicRulesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTopicRulesResponsePrivate::ListTopicRulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTopicRulesResponse"));
    /// @todo
}
