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

#include "deletecustomergatewayresponse.h"
#include "deletecustomergatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DeleteCustomerGatewayResponse
 *
 * @brief  Handles EC2 DeleteCustomerGateway responses.
 *
 * @see    EC2Client::deleteCustomerGateway
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCustomerGatewayResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteCustomerGatewayResponsePrivate(this), parent)
{
    setRequest(new DeleteCustomerGatewayRequest(request));
    setReply(reply);
}

const DeleteCustomerGatewayRequest * DeleteCustomerGatewayResponse::request() const
{
    Q_D(const DeleteCustomerGatewayResponse);
    return static_cast<const DeleteCustomerGatewayRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DeleteCustomerGateway response.
 *
 * @param  response  Response to parse.
 */
void DeleteCustomerGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteCustomerGatewayResponsePrivate
 *
 * @brief  Private implementation for DeleteCustomerGatewayResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCustomerGatewayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteCustomerGatewayResponse instance.
 */
DeleteCustomerGatewayResponsePrivate::DeleteCustomerGatewayResponsePrivate(
    DeleteCustomerGatewayQueueResponse * const q) : DeleteCustomerGatewayPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DeleteCustomerGatewayResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteCustomerGatewayResponsePrivate::DeleteCustomerGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCustomerGatewayResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
