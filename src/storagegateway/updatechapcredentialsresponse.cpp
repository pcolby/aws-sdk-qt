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

#include "updatechapcredentialsresponse.h"
#include "updatechapcredentialsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  UpdateChapCredentialsResponse
 *
 * @brief  Handles StorageGateway UpdateChapCredentials responses.
 *
 * @see    StorageGatewayClient::updateChapCredentials
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateChapCredentialsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new UpdateChapCredentialsResponsePrivate(this), parent)
{
    setRequest(new UpdateChapCredentialsRequest(request));
    setReply(reply);
}

const UpdateChapCredentialsRequest * UpdateChapCredentialsResponse::request() const
{
    Q_D(const UpdateChapCredentialsResponse);
    return static_cast<const UpdateChapCredentialsRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway UpdateChapCredentials response.
 *
 * @param  response  Response to parse.
 */
void UpdateChapCredentialsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateChapCredentialsResponsePrivate
 *
 * @brief  Private implementation for UpdateChapCredentialsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateChapCredentialsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateChapCredentialsResponse instance.
 */
UpdateChapCredentialsResponsePrivate::UpdateChapCredentialsResponsePrivate(
    UpdateChapCredentialsQueueResponse * const q) : UpdateChapCredentialsPrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway UpdateChapCredentialsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateChapCredentialsResponsePrivate::UpdateChapCredentialsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateChapCredentialsResponse"));
    /// @todo
}
