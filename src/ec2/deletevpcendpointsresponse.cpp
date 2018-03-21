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

#include "deletevpcendpointsresponse.h"
#include "deletevpcendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DeleteVpcEndpointsResponse
 *
 * @brief  Handles EC2 DeleteVpcEndpoints responses.
 *
 * @see    EC2Client::deleteVpcEndpoints
 */

/**
 * @brief  Constructs a new DeleteVpcEndpointsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVpcEndpointsResponse::DeleteVpcEndpointsResponse(
        const DeleteVpcEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteVpcEndpointsResponsePrivate(this), parent)
{
    setRequest(new DeleteVpcEndpointsRequest(request));
    setReply(reply);
}

const DeleteVpcEndpointsRequest * DeleteVpcEndpointsResponse::request() const
{
    Q_D(const DeleteVpcEndpointsResponse);
    return static_cast<const DeleteVpcEndpointsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DeleteVpcEndpoints response.
 *
 * @param  response  Response to parse.
 */
void DeleteVpcEndpointsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteVpcEndpointsResponsePrivate
 *
 * @brief  Private implementation for DeleteVpcEndpointsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpcEndpointsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteVpcEndpointsResponse instance.
 */
DeleteVpcEndpointsResponsePrivate::DeleteVpcEndpointsResponsePrivate(
    DeleteVpcEndpointsQueueResponse * const q) : DeleteVpcEndpointsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DeleteVpcEndpointsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteVpcEndpointsResponsePrivate::DeleteVpcEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVpcEndpointsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
