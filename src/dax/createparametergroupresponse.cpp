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

#include "createparametergroupresponse.h"
#include "createparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DAX {

/**
 * @class  CreateParameterGroupResponse
 *
 * @brief  Handles DAX CreateParameterGroup responses.
 *
 * @see    DAXClient::createParameterGroup
 */

/**
 * @brief  Constructs a new CreateParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateParameterGroupResponse::CreateParameterGroupResponse(
        const CreateParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateParameterGroupResponse(new CreateParameterGroupResponsePrivate(this), parent)
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
    Q_D(CreateParameterGroupResponse);
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
    CreateParameterGroupResponse * const q) : DAXResponsePrivate(q)
{

}

/**
 * @brief  Parse an DAX CreateParameterGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateParameterGroupResponsePrivate::parseCreateParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateParameterGroupResponse"));
    /// @todo
}

} // namespace DAX
} // namespace QtAws
