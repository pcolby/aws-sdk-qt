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

#include "settopicattributesresponse.h"
#include "settopicattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SNS {

/**
 * @class  SetTopicAttributesResponse
 *
 * @brief  Handles SNS SetTopicAttributes responses.
 *
 * @see    SNSClient::setTopicAttributes
 */

/**
 * @brief  Constructs a new SetTopicAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetTopicAttributesResponse::SetTopicAttributesResponse(
        const SetTopicAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new SetTopicAttributesResponsePrivate(this), parent)
{
    setRequest(new SetTopicAttributesRequest(request));
    setReply(reply);
}

const SetTopicAttributesRequest * SetTopicAttributesResponse::request() const
{
    Q_D(const SetTopicAttributesResponse);
    return static_cast<const SetTopicAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a SNS SetTopicAttributes response.
 *
 * @param  response  Response to parse.
 */
void SetTopicAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetTopicAttributesResponsePrivate
 *
 * @brief  Private implementation for SetTopicAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetTopicAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetTopicAttributesResponse instance.
 */
SetTopicAttributesResponsePrivate::SetTopicAttributesResponsePrivate(
    SetTopicAttributesQueueResponse * const q) : SetTopicAttributesPrivate(q)
{

}

/**
 * @brief  Parse an SNS SetTopicAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetTopicAttributesResponsePrivate::SetTopicAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetTopicAttributesResponse"));
    /// @todo
}

} // namespace SNS
} // namespace AWS
