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

#include "modifyoptiongroupresponse.h"
#include "modifyoptiongroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  ModifyOptionGroupResponse
 *
 * @brief  Handles RDS ModifyOptionGroup responses.
 *
 * @see    RDSClient::modifyOptionGroup
 */

/**
 * @brief  Constructs a new ModifyOptionGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyOptionGroupResponse::ModifyOptionGroupResponse(
        const ModifyOptionGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new ModifyOptionGroupResponsePrivate(this), parent)
{
    setRequest(new ModifyOptionGroupRequest(request));
    setReply(reply);
}

const ModifyOptionGroupRequest * ModifyOptionGroupResponse::request() const
{
    Q_D(const ModifyOptionGroupResponse);
    return static_cast<const ModifyOptionGroupRequest *>(d->request);
}

/**
 * @brief  Parse a RDS ModifyOptionGroup response.
 *
 * @param  response  Response to parse.
 */
void ModifyOptionGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyOptionGroupResponsePrivate
 *
 * @brief  Private implementation for ModifyOptionGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyOptionGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyOptionGroupResponse instance.
 */
ModifyOptionGroupResponsePrivate::ModifyOptionGroupResponsePrivate(
    ModifyOptionGroupQueueResponse * const q) : ModifyOptionGroupPrivate(q)
{

}

/**
 * @brief  Parse an RDS ModifyOptionGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyOptionGroupResponsePrivate::ModifyOptionGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyOptionGroupResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
