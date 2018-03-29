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

#include "createdbparametergroupresponse.h"
#include "createdbparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  CreateDBParameterGroupResponse
 *
 * @brief  Handles RDS CreateDBParameterGroup responses.
 *
 * @see    RDSClient::createDBParameterGroup
 */

/**
 * @brief  Constructs a new CreateDBParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDBParameterGroupResponse::CreateDBParameterGroupResponse(
        const CreateDBParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new CreateDBParameterGroupResponsePrivate(this), parent)
{
    setRequest(new CreateDBParameterGroupRequest(request));
    setReply(reply);
}

const CreateDBParameterGroupRequest * CreateDBParameterGroupResponse::request() const
{
    Q_D(const CreateDBParameterGroupResponse);
    return static_cast<const CreateDBParameterGroupRequest *>(d->request);
}

/**
 * @brief  Parse a RDS CreateDBParameterGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateDBParameterGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDBParameterGroupResponsePrivate
 *
 * @brief  Private implementation for CreateDBParameterGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBParameterGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDBParameterGroupResponse instance.
 */
CreateDBParameterGroupResponsePrivate::CreateDBParameterGroupResponsePrivate(
    CreateDBParameterGroupQueueResponse * const q) : CreateDBParameterGroupPrivate(q)
{

}

/**
 * @brief  Parse an RDS CreateDBParameterGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDBParameterGroupResponsePrivate::CreateDBParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDBParameterGroupResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
