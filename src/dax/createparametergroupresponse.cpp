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

#include "createparametergroupresponse.h"
#include "createparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DAX {

/**
 * @class  CreateParameterGroupResponse
 *
 * @brief  Handles DAX CreateParameterGroup responses.
 *
 * @see    DAXClient::createParameterGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateParameterGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DAXResponse(new CreateParameterGroupResponsePrivate(this), parent)
{
    setRequest(new CreateParameterGroupRequest(request));
    setReply(reply);
}

const CreateParameterGroupRequest * CreateParameterGroupResponse::request() const
{
    Q_D(const CreateParameterGroupResponse);
    return static_cast<const CreateParameterGroupRequest *>(d->request);
}

/**
 * @brief  Parse a DAX CreateParameterGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateParameterGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateParameterGroupResponsePrivate
 *
 * @brief  Private implementation for CreateParameterGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateParameterGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateParameterGroupResponse instance.
 */
CreateParameterGroupResponsePrivate::CreateParameterGroupResponsePrivate(
    CreateParameterGroupQueueResponse * const q) : CreateParameterGroupPrivate(q)
{

}

/**
 * @brief  Parse an DAX CreateParameterGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateParameterGroupResponsePrivate::CreateParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateParameterGroupResponse"));
    /// @todo
}

} // namespace DAX
} // namespace AWS
