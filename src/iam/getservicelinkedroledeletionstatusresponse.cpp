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

#include "getservicelinkedroledeletionstatusresponse.h"
#include "getservicelinkedroledeletionstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  GetServiceLinkedRoleDeletionStatusResponse
 *
 * @brief  Handles IAM GetServiceLinkedRoleDeletionStatus responses.
 *
 * @see    IAMClient::getServiceLinkedRoleDeletionStatus
 */

/**
 * @brief  Constructs a new GetServiceLinkedRoleDeletionStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetServiceLinkedRoleDeletionStatusResponse::GetServiceLinkedRoleDeletionStatusResponse(
        const GetServiceLinkedRoleDeletionStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new GetServiceLinkedRoleDeletionStatusResponsePrivate(this), parent)
{
    setRequest(new GetServiceLinkedRoleDeletionStatusRequest(request));
    setReply(reply);
}

const GetServiceLinkedRoleDeletionStatusRequest * GetServiceLinkedRoleDeletionStatusResponse::request() const
{
    Q_D(const GetServiceLinkedRoleDeletionStatusResponse);
    return static_cast<const GetServiceLinkedRoleDeletionStatusRequest *>(d->request);
}

/**
 * @brief  Parse a IAM GetServiceLinkedRoleDeletionStatus response.
 *
 * @param  response  Response to parse.
 */
void GetServiceLinkedRoleDeletionStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetServiceLinkedRoleDeletionStatusResponsePrivate
 *
 * @brief  Private implementation for GetServiceLinkedRoleDeletionStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetServiceLinkedRoleDeletionStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetServiceLinkedRoleDeletionStatusResponse instance.
 */
GetServiceLinkedRoleDeletionStatusResponsePrivate::GetServiceLinkedRoleDeletionStatusResponsePrivate(
    GetServiceLinkedRoleDeletionStatusQueueResponse * const q) : GetServiceLinkedRoleDeletionStatusPrivate(q)
{

}

/**
 * @brief  Parse an IAM GetServiceLinkedRoleDeletionStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetServiceLinkedRoleDeletionStatusResponsePrivate::GetServiceLinkedRoleDeletionStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServiceLinkedRoleDeletionStatusResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
