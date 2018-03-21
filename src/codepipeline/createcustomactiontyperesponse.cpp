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

#include "createcustomactiontyperesponse.h"
#include "createcustomactiontyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodePipeline {

/**
 * @class  CreateCustomActionTypeResponse
 *
 * @brief  Handles CodePipeline CreateCustomActionType responses.
 *
 * @see    CodePipelineClient::createCustomActionType
 */

/**
 * @brief  Constructs a new CreateCustomActionTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCustomActionTypeResponse::CreateCustomActionTypeResponse(
        const CreateCustomActionTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new CreateCustomActionTypeResponsePrivate(this), parent)
{
    setRequest(new CreateCustomActionTypeRequest(request));
    setReply(reply);
}

const CreateCustomActionTypeRequest * CreateCustomActionTypeResponse::request() const
{
    Q_D(const CreateCustomActionTypeResponse);
    return static_cast<const CreateCustomActionTypeRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline CreateCustomActionType response.
 *
 * @param  response  Response to parse.
 */
void CreateCustomActionTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateCustomActionTypeResponsePrivate
 *
 * @brief  Private implementation for CreateCustomActionTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCustomActionTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCustomActionTypeResponse instance.
 */
CreateCustomActionTypeResponsePrivate::CreateCustomActionTypeResponsePrivate(
    CreateCustomActionTypeQueueResponse * const q) : CreateCustomActionTypePrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline CreateCustomActionTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCustomActionTypeResponsePrivate::CreateCustomActionTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCustomActionTypeResponse"));
    /// @todo
}

} // namespace CodePipeline
} // namespace AWS
