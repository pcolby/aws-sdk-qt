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

#include "createremoteaccesssessionresponse.h"
#include "createremoteaccesssessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DeviceFarm {

/**
 * @class  CreateRemoteAccessSessionResponse
 *
 * @brief  Handles DeviceFarm CreateRemoteAccessSession responses.
 *
 * @see    DeviceFarmClient::createRemoteAccessSession
 */

/**
 * @brief  Constructs a new CreateRemoteAccessSessionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateRemoteAccessSessionResponse::CreateRemoteAccessSessionResponse(
        const CreateRemoteAccessSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new CreateRemoteAccessSessionResponsePrivate(this), parent)
{
    setRequest(new CreateRemoteAccessSessionRequest(request));
    setReply(reply);
}

const CreateRemoteAccessSessionRequest * CreateRemoteAccessSessionResponse::request() const
{
    Q_D(const CreateRemoteAccessSessionResponse);
    return static_cast<const CreateRemoteAccessSessionRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm CreateRemoteAccessSession response.
 *
 * @param  response  Response to parse.
 */
void CreateRemoteAccessSessionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateRemoteAccessSessionResponsePrivate
 *
 * @brief  Private implementation for CreateRemoteAccessSessionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRemoteAccessSessionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateRemoteAccessSessionResponse instance.
 */
CreateRemoteAccessSessionResponsePrivate::CreateRemoteAccessSessionResponsePrivate(
    CreateRemoteAccessSessionQueueResponse * const q) : CreateRemoteAccessSessionPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm CreateRemoteAccessSessionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateRemoteAccessSessionResponsePrivate::CreateRemoteAccessSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRemoteAccessSessionResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace AWS
