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

#include "getresourcesresponse.h"
#include "getresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ResourceGroupsTaggingAPI {

/**
 * @class  GetResourcesResponse
 *
 * @brief  Handles ResourceGroupsTaggingAPI GetResources responses.
 *
 * @see    ResourceGroupsTaggingAPIClient::getResources
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetResourcesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsTaggingAPIResponse(new GetResourcesResponsePrivate(this), parent)
{
    setRequest(new GetResourcesRequest(request));
    setReply(reply);
}

const GetResourcesRequest * GetResourcesResponse::request() const
{
    Q_D(const GetResourcesResponse);
    return static_cast<const GetResourcesRequest *>(d->request);
}

/**
 * @brief  Parse a ResourceGroupsTaggingAPI GetResources response.
 *
 * @param  response  Response to parse.
 */
void GetResourcesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetResourcesResponsePrivate
 *
 * @brief  Private implementation for GetResourcesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetResourcesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetResourcesResponse instance.
 */
GetResourcesResponsePrivate::GetResourcesResponsePrivate(
    GetResourcesQueueResponse * const q) : GetResourcesPrivate(q)
{

}

/**
 * @brief  Parse an ResourceGroupsTaggingAPI GetResourcesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetResourcesResponsePrivate::GetResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourcesResponse"));
    /// @todo
}
