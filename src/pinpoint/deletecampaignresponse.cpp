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

#include "deletecampaignresponse.h"
#include "deletecampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  DeleteCampaignResponse
 *
 * @brief  Handles Pinpoint DeleteCampaign responses.
 *
 * @see    PinpointClient::deleteCampaign
 */

/**
 * @brief  Constructs a new DeleteCampaignResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCampaignResponse::DeleteCampaignResponse(
        const DeleteCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteCampaignResponsePrivate(this), parent)
{
    setRequest(new DeleteCampaignRequest(request));
    setReply(reply);
}

const DeleteCampaignRequest * DeleteCampaignResponse::request() const
{
    Q_D(const DeleteCampaignResponse);
    return static_cast<const DeleteCampaignRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint DeleteCampaign response.
 *
 * @param  response  Response to parse.
 */
void DeleteCampaignResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteCampaignResponsePrivate
 *
 * @brief  Private implementation for DeleteCampaignResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCampaignResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteCampaignResponse instance.
 */
DeleteCampaignResponsePrivate::DeleteCampaignResponsePrivate(
    DeleteCampaignQueueResponse * const q) : DeleteCampaignPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint DeleteCampaignResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteCampaignResponsePrivate::DeleteCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCampaignResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace AWS
