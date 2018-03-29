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

#include "deleteoptiongroupresponse.h"
#include "deleteoptiongroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  DeleteOptionGroupResponse
 *
 * @brief  Handles RDS DeleteOptionGroup responses.
 *
 * @see    RDSClient::deleteOptionGroup
 */

/**
 * @brief  Constructs a new DeleteOptionGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteOptionGroupResponse::DeleteOptionGroupResponse(
        const DeleteOptionGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DeleteOptionGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteOptionGroupRequest(request));
    setReply(reply);
}

const DeleteOptionGroupRequest * DeleteOptionGroupResponse::request() const
{
    Q_D(const DeleteOptionGroupResponse);
    return static_cast<const DeleteOptionGroupRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DeleteOptionGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteOptionGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteOptionGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteOptionGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteOptionGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteOptionGroupResponse instance.
 */
DeleteOptionGroupResponsePrivate::DeleteOptionGroupResponsePrivate(
    DeleteOptionGroupQueueResponse * const q) : DeleteOptionGroupPrivate(q)
{

}

/**
 * @brief  Parse an RDS DeleteOptionGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteOptionGroupResponsePrivate::DeleteOptionGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteOptionGroupResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
