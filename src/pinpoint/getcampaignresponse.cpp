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

#include "getcampaignresponse.h"
#include "getcampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetCampaignResponse
 *
 * @brief  Handles Pinpoint GetCampaign responses.
 *
 * @see    PinpointClient::getCampaign
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCampaignResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetCampaignResponsePrivate(this), parent)
{
    setRequest(new GetCampaignRequest(request));
    setReply(reply);
}

const GetCampaignRequest * GetCampaignResponse::request() const
{
    Q_D(const GetCampaignResponse);
    return static_cast<const GetCampaignRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetCampaign response.
 *
 * @param  response  Response to parse.
 */
void GetCampaignResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCampaignResponsePrivate
 *
 * @brief  Private implementation for GetCampaignResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCampaignResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCampaignResponse instance.
 */
GetCampaignResponsePrivate::GetCampaignResponsePrivate(
    GetCampaignQueueResponse * const q) : GetCampaignPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetCampaignResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCampaignResponsePrivate::GetCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCampaignResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace AWS
