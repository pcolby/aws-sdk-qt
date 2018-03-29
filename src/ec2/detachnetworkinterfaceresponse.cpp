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

#include "detachnetworkinterfaceresponse.h"
#include "detachnetworkinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DetachNetworkInterfaceResponse
 *
 * @brief  Handles EC2 DetachNetworkInterface responses.
 *
 * @see    EC2Client::detachNetworkInterface
 */

/**
 * @brief  Constructs a new DetachNetworkInterfaceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachNetworkInterfaceResponse::DetachNetworkInterfaceResponse(
        const DetachNetworkInterfaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DetachNetworkInterfaceResponsePrivate(this), parent)
{
    setRequest(new DetachNetworkInterfaceRequest(request));
    setReply(reply);
}

const DetachNetworkInterfaceRequest * DetachNetworkInterfaceResponse::request() const
{
    Q_D(const DetachNetworkInterfaceResponse);
    return static_cast<const DetachNetworkInterfaceRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DetachNetworkInterface response.
 *
 * @param  response  Response to parse.
 */
void DetachNetworkInterfaceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetachNetworkInterfaceResponsePrivate
 *
 * @brief  Private implementation for DetachNetworkInterfaceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachNetworkInterfaceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachNetworkInterfaceResponse instance.
 */
DetachNetworkInterfaceResponsePrivate::DetachNetworkInterfaceResponsePrivate(
    DetachNetworkInterfaceQueueResponse * const q) : DetachNetworkInterfacePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DetachNetworkInterfaceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachNetworkInterfaceResponsePrivate::DetachNetworkInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachNetworkInterfaceResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
