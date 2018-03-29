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

#include "getappsresponse.h"
#include "getappsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetAppsResponse
 *
 * @brief  Handles Pinpoint GetApps responses.
 *
 * @see    PinpointClient::getApps
 */

/**
 * @brief  Constructs a new GetAppsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAppsResponse::GetAppsResponse(
        const GetAppsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetAppsResponsePrivate(this), parent)
{
    setRequest(new GetAppsRequest(request));
    setReply(reply);
}

const GetAppsRequest * GetAppsResponse::request() const
{
    Q_D(const GetAppsResponse);
    return static_cast<const GetAppsRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetApps response.
 *
 * @param  response  Response to parse.
 */
void GetAppsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAppsResponsePrivate
 *
 * @brief  Private implementation for GetAppsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAppsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAppsResponse instance.
 */
GetAppsResponsePrivate::GetAppsResponsePrivate(
    GetAppsQueueResponse * const q) : GetAppsPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetAppsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAppsResponsePrivate::GetAppsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAppsResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace AWS
