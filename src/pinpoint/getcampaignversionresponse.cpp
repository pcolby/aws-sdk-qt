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

#include "getcampaignversionresponse.h"
#include "getcampaignversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/**
 * @class  GetCampaignVersionResponse
 *
 * @brief  Handles Pinpoint GetCampaignVersion responses.
 *
 * @see    PinpointClient::getCampaignVersion
 */

/**
 * @brief  Constructs a new GetCampaignVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCampaignVersionResponse::GetCampaignVersionResponse(
        const GetCampaignVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetCampaignVersionResponsePrivate(this), parent)
{
    setRequest(new GetCampaignVersionRequest(request));
    setReply(reply);
}

const GetCampaignVersionRequest * GetCampaignVersionResponse::request() const
{
    Q_D(const GetCampaignVersionResponse);
    return static_cast<const GetCampaignVersionRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetCampaignVersion response.
 *
 * @param  response  Response to parse.
 */
void GetCampaignVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetCampaignVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCampaignVersionResponsePrivate
 *
 * @brief  Private implementation for GetCampaignVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCampaignVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCampaignVersionResponse instance.
 */
GetCampaignVersionResponsePrivate::GetCampaignVersionResponsePrivate(
    GetCampaignVersionResponse * const q) : PinpointResponsePrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetCampaignVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCampaignVersionResponsePrivate::parseGetCampaignVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCampaignVersionResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
