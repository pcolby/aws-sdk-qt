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

#include "gettopicattributesresponse.h"
#include "gettopicattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SNS {

/**
 * @class  GetTopicAttributesResponse
 *
 * @brief  Handles SNS GetTopicAttributes responses.
 *
 * @see    SNSClient::getTopicAttributes
 */

/**
 * @brief  Constructs a new GetTopicAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTopicAttributesResponse::GetTopicAttributesResponse(
        const GetTopicAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new GetTopicAttributesResponsePrivate(this), parent)
{
    setRequest(new GetTopicAttributesRequest(request));
    setReply(reply);
}

const GetTopicAttributesRequest * GetTopicAttributesResponse::request() const
{
    Q_D(const GetTopicAttributesResponse);
    return static_cast<const GetTopicAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a SNS GetTopicAttributes response.
 *
 * @param  response  Response to parse.
 */
void GetTopicAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetTopicAttributesResponsePrivate
 *
 * @brief  Private implementation for GetTopicAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTopicAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTopicAttributesResponse instance.
 */
GetTopicAttributesResponsePrivate::GetTopicAttributesResponsePrivate(
    GetTopicAttributesQueueResponse * const q) : GetTopicAttributesPrivate(q)
{

}

/**
 * @brief  Parse an SNS GetTopicAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTopicAttributesResponsePrivate::GetTopicAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTopicAttributesResponse"));
    /// @todo
}

} // namespace SNS
} // namespace QtAws
