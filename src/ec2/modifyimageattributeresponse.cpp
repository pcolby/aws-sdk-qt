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

#include "modifyimageattributeresponse.h"
#include "modifyimageattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ModifyImageAttributeResponse
 *
 * @brief  Handles EC2 ModifyImageAttribute responses.
 *
 * @see    EC2Client::modifyImageAttribute
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyImageAttributeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ModifyImageAttributeResponsePrivate(this), parent)
{
    setRequest(new ModifyImageAttributeRequest(request));
    setReply(reply);
}

const ModifyImageAttributeRequest * ModifyImageAttributeResponse::request() const
{
    Q_D(const ModifyImageAttributeResponse);
    return static_cast<const ModifyImageAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ModifyImageAttribute response.
 *
 * @param  response  Response to parse.
 */
void ModifyImageAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyImageAttributeResponsePrivate
 *
 * @brief  Private implementation for ModifyImageAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyImageAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyImageAttributeResponse instance.
 */
ModifyImageAttributeResponsePrivate::ModifyImageAttributeResponsePrivate(
    ModifyImageAttributeQueueResponse * const q) : ModifyImageAttributePrivate(q)
{

}

/**
 * @brief  Parse an EC2 ModifyImageAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyImageAttributeResponsePrivate::ModifyImageAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyImageAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
