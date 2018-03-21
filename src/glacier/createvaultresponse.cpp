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

#include "createvaultresponse.h"
#include "createvaultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glacier {

/**
 * @class  CreateVaultResponse
 *
 * @brief  Handles Glacier CreateVault responses.
 *
 * @see    GlacierClient::createVault
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateVaultResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new CreateVaultResponsePrivate(this), parent)
{
    setRequest(new CreateVaultRequest(request));
    setReply(reply);
}

const CreateVaultRequest * CreateVaultResponse::request() const
{
    Q_D(const CreateVaultResponse);
    return static_cast<const CreateVaultRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier CreateVault response.
 *
 * @param  response  Response to parse.
 */
void CreateVaultResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateVaultResponsePrivate
 *
 * @brief  Private implementation for CreateVaultResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVaultResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateVaultResponse instance.
 */
CreateVaultResponsePrivate::CreateVaultResponsePrivate(
    CreateVaultQueueResponse * const q) : CreateVaultPrivate(q)
{

}

/**
 * @brief  Parse an Glacier CreateVaultResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateVaultResponsePrivate::CreateVaultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVaultResponse"));
    /// @todo
}
