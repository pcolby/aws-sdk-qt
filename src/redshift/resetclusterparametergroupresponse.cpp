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

#include "resetclusterparametergroupresponse.h"
#include "resetclusterparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  ResetClusterParameterGroupResponse
 *
 * @brief  Handles Redshift ResetClusterParameterGroup responses.
 *
 * @see    RedshiftClient::resetClusterParameterGroup
 */

/**
 * @brief  Constructs a new ResetClusterParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResetClusterParameterGroupResponse::ResetClusterParameterGroupResponse(
        const ResetClusterParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new ResetClusterParameterGroupResponsePrivate(this), parent)
{
    setRequest(new ResetClusterParameterGroupRequest(request));
    setReply(reply);
}

const ResetClusterParameterGroupRequest * ResetClusterParameterGroupResponse::request() const
{
    Q_D(const ResetClusterParameterGroupResponse);
    return static_cast<const ResetClusterParameterGroupRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift ResetClusterParameterGroup response.
 *
 * @param  response  Response to parse.
 */
void ResetClusterParameterGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(ResetClusterParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ResetClusterParameterGroupResponsePrivate
 *
 * @brief  Private implementation for ResetClusterParameterGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetClusterParameterGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResetClusterParameterGroupResponse instance.
 */
ResetClusterParameterGroupResponsePrivate::ResetClusterParameterGroupResponsePrivate(
    ResetClusterParameterGroupResponse * const q) : RedshiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an Redshift ResetClusterParameterGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResetClusterParameterGroupResponsePrivate::ResetClusterParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetClusterParameterGroupResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
