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

#include "updatesubnetgroupresponse.h"
#include "updatesubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DAX {

/**
 * @class  UpdateSubnetGroupResponse
 *
 * @brief  Handles DAX UpdateSubnetGroup responses.
 *
 * @see    DAXClient::updateSubnetGroup
 */

/**
 * @brief  Constructs a new UpdateSubnetGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateSubnetGroupResponse::UpdateSubnetGroupResponse(
        const UpdateSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateSubnetGroupResponse(new UpdateSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateSubnetGroupRequest(request));
    setReply(reply);
}

const UpdateSubnetGroupRequest * UpdateSubnetGroupResponse::request() const
{
    Q_D(const UpdateSubnetGroupResponse);
    return static_cast<const UpdateSubnetGroupRequest *>(d->request);
}

/**
 * @brief  Parse a DAX UpdateSubnetGroup response.
 *
 * @param  response  Response to parse.
 */
void UpdateSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateSubnetGroupResponsePrivate
 *
 * @brief  Private implementation for UpdateSubnetGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSubnetGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateSubnetGroupResponse instance.
 */
UpdateSubnetGroupResponsePrivate::UpdateSubnetGroupResponsePrivate(
    UpdateSubnetGroupResponse * const q) : DAXResponsePrivate(q)
{

}

/**
 * @brief  Parse an DAX UpdateSubnetGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateSubnetGroupResponsePrivate::parseUpdateSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSubnetGroupResponse"));
    /// @todo
}

} // namespace DAX
} // namespace QtAws
