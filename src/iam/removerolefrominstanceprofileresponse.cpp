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

#include "removerolefrominstanceprofileresponse.h"
#include "removerolefrominstanceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  RemoveRoleFromInstanceProfileResponse
 *
 * @brief  Handles IAM RemoveRoleFromInstanceProfile responses.
 *
 * @see    IAMClient::removeRoleFromInstanceProfile
 */

/**
 * @brief  Constructs a new RemoveRoleFromInstanceProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveRoleFromInstanceProfileResponse::RemoveRoleFromInstanceProfileResponse(
        const RemoveRoleFromInstanceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new RemoveRoleFromInstanceProfileResponsePrivate(this), parent)
{
    setRequest(new RemoveRoleFromInstanceProfileRequest(request));
    setReply(reply);
}

const RemoveRoleFromInstanceProfileRequest * RemoveRoleFromInstanceProfileResponse::request() const
{
    Q_D(const RemoveRoleFromInstanceProfileResponse);
    return static_cast<const RemoveRoleFromInstanceProfileRequest *>(d->request);
}

/**
 * @brief  Parse a IAM RemoveRoleFromInstanceProfile response.
 *
 * @param  response  Response to parse.
 */
void RemoveRoleFromInstanceProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RemoveRoleFromInstanceProfileResponsePrivate
 *
 * @brief  Private implementation for RemoveRoleFromInstanceProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveRoleFromInstanceProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RemoveRoleFromInstanceProfileResponse instance.
 */
RemoveRoleFromInstanceProfileResponsePrivate::RemoveRoleFromInstanceProfileResponsePrivate(
    RemoveRoleFromInstanceProfileQueueResponse * const q) : RemoveRoleFromInstanceProfilePrivate(q)
{

}

/**
 * @brief  Parse an IAM RemoveRoleFromInstanceProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RemoveRoleFromInstanceProfileResponsePrivate::RemoveRoleFromInstanceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveRoleFromInstanceProfileResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
