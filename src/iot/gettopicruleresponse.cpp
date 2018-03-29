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

#include "gettopicruleresponse.h"
#include "gettopicruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  GetTopicRuleResponse
 *
 * @brief  Handles IoT GetTopicRule responses.
 *
 * @see    IoTClient::getTopicRule
 */

/**
 * @brief  Constructs a new GetTopicRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTopicRuleResponse::GetTopicRuleResponse(
        const GetTopicRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new GetTopicRuleResponsePrivate(this), parent)
{
    setRequest(new GetTopicRuleRequest(request));
    setReply(reply);
}

const GetTopicRuleRequest * GetTopicRuleResponse::request() const
{
    Q_D(const GetTopicRuleResponse);
    return static_cast<const GetTopicRuleRequest *>(d->request);
}

/**
 * @brief  Parse a IoT GetTopicRule response.
 *
 * @param  response  Response to parse.
 */
void GetTopicRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetTopicRuleResponsePrivate
 *
 * @brief  Private implementation for GetTopicRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTopicRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTopicRuleResponse instance.
 */
GetTopicRuleResponsePrivate::GetTopicRuleResponsePrivate(
    GetTopicRuleResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT GetTopicRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTopicRuleResponsePrivate::GetTopicRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTopicRuleResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
