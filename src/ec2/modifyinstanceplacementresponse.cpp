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

#include "modifyinstanceplacementresponse.h"
#include "modifyinstanceplacementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  ModifyInstancePlacementResponse
 *
 * @brief  Handles EC2 ModifyInstancePlacement responses.
 *
 * @see    EC2Client::modifyInstancePlacement
 */

/**
 * @brief  Constructs a new ModifyInstancePlacementResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyInstancePlacementResponse::ModifyInstancePlacementResponse(
        const ModifyInstancePlacementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ModifyInstancePlacementResponsePrivate(this), parent)
{
    setRequest(new ModifyInstancePlacementRequest(request));
    setReply(reply);
}

const ModifyInstancePlacementRequest * ModifyInstancePlacementResponse::request() const
{
    Q_D(const ModifyInstancePlacementResponse);
    return static_cast<const ModifyInstancePlacementRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ModifyInstancePlacement response.
 *
 * @param  response  Response to parse.
 */
void ModifyInstancePlacementResponse::parseSuccess(QIODevice &response)
{
    Q_D(ModifyInstancePlacementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyInstancePlacementResponsePrivate
 *
 * @brief  Private implementation for ModifyInstancePlacementResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyInstancePlacementResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyInstancePlacementResponse instance.
 */
ModifyInstancePlacementResponsePrivate::ModifyInstancePlacementResponsePrivate(
    ModifyInstancePlacementResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 ModifyInstancePlacementResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyInstancePlacementResponsePrivate::parseModifyInstancePlacementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyInstancePlacementResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
