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

#include "getcampaignsresponse.h"
#include "getcampaignsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/**
 * @class  GetCampaignsResponse
 *
 * @brief  Handles Pinpoint GetCampaigns responses.
 *
 * @see    PinpointClient::getCampaigns
 */

/**
 * @brief  Constructs a new GetCampaignsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCampaignsResponse::GetCampaignsResponse(
        const GetCampaignsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetCampaignsResponse(new GetCampaignsResponsePrivate(this), parent)
{
    setRequest(new GetCampaignsRequest(request));
    setReply(reply);
}

const GetCampaignsRequest * GetCampaignsResponse::request() const
{
    Q_D(const GetCampaignsResponse);
    return static_cast<const GetCampaignsRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetCampaigns response.
 *
 * @param  response  Response to parse.
 */
void GetCampaignsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetCampaignsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCampaignsResponsePrivate
 *
 * @brief  Private implementation for GetCampaignsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCampaignsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCampaignsResponse instance.
 */
GetCampaignsResponsePrivate::GetCampaignsResponsePrivate(
    GetCampaignsResponse * const q) : PinpointResponsePrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetCampaignsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCampaignsResponsePrivate::parseGetCampaignsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCampaignsResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
