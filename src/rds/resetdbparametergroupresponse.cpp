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

#include "resetdbparametergroupresponse.h"
#include "resetdbparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  ResetDBParameterGroupResponse
 *
 * @brief  Handles RDS ResetDBParameterGroup responses.
 *
 * @see    RDSClient::resetDBParameterGroup
 */

/**
 * @brief  Constructs a new ResetDBParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResetDBParameterGroupResponse::ResetDBParameterGroupResponse(
        const ResetDBParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new ResetDBParameterGroupResponsePrivate(this), parent)
{
    setRequest(new ResetDBParameterGroupRequest(request));
    setReply(reply);
}

const ResetDBParameterGroupRequest * ResetDBParameterGroupResponse::request() const
{
    Q_D(const ResetDBParameterGroupResponse);
    return static_cast<const ResetDBParameterGroupRequest *>(d->request);
}

/**
 * @brief  Parse a RDS ResetDBParameterGroup response.
 *
 * @param  response  Response to parse.
 */
void ResetDBParameterGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(ResetDBParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ResetDBParameterGroupResponsePrivate
 *
 * @brief  Private implementation for ResetDBParameterGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetDBParameterGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResetDBParameterGroupResponse instance.
 */
ResetDBParameterGroupResponsePrivate::ResetDBParameterGroupResponsePrivate(
    ResetDBParameterGroupResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS ResetDBParameterGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResetDBParameterGroupResponsePrivate::ResetDBParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetDBParameterGroupResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
