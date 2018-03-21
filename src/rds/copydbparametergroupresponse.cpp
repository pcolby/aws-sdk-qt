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

#include "copydbparametergroupresponse.h"
#include "copydbparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  CopyDBParameterGroupResponse
 *
 * @brief  Handles RDS CopyDBParameterGroup responses.
 *
 * @see    RDSClient::copyDBParameterGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CopyDBParameterGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new CopyDBParameterGroupResponsePrivate(this), parent)
{
    setRequest(new CopyDBParameterGroupRequest(request));
    setReply(reply);
}

const CopyDBParameterGroupRequest * CopyDBParameterGroupResponse::request() const
{
    Q_D(const CopyDBParameterGroupResponse);
    return static_cast<const CopyDBParameterGroupRequest *>(d->request);
}

/**
 * @brief  Parse a RDS CopyDBParameterGroup response.
 *
 * @param  response  Response to parse.
 */
void CopyDBParameterGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CopyDBParameterGroupResponsePrivate
 *
 * @brief  Private implementation for CopyDBParameterGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CopyDBParameterGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CopyDBParameterGroupResponse instance.
 */
CopyDBParameterGroupResponsePrivate::CopyDBParameterGroupResponsePrivate(
    CopyDBParameterGroupQueueResponse * const q) : CopyDBParameterGroupPrivate(q)
{

}

/**
 * @brief  Parse an RDS CopyDBParameterGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CopyDBParameterGroupResponsePrivate::CopyDBParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyDBParameterGroupResponse"));
    /// @todo
}
