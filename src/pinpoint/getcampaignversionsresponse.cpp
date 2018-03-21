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

#include "getcampaignversionsresponse.h"
#include "getcampaignversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetCampaignVersionsResponse
 *
 * @brief  Handles Pinpoint GetCampaignVersions responses.
 *
 * @see    PinpointClient::getCampaignVersions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCampaignVersionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetCampaignVersionsResponsePrivate(this), parent)
{
    setRequest(new GetCampaignVersionsRequest(request));
    setReply(reply);
}

const GetCampaignVersionsRequest * GetCampaignVersionsResponse::request() const
{
    Q_D(const GetCampaignVersionsResponse);
    return static_cast<const GetCampaignVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetCampaignVersions response.
 *
 * @param  response  Response to parse.
 */
void GetCampaignVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCampaignVersionsResponsePrivate
 *
 * @brief  Private implementation for GetCampaignVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCampaignVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCampaignVersionsResponse instance.
 */
GetCampaignVersionsResponsePrivate::GetCampaignVersionsResponsePrivate(
    GetCampaignVersionsQueueResponse * const q) : GetCampaignVersionsPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetCampaignVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCampaignVersionsResponsePrivate::GetCampaignVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCampaignVersionsResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace AWS
