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

#include "updateaccountresponse.h"
#include "updateaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateAccountResponse
 *
 * @brief  Handles APIGateway UpdateAccount responses.
 *
 * @see    APIGatewayClient::updateAccount
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAccountResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateAccountResponsePrivate(this), parent)
{
    setRequest(new UpdateAccountRequest(request));
    setReply(reply);
}

const UpdateAccountRequest * UpdateAccountResponse::request() const
{
    Q_D(const UpdateAccountResponse);
    return static_cast<const UpdateAccountRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateAccount response.
 *
 * @param  response  Response to parse.
 */
void UpdateAccountResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateAccountResponsePrivate
 *
 * @brief  Private implementation for UpdateAccountResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAccountResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateAccountResponse instance.
 */
UpdateAccountResponsePrivate::UpdateAccountResponsePrivate(
    UpdateAccountQueueResponse * const q) : UpdateAccountPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateAccountResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateAccountResponsePrivate::UpdateAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAccountResponse"));
    /// @todo
}
