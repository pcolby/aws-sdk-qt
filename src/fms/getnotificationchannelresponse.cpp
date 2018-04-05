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

#include "getnotificationchannelresponse.h"
#include "getnotificationchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FMS {

/**
 * @class  GetNotificationChannelResponse
 *
 * @brief  Handles FMS GetNotificationChannel responses.
 *
 * @see    FMSClient::getNotificationChannel
 */

/**
 * @brief  Constructs a new GetNotificationChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetNotificationChannelResponse::GetNotificationChannelResponse(
        const GetNotificationChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FMSResponse(new GetNotificationChannelResponsePrivate(this), parent)
{
    setRequest(new GetNotificationChannelRequest(request));
    setReply(reply);
}

const GetNotificationChannelRequest * GetNotificationChannelResponse::request() const
{
    Q_D(const GetNotificationChannelResponse);
    return static_cast<const GetNotificationChannelRequest *>(d->request);
}

/**
 * @brief  Parse a FMS GetNotificationChannel response.
 *
 * @param  response  Response to parse.
 */
void GetNotificationChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetNotificationChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetNotificationChannelResponsePrivate
 *
 * @brief  Private implementation for GetNotificationChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetNotificationChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetNotificationChannelResponse instance.
 */
GetNotificationChannelResponsePrivate::GetNotificationChannelResponsePrivate(
    GetNotificationChannelResponse * const q) : FMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an FMS GetNotificationChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetNotificationChannelResponsePrivate::parseGetNotificationChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNotificationChannelResponse"));
    /// @todo
}

} // namespace FMS
} // namespace QtAws
