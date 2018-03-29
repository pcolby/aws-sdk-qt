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

#include "createcampaignresponse.h"
#include "createcampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  CreateCampaignResponse
 *
 * @brief  Handles Pinpoint CreateCampaign responses.
 *
 * @see    PinpointClient::createCampaign
 */

/**
 * @brief  Constructs a new CreateCampaignResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCampaignResponse::CreateCampaignResponse(
        const CreateCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateCampaignResponsePrivate(this), parent)
{
    setRequest(new CreateCampaignRequest(request));
    setReply(reply);
}

const CreateCampaignRequest * CreateCampaignResponse::request() const
{
    Q_D(const CreateCampaignResponse);
    return static_cast<const CreateCampaignRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint CreateCampaign response.
 *
 * @param  response  Response to parse.
 */
void CreateCampaignResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateCampaignResponsePrivate
 *
 * @brief  Private implementation for CreateCampaignResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCampaignResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCampaignResponse instance.
 */
CreateCampaignResponsePrivate::CreateCampaignResponsePrivate(
    CreateCampaignQueueResponse * const q) : CreateCampaignPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint CreateCampaignResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCampaignResponsePrivate::CreateCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCampaignResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace AWS
