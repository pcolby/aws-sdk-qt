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

#include "gettestresponse.h"
#include "gettestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DeviceFarm {

/**
 * @class  GetTestResponse
 *
 * @brief  Handles DeviceFarm GetTest responses.
 *
 * @see    DeviceFarmClient::getTest
 */

/**
 * @brief  Constructs a new GetTestResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTestResponse::GetTestResponse(
        const GetTestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetTestResponsePrivate(this), parent)
{
    setRequest(new GetTestRequest(request));
    setReply(reply);
}

const GetTestRequest * GetTestResponse::request() const
{
    Q_D(const GetTestResponse);
    return static_cast<const GetTestRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm GetTest response.
 *
 * @param  response  Response to parse.
 */
void GetTestResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetTestResponsePrivate
 *
 * @brief  Private implementation for GetTestResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTestResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTestResponse instance.
 */
GetTestResponsePrivate::GetTestResponsePrivate(
    GetTestQueueResponse * const q) : GetTestPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm GetTestResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTestResponsePrivate::GetTestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTestResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace AWS
