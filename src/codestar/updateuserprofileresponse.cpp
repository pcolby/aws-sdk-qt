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

#include "updateuserprofileresponse.h"
#include "updateuserprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeStar {

/**
 * @class  UpdateUserProfileResponse
 *
 * @brief  Handles CodeStar UpdateUserProfile responses.
 *
 * @see    CodeStarClient::updateUserProfile
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateUserProfileResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeStarResponse(new UpdateUserProfileResponsePrivate(this), parent)
{
    setRequest(new UpdateUserProfileRequest(request));
    setReply(reply);
}

const UpdateUserProfileRequest * UpdateUserProfileResponse::request() const
{
    Q_D(const UpdateUserProfileResponse);
    return static_cast<const UpdateUserProfileRequest *>(d->request);
}

/**
 * @brief  Parse a CodeStar UpdateUserProfile response.
 *
 * @param  response  Response to parse.
 */
void UpdateUserProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateUserProfileResponsePrivate
 *
 * @brief  Private implementation for UpdateUserProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUserProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateUserProfileResponse instance.
 */
UpdateUserProfileResponsePrivate::UpdateUserProfileResponsePrivate(
    UpdateUserProfileQueueResponse * const q) : UpdateUserProfilePrivate(q)
{

}

/**
 * @brief  Parse an CodeStar UpdateUserProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateUserProfileResponsePrivate::UpdateUserProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUserProfileResponse"));
    /// @todo
}

} // namespace CodeStar
} // namespace AWS
