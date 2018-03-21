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

#include "attachnetworkinterfaceresponse.h"
#include "attachnetworkinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  AttachNetworkInterfaceResponse
 *
 * @brief  Handles EC2 AttachNetworkInterface responses.
 *
 * @see    EC2Client::attachNetworkInterface
 */

/**
 * @brief  Constructs a new AttachNetworkInterfaceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachNetworkInterfaceResponse::AttachNetworkInterfaceResponse(
        const AttachNetworkInterfaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new AttachNetworkInterfaceResponsePrivate(this), parent)
{
    setRequest(new AttachNetworkInterfaceRequest(request));
    setReply(reply);
}

const AttachNetworkInterfaceRequest * AttachNetworkInterfaceResponse::request() const
{
    Q_D(const AttachNetworkInterfaceResponse);
    return static_cast<const AttachNetworkInterfaceRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 AttachNetworkInterface response.
 *
 * @param  response  Response to parse.
 */
void AttachNetworkInterfaceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AttachNetworkInterfaceResponsePrivate
 *
 * @brief  Private implementation for AttachNetworkInterfaceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachNetworkInterfaceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AttachNetworkInterfaceResponse instance.
 */
AttachNetworkInterfaceResponsePrivate::AttachNetworkInterfaceResponsePrivate(
    AttachNetworkInterfaceQueueResponse * const q) : AttachNetworkInterfacePrivate(q)
{

}

/**
 * @brief  Parse an EC2 AttachNetworkInterfaceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AttachNetworkInterfaceResponsePrivate::AttachNetworkInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachNetworkInterfaceResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
