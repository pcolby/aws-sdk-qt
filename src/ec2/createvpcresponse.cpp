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

#include "createvpcresponse.h"
#include "createvpcresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateVpcResponse
 *
 * @brief  Handles EC2 CreateVpc responses.
 *
 * @see    EC2Client::createVpc
 */

/**
 * @brief  Constructs a new CreateVpcResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateVpcResponse::CreateVpcResponse(
        const CreateVpcRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateVpcResponsePrivate(this), parent)
{
    setRequest(new CreateVpcRequest(request));
    setReply(reply);
}

const CreateVpcRequest * CreateVpcResponse::request() const
{
    Q_D(const CreateVpcResponse);
    return static_cast<const CreateVpcRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateVpc response.
 *
 * @param  response  Response to parse.
 */
void CreateVpcResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateVpcResponsePrivate
 *
 * @brief  Private implementation for CreateVpcResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpcResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateVpcResponse instance.
 */
CreateVpcResponsePrivate::CreateVpcResponsePrivate(
    CreateVpcQueueResponse * const q) : CreateVpcPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateVpcResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateVpcResponsePrivate::CreateVpcResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVpcResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
