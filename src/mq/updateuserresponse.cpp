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

#include "updateuserresponse.h"
#include "updateuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/**
 * @class  UpdateUserResponse
 *
 * @brief  Handles MQ UpdateUser responses.
 *
 * @see    MQClient::updateUser
 */

/**
 * @brief  Constructs a new UpdateUserResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateUserResponse::UpdateUserResponse(
        const UpdateUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MQResponse(new UpdateUserResponsePrivate(this), parent)
{
    setRequest(new UpdateUserRequest(request));
    setReply(reply);
}

const UpdateUserRequest * UpdateUserResponse::request() const
{
    Q_D(const UpdateUserResponse);
    return static_cast<const UpdateUserRequest *>(d->request);
}

/**
 * @brief  Parse a MQ UpdateUser response.
 *
 * @param  response  Response to parse.
 */
void UpdateUserResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateUserResponsePrivate
 *
 * @brief  Private implementation for UpdateUserResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUserResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateUserResponse instance.
 */
UpdateUserResponsePrivate::UpdateUserResponsePrivate(
    UpdateUserQueueResponse * const q) : UpdateUserPrivate(q)
{

}

/**
 * @brief  Parse an MQ UpdateUserResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateUserResponsePrivate::UpdateUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUserResponse"));
    /// @todo
}

} // namespace MQ
} // namespace QtAws
