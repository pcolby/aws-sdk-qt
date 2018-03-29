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

#include "getnetworkprofileresponse.h"
#include "getnetworkprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  GetNetworkProfileResponse
 *
 * @brief  Handles DeviceFarm GetNetworkProfile responses.
 *
 * @see    DeviceFarmClient::getNetworkProfile
 */

/**
 * @brief  Constructs a new GetNetworkProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetNetworkProfileResponse::GetNetworkProfileResponse(
        const GetNetworkProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetNetworkProfileResponsePrivate(this), parent)
{
    setRequest(new GetNetworkProfileRequest(request));
    setReply(reply);
}

const GetNetworkProfileRequest * GetNetworkProfileResponse::request() const
{
    Q_D(const GetNetworkProfileResponse);
    return static_cast<const GetNetworkProfileRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm GetNetworkProfile response.
 *
 * @param  response  Response to parse.
 */
void GetNetworkProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetNetworkProfileResponsePrivate
 *
 * @brief  Private implementation for GetNetworkProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetNetworkProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetNetworkProfileResponse instance.
 */
GetNetworkProfileResponsePrivate::GetNetworkProfileResponsePrivate(
    GetNetworkProfileResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm GetNetworkProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetNetworkProfileResponsePrivate::GetNetworkProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNetworkProfileResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
