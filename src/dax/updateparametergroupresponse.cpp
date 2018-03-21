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

#include "updateparametergroupresponse.h"
#include "updateparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DAX {

/**
 * @class  UpdateParameterGroupResponse
 *
 * @brief  Handles DAX UpdateParameterGroup responses.
 *
 * @see    DAXClient::updateParameterGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateParameterGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DAXResponse(new UpdateParameterGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateParameterGroupRequest(request));
    setReply(reply);
}

const UpdateParameterGroupRequest * UpdateParameterGroupResponse::request() const
{
    Q_D(const UpdateParameterGroupResponse);
    return static_cast<const UpdateParameterGroupRequest *>(d->request);
}

/**
 * @brief  Parse a DAX UpdateParameterGroup response.
 *
 * @param  response  Response to parse.
 */
void UpdateParameterGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateParameterGroupResponsePrivate
 *
 * @brief  Private implementation for UpdateParameterGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateParameterGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateParameterGroupResponse instance.
 */
UpdateParameterGroupResponsePrivate::UpdateParameterGroupResponsePrivate(
    UpdateParameterGroupQueueResponse * const q) : UpdateParameterGroupPrivate(q)
{

}

/**
 * @brief  Parse an DAX UpdateParameterGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateParameterGroupResponsePrivate::UpdateParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateParameterGroupResponse"));
    /// @todo
}
