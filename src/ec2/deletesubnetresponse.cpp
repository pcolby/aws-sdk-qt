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

#include "deletesubnetresponse.h"
#include "deletesubnetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DeleteSubnetResponse
 *
 * @brief  Handles EC2 DeleteSubnet responses.
 *
 * @see    EC2Client::deleteSubnet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSubnetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteSubnetResponsePrivate(this), parent)
{
    setRequest(new DeleteSubnetRequest(request));
    setReply(reply);
}

const DeleteSubnetRequest * DeleteSubnetResponse::request() const
{
    Q_D(const DeleteSubnetResponse);
    return static_cast<const DeleteSubnetRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DeleteSubnet response.
 *
 * @param  response  Response to parse.
 */
void DeleteSubnetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSubnetResponsePrivate
 *
 * @brief  Private implementation for DeleteSubnetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSubnetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSubnetResponse instance.
 */
DeleteSubnetResponsePrivate::DeleteSubnetResponsePrivate(
    DeleteSubnetQueueResponse * const q) : DeleteSubnetPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DeleteSubnetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSubnetResponsePrivate::DeleteSubnetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSubnetResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
