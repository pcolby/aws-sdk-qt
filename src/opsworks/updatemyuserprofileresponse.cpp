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

#include "updatemyuserprofileresponse.h"
#include "updatemyuserprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  UpdateMyUserProfileResponse
 *
 * @brief  Handles OpsWorks UpdateMyUserProfile responses.
 *
 * @see    OpsWorksClient::updateMyUserProfile
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateMyUserProfileResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new UpdateMyUserProfileResponsePrivate(this), parent)
{
    setRequest(new UpdateMyUserProfileRequest(request));
    setReply(reply);
}

const UpdateMyUserProfileRequest * UpdateMyUserProfileResponse::request() const
{
    Q_D(const UpdateMyUserProfileResponse);
    return static_cast<const UpdateMyUserProfileRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks UpdateMyUserProfile response.
 *
 * @param  response  Response to parse.
 */
void UpdateMyUserProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateMyUserProfileResponsePrivate
 *
 * @brief  Private implementation for UpdateMyUserProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMyUserProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateMyUserProfileResponse instance.
 */
UpdateMyUserProfileResponsePrivate::UpdateMyUserProfileResponsePrivate(
    UpdateMyUserProfileQueueResponse * const q) : UpdateMyUserProfilePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks UpdateMyUserProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateMyUserProfileResponsePrivate::UpdateMyUserProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMyUserProfileResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
