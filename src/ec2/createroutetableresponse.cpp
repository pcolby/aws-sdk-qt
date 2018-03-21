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

#include "createroutetableresponse.h"
#include "createroutetableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateRouteTableResponse
 *
 * @brief  Handles EC2 CreateRouteTable responses.
 *
 * @see    EC2Client::createRouteTable
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateRouteTableResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateRouteTableResponsePrivate(this), parent)
{
    setRequest(new CreateRouteTableRequest(request));
    setReply(reply);
}

const CreateRouteTableRequest * CreateRouteTableResponse::request() const
{
    Q_D(const CreateRouteTableResponse);
    return static_cast<const CreateRouteTableRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateRouteTable response.
 *
 * @param  response  Response to parse.
 */
void CreateRouteTableResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateRouteTableResponsePrivate
 *
 * @brief  Private implementation for CreateRouteTableResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRouteTableResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateRouteTableResponse instance.
 */
CreateRouteTableResponsePrivate::CreateRouteTableResponsePrivate(
    CreateRouteTableQueueResponse * const q) : CreateRouteTablePrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateRouteTableResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateRouteTableResponsePrivate::CreateRouteTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRouteTableResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
