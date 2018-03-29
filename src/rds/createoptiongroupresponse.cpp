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

#include "createoptiongroupresponse.h"
#include "createoptiongroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  CreateOptionGroupResponse
 *
 * @brief  Handles RDS CreateOptionGroup responses.
 *
 * @see    RDSClient::createOptionGroup
 */

/**
 * @brief  Constructs a new CreateOptionGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateOptionGroupResponse::CreateOptionGroupResponse(
        const CreateOptionGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new CreateOptionGroupResponsePrivate(this), parent)
{
    setRequest(new CreateOptionGroupRequest(request));
    setReply(reply);
}

const CreateOptionGroupRequest * CreateOptionGroupResponse::request() const
{
    Q_D(const CreateOptionGroupResponse);
    return static_cast<const CreateOptionGroupRequest *>(d->request);
}

/**
 * @brief  Parse a RDS CreateOptionGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateOptionGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateOptionGroupResponsePrivate
 *
 * @brief  Private implementation for CreateOptionGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateOptionGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateOptionGroupResponse instance.
 */
CreateOptionGroupResponsePrivate::CreateOptionGroupResponsePrivate(
    CreateOptionGroupQueueResponse * const q) : CreateOptionGroupPrivate(q)
{

}

/**
 * @brief  Parse an RDS CreateOptionGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateOptionGroupResponsePrivate::CreateOptionGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateOptionGroupResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
