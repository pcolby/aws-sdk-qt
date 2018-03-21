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

#include "allocatehostsresponse.h"
#include "allocatehostsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  AllocateHostsResponse
 *
 * @brief  Handles EC2 AllocateHosts responses.
 *
 * @see    EC2Client::allocateHosts
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AllocateHostsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new AllocateHostsResponsePrivate(this), parent)
{
    setRequest(new AllocateHostsRequest(request));
    setReply(reply);
}

const AllocateHostsRequest * AllocateHostsResponse::request() const
{
    Q_D(const AllocateHostsResponse);
    return static_cast<const AllocateHostsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 AllocateHosts response.
 *
 * @param  response  Response to parse.
 */
void AllocateHostsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AllocateHostsResponsePrivate
 *
 * @brief  Private implementation for AllocateHostsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AllocateHostsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AllocateHostsResponse instance.
 */
AllocateHostsResponsePrivate::AllocateHostsResponsePrivate(
    AllocateHostsQueueResponse * const q) : AllocateHostsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 AllocateHostsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AllocateHostsResponsePrivate::AllocateHostsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AllocateHostsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
