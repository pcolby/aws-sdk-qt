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

#include "createresourcegroupresponse.h"
#include "createresourcegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/**
 * @class  CreateResourceGroupResponse
 *
 * @brief  Handles Inspector CreateResourceGroup responses.
 *
 * @see    InspectorClient::createResourceGroup
 */

/**
 * @brief  Constructs a new CreateResourceGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateResourceGroupResponse::CreateResourceGroupResponse(
        const CreateResourceGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateResourceGroupResponse(new CreateResourceGroupResponsePrivate(this), parent)
{
    setRequest(new CreateResourceGroupRequest(request));
    setReply(reply);
}

const CreateResourceGroupRequest * CreateResourceGroupResponse::request() const
{
    Q_D(const CreateResourceGroupResponse);
    return static_cast<const CreateResourceGroupRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector CreateResourceGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateResourceGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateResourceGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateResourceGroupResponsePrivate
 *
 * @brief  Private implementation for CreateResourceGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateResourceGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateResourceGroupResponse instance.
 */
CreateResourceGroupResponsePrivate::CreateResourceGroupResponsePrivate(
    CreateResourceGroupResponse * const q) : InspectorResponsePrivate(q)
{

}

/**
 * @brief  Parse an Inspector CreateResourceGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateResourceGroupResponsePrivate::parseCreateResourceGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResourceGroupResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
