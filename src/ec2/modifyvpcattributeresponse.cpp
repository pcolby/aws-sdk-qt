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

#include "modifyvpcattributeresponse.h"
#include "modifyvpcattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  ModifyVpcAttributeResponse
 *
 * @brief  Handles EC2 ModifyVpcAttribute responses.
 *
 * @see    EC2Client::modifyVpcAttribute
 */

/**
 * @brief  Constructs a new ModifyVpcAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyVpcAttributeResponse::ModifyVpcAttributeResponse(
        const ModifyVpcAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ModifyVpcAttributeResponsePrivate(this), parent)
{
    setRequest(new ModifyVpcAttributeRequest(request));
    setReply(reply);
}

const ModifyVpcAttributeRequest * ModifyVpcAttributeResponse::request() const
{
    Q_D(const ModifyVpcAttributeResponse);
    return static_cast<const ModifyVpcAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ModifyVpcAttribute response.
 *
 * @param  response  Response to parse.
 */
void ModifyVpcAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(ModifyVpcAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyVpcAttributeResponsePrivate
 *
 * @brief  Private implementation for ModifyVpcAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVpcAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyVpcAttributeResponse instance.
 */
ModifyVpcAttributeResponsePrivate::ModifyVpcAttributeResponsePrivate(
    ModifyVpcAttributeResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 ModifyVpcAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyVpcAttributeResponsePrivate::parseModifyVpcAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyVpcAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
