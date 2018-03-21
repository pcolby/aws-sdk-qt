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

#include "copydbclusterparametergroupresponse.h"
#include "copydbclusterparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  CopyDBClusterParameterGroupResponse
 *
 * @brief  Handles RDS CopyDBClusterParameterGroup responses.
 *
 * @see    RDSClient::copyDBClusterParameterGroup
 */

/**
 * @brief  Constructs a new CopyDBClusterParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CopyDBClusterParameterGroupResponse::CopyDBClusterParameterGroupResponse(
        const CopyDBClusterParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new CopyDBClusterParameterGroupResponsePrivate(this), parent)
{
    setRequest(new CopyDBClusterParameterGroupRequest(request));
    setReply(reply);
}

const CopyDBClusterParameterGroupRequest * CopyDBClusterParameterGroupResponse::request() const
{
    Q_D(const CopyDBClusterParameterGroupResponse);
    return static_cast<const CopyDBClusterParameterGroupRequest *>(d->request);
}

/**
 * @brief  Parse a RDS CopyDBClusterParameterGroup response.
 *
 * @param  response  Response to parse.
 */
void CopyDBClusterParameterGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CopyDBClusterParameterGroupResponsePrivate
 *
 * @brief  Private implementation for CopyDBClusterParameterGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CopyDBClusterParameterGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CopyDBClusterParameterGroupResponse instance.
 */
CopyDBClusterParameterGroupResponsePrivate::CopyDBClusterParameterGroupResponsePrivate(
    CopyDBClusterParameterGroupQueueResponse * const q) : CopyDBClusterParameterGroupPrivate(q)
{

}

/**
 * @brief  Parse an RDS CopyDBClusterParameterGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CopyDBClusterParameterGroupResponsePrivate::CopyDBClusterParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyDBClusterParameterGroupResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
