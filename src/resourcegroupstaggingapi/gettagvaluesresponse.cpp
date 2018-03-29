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

#include "gettagvaluesresponse.h"
#include "gettagvaluesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ResourceGroupsTaggingAPI {

/**
 * @class  GetTagValuesResponse
 *
 * @brief  Handles ResourceGroupsTaggingAPI GetTagValues responses.
 *
 * @see    ResourceGroupsTaggingAPIClient::getTagValues
 */

/**
 * @brief  Constructs a new GetTagValuesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTagValuesResponse::GetTagValuesResponse(
        const GetTagValuesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsTaggingAPIResponse(new GetTagValuesResponsePrivate(this), parent)
{
    setRequest(new GetTagValuesRequest(request));
    setReply(reply);
}

const GetTagValuesRequest * GetTagValuesResponse::request() const
{
    Q_D(const GetTagValuesResponse);
    return static_cast<const GetTagValuesRequest *>(d->request);
}

/**
 * @brief  Parse a ResourceGroupsTaggingAPI GetTagValues response.
 *
 * @param  response  Response to parse.
 */
void GetTagValuesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetTagValuesResponsePrivate
 *
 * @brief  Private implementation for GetTagValuesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTagValuesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTagValuesResponse instance.
 */
GetTagValuesResponsePrivate::GetTagValuesResponsePrivate(
    GetTagValuesQueueResponse * const q) : GetTagValuesPrivate(q)
{

}

/**
 * @brief  Parse an ResourceGroupsTaggingAPI GetTagValuesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTagValuesResponsePrivate::GetTagValuesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTagValuesResponse"));
    /// @todo
}

} // namespace ResourceGroupsTaggingAPI
} // namespace AWS
