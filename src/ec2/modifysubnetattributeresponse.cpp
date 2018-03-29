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

#include "modifysubnetattributeresponse.h"
#include "modifysubnetattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  ModifySubnetAttributeResponse
 *
 * @brief  Handles EC2 ModifySubnetAttribute responses.
 *
 * @see    EC2Client::modifySubnetAttribute
 */

/**
 * @brief  Constructs a new ModifySubnetAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifySubnetAttributeResponse::ModifySubnetAttributeResponse(
        const ModifySubnetAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ModifySubnetAttributeResponse(new ModifySubnetAttributeResponsePrivate(this), parent)
{
    setRequest(new ModifySubnetAttributeRequest(request));
    setReply(reply);
}

const ModifySubnetAttributeRequest * ModifySubnetAttributeResponse::request() const
{
    Q_D(const ModifySubnetAttributeResponse);
    return static_cast<const ModifySubnetAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ModifySubnetAttribute response.
 *
 * @param  response  Response to parse.
 */
void ModifySubnetAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(ModifySubnetAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifySubnetAttributeResponsePrivate
 *
 * @brief  Private implementation for ModifySubnetAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifySubnetAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifySubnetAttributeResponse instance.
 */
ModifySubnetAttributeResponsePrivate::ModifySubnetAttributeResponsePrivate(
    ModifySubnetAttributeResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 ModifySubnetAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifySubnetAttributeResponsePrivate::parseModifySubnetAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifySubnetAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
