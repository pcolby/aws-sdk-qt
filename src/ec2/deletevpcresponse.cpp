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

#include "deletevpcresponse.h"
#include "deletevpcresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DeleteVpcResponse
 *
 * @brief  Handles EC2 DeleteVpc responses.
 *
 * @see    EC2Client::deleteVpc
 */

/**
 * @brief  Constructs a new DeleteVpcResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVpcResponse::DeleteVpcResponse(
        const DeleteVpcRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteVpcResponsePrivate(this), parent)
{
    setRequest(new DeleteVpcRequest(request));
    setReply(reply);
}

const DeleteVpcRequest * DeleteVpcResponse::request() const
{
    Q_D(const DeleteVpcResponse);
    return static_cast<const DeleteVpcRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DeleteVpc response.
 *
 * @param  response  Response to parse.
 */
void DeleteVpcResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteVpcResponsePrivate
 *
 * @brief  Private implementation for DeleteVpcResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpcResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteVpcResponse instance.
 */
DeleteVpcResponsePrivate::DeleteVpcResponsePrivate(
    DeleteVpcResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DeleteVpcResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteVpcResponsePrivate::DeleteVpcResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVpcResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
