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

#include "getdiskresponse.h"
#include "getdiskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  GetDiskResponse
 *
 * @brief  Handles Lightsail GetDisk responses.
 *
 * @see    LightsailClient::getDisk
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDiskResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetDiskResponsePrivate(this), parent)
{
    setRequest(new GetDiskRequest(request));
    setReply(reply);
}

const GetDiskRequest * GetDiskResponse::request() const
{
    Q_D(const GetDiskResponse);
    return static_cast<const GetDiskRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetDisk response.
 *
 * @param  response  Response to parse.
 */
void GetDiskResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDiskResponsePrivate
 *
 * @brief  Private implementation for GetDiskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDiskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDiskResponse instance.
 */
GetDiskResponsePrivate::GetDiskResponsePrivate(
    GetDiskQueueResponse * const q) : GetDiskPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetDiskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDiskResponsePrivate::GetDiskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDiskResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
