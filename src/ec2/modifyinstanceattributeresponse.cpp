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

#include "modifyinstanceattributeresponse.h"
#include "modifyinstanceattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ModifyInstanceAttributeResponse
 *
 * @brief  Handles EC2 ModifyInstanceAttribute responses.
 *
 * @see    EC2Client::modifyInstanceAttribute
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyInstanceAttributeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ModifyInstanceAttributeResponsePrivate(this), parent)
{
    setRequest(new ModifyInstanceAttributeRequest(request));
    setReply(reply);
}

const ModifyInstanceAttributeRequest * ModifyInstanceAttributeResponse::request() const
{
    Q_D(const ModifyInstanceAttributeResponse);
    return static_cast<const ModifyInstanceAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ModifyInstanceAttribute response.
 *
 * @param  response  Response to parse.
 */
void ModifyInstanceAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyInstanceAttributeResponsePrivate
 *
 * @brief  Private implementation for ModifyInstanceAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyInstanceAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyInstanceAttributeResponse instance.
 */
ModifyInstanceAttributeResponsePrivate::ModifyInstanceAttributeResponsePrivate(
    ModifyInstanceAttributeQueueResponse * const q) : ModifyInstanceAttributePrivate(q)
{

}

/**
 * @brief  Parse an EC2 ModifyInstanceAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyInstanceAttributeResponsePrivate::ModifyInstanceAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyInstanceAttributeResponse"));
    /// @todo
}
