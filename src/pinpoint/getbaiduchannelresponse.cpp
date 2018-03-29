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

#include "getbaiduchannelresponse.h"
#include "getbaiduchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/**
 * @class  GetBaiduChannelResponse
 *
 * @brief  Handles Pinpoint GetBaiduChannel responses.
 *
 * @see    PinpointClient::getBaiduChannel
 */

/**
 * @brief  Constructs a new GetBaiduChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBaiduChannelResponse::GetBaiduChannelResponse(
        const GetBaiduChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetBaiduChannelResponsePrivate(this), parent)
{
    setRequest(new GetBaiduChannelRequest(request));
    setReply(reply);
}

const GetBaiduChannelRequest * GetBaiduChannelResponse::request() const
{
    Q_D(const GetBaiduChannelResponse);
    return static_cast<const GetBaiduChannelRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetBaiduChannel response.
 *
 * @param  response  Response to parse.
 */
void GetBaiduChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBaiduChannelResponsePrivate
 *
 * @brief  Private implementation for GetBaiduChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBaiduChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBaiduChannelResponse instance.
 */
GetBaiduChannelResponsePrivate::GetBaiduChannelResponsePrivate(
    GetBaiduChannelQueueResponse * const q) : GetBaiduChannelPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetBaiduChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBaiduChannelResponsePrivate::GetBaiduChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBaiduChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
