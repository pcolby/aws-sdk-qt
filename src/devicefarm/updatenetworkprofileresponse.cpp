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

#include "updatenetworkprofileresponse.h"
#include "updatenetworkprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  UpdateNetworkProfileResponse
 *
 * @brief  Handles DeviceFarm UpdateNetworkProfile responses.
 *
 * @see    DeviceFarmClient::updateNetworkProfile
 */

/**
 * @brief  Constructs a new UpdateNetworkProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateNetworkProfileResponse::UpdateNetworkProfileResponse(
        const UpdateNetworkProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new UpdateNetworkProfileResponsePrivate(this), parent)
{
    setRequest(new UpdateNetworkProfileRequest(request));
    setReply(reply);
}

const UpdateNetworkProfileRequest * UpdateNetworkProfileResponse::request() const
{
    Q_D(const UpdateNetworkProfileResponse);
    return static_cast<const UpdateNetworkProfileRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm UpdateNetworkProfile response.
 *
 * @param  response  Response to parse.
 */
void UpdateNetworkProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateNetworkProfileResponsePrivate
 *
 * @brief  Private implementation for UpdateNetworkProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateNetworkProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateNetworkProfileResponse instance.
 */
UpdateNetworkProfileResponsePrivate::UpdateNetworkProfileResponsePrivate(
    UpdateNetworkProfileResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm UpdateNetworkProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateNetworkProfileResponsePrivate::UpdateNetworkProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNetworkProfileResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
