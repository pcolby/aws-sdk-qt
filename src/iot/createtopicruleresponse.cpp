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

#include "createtopicruleresponse.h"
#include "createtopicruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  CreateTopicRuleResponse
 *
 * @brief  Handles IoT CreateTopicRule responses.
 *
 * @see    IoTClient::createTopicRule
 */

/**
 * @brief  Constructs a new CreateTopicRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTopicRuleResponse::CreateTopicRuleResponse(
        const CreateTopicRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateTopicRuleResponse(new CreateTopicRuleResponsePrivate(this), parent)
{
    setRequest(new CreateTopicRuleRequest(request));
    setReply(reply);
}

const CreateTopicRuleRequest * CreateTopicRuleResponse::request() const
{
    Q_D(const CreateTopicRuleResponse);
    return static_cast<const CreateTopicRuleRequest *>(d->request);
}

/**
 * @brief  Parse a IoT CreateTopicRule response.
 *
 * @param  response  Response to parse.
 */
void CreateTopicRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateTopicRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateTopicRuleResponsePrivate
 *
 * @brief  Private implementation for CreateTopicRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTopicRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateTopicRuleResponse instance.
 */
CreateTopicRuleResponsePrivate::CreateTopicRuleResponsePrivate(
    CreateTopicRuleResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT CreateTopicRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateTopicRuleResponsePrivate::parseCreateTopicRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTopicRuleResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
