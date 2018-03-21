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

#include "modifyfpgaimageattributeresponse.h"
#include "modifyfpgaimageattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ModifyFpgaImageAttributeResponse
 *
 * @brief  Handles EC2 ModifyFpgaImageAttribute responses.
 *
 * @see    EC2Client::modifyFpgaImageAttribute
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyFpgaImageAttributeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ModifyFpgaImageAttributeResponsePrivate(this), parent)
{
    setRequest(new ModifyFpgaImageAttributeRequest(request));
    setReply(reply);
}

const ModifyFpgaImageAttributeRequest * ModifyFpgaImageAttributeResponse::request() const
{
    Q_D(const ModifyFpgaImageAttributeResponse);
    return static_cast<const ModifyFpgaImageAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ModifyFpgaImageAttribute response.
 *
 * @param  response  Response to parse.
 */
void ModifyFpgaImageAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyFpgaImageAttributeResponsePrivate
 *
 * @brief  Private implementation for ModifyFpgaImageAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyFpgaImageAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyFpgaImageAttributeResponse instance.
 */
ModifyFpgaImageAttributeResponsePrivate::ModifyFpgaImageAttributeResponsePrivate(
    ModifyFpgaImageAttributeQueueResponse * const q) : ModifyFpgaImageAttributePrivate(q)
{

}

/**
 * @brief  Parse an EC2 ModifyFpgaImageAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyFpgaImageAttributeResponsePrivate::ModifyFpgaImageAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyFpgaImageAttributeResponse"));
    /// @todo
}
