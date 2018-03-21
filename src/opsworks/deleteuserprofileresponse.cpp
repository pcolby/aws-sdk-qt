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

#include "deleteuserprofileresponse.h"
#include "deleteuserprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  DeleteUserProfileResponse
 *
 * @brief  Handles OpsWorks DeleteUserProfile responses.
 *
 * @see    OpsWorksClient::deleteUserProfile
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteUserProfileResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DeleteUserProfileResponsePrivate(this), parent)
{
    setRequest(new DeleteUserProfileRequest(request));
    setReply(reply);
}

const DeleteUserProfileRequest * DeleteUserProfileResponse::request() const
{
    Q_D(const DeleteUserProfileResponse);
    return static_cast<const DeleteUserProfileRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DeleteUserProfile response.
 *
 * @param  response  Response to parse.
 */
void DeleteUserProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteUserProfileResponsePrivate
 *
 * @brief  Private implementation for DeleteUserProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUserProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteUserProfileResponse instance.
 */
DeleteUserProfileResponsePrivate::DeleteUserProfileResponsePrivate(
    DeleteUserProfileQueueResponse * const q) : DeleteUserProfilePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DeleteUserProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteUserProfileResponsePrivate::DeleteUserProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserProfileResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
