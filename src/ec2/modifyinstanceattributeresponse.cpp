/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "modifyinstanceattributeresponse.h"
#include "modifyinstanceattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  ModifyInstanceAttributeResponse
 *
 * @brief  Handles EC2 ModifyInstanceAttribute responses.
 *
 * @see    EC2Client::modifyInstanceAttribute
 */

/**
 * @brief  Constructs a new ModifyInstanceAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyInstanceAttributeResponse::ModifyInstanceAttributeResponse(
        const ModifyInstanceAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ModifyInstanceAttributeResponse(new ModifyInstanceAttributeResponsePrivate(this), parent)
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
    Q_D(ModifyInstanceAttributeResponse);
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
    ModifyInstanceAttributeResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 ModifyInstanceAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyInstanceAttributeResponsePrivate::parseModifyInstanceAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyInstanceAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
