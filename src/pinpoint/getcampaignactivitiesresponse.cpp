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

#include "getcampaignactivitiesresponse.h"
#include "getcampaignactivitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/**
 * @class  GetCampaignActivitiesResponse
 *
 * @brief  Handles Pinpoint GetCampaignActivities responses.
 *
 * @see    PinpointClient::getCampaignActivities
 */

/**
 * @brief  Constructs a new GetCampaignActivitiesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCampaignActivitiesResponse::GetCampaignActivitiesResponse(
        const GetCampaignActivitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetCampaignActivitiesResponsePrivate(this), parent)
{
    setRequest(new GetCampaignActivitiesRequest(request));
    setReply(reply);
}

const GetCampaignActivitiesRequest * GetCampaignActivitiesResponse::request() const
{
    Q_D(const GetCampaignActivitiesResponse);
    return static_cast<const GetCampaignActivitiesRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetCampaignActivities response.
 *
 * @param  response  Response to parse.
 */
void GetCampaignActivitiesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCampaignActivitiesResponsePrivate
 *
 * @brief  Private implementation for GetCampaignActivitiesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCampaignActivitiesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCampaignActivitiesResponse instance.
 */
GetCampaignActivitiesResponsePrivate::GetCampaignActivitiesResponsePrivate(
    GetCampaignActivitiesQueueResponse * const q) : GetCampaignActivitiesPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetCampaignActivitiesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCampaignActivitiesResponsePrivate::GetCampaignActivitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCampaignActivitiesResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
