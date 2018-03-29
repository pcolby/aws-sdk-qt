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

#include "deletenetworkprofileresponse.h"
#include "deletenetworkprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  DeleteNetworkProfileResponse
 *
 * @brief  Handles DeviceFarm DeleteNetworkProfile responses.
 *
 * @see    DeviceFarmClient::deleteNetworkProfile
 */

/**
 * @brief  Constructs a new DeleteNetworkProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteNetworkProfileResponse::DeleteNetworkProfileResponse(
        const DeleteNetworkProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new DeleteNetworkProfileResponsePrivate(this), parent)
{
    setRequest(new DeleteNetworkProfileRequest(request));
    setReply(reply);
}

const DeleteNetworkProfileRequest * DeleteNetworkProfileResponse::request() const
{
    Q_D(const DeleteNetworkProfileResponse);
    return static_cast<const DeleteNetworkProfileRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm DeleteNetworkProfile response.
 *
 * @param  response  Response to parse.
 */
void DeleteNetworkProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteNetworkProfileResponsePrivate
 *
 * @brief  Private implementation for DeleteNetworkProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNetworkProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteNetworkProfileResponse instance.
 */
DeleteNetworkProfileResponsePrivate::DeleteNetworkProfileResponsePrivate(
    DeleteNetworkProfileQueueResponse * const q) : DeleteNetworkProfilePrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm DeleteNetworkProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteNetworkProfileResponsePrivate::DeleteNetworkProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNetworkProfileResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
