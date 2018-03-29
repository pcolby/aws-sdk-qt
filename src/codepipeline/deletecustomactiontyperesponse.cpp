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

#include "deletecustomactiontyperesponse.h"
#include "deletecustomactiontyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodePipeline {

/**
 * @class  DeleteCustomActionTypeResponse
 *
 * @brief  Handles CodePipeline DeleteCustomActionType responses.
 *
 * @see    CodePipelineClient::deleteCustomActionType
 */

/**
 * @brief  Constructs a new DeleteCustomActionTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCustomActionTypeResponse::DeleteCustomActionTypeResponse(
        const DeleteCustomActionTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new DeleteCustomActionTypeResponsePrivate(this), parent)
{
    setRequest(new DeleteCustomActionTypeRequest(request));
    setReply(reply);
}

const DeleteCustomActionTypeRequest * DeleteCustomActionTypeResponse::request() const
{
    Q_D(const DeleteCustomActionTypeResponse);
    return static_cast<const DeleteCustomActionTypeRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline DeleteCustomActionType response.
 *
 * @param  response  Response to parse.
 */
void DeleteCustomActionTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteCustomActionTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteCustomActionTypeResponsePrivate
 *
 * @brief  Private implementation for DeleteCustomActionTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCustomActionTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteCustomActionTypeResponse instance.
 */
DeleteCustomActionTypeResponsePrivate::DeleteCustomActionTypeResponsePrivate(
    DeleteCustomActionTypeResponse * const q) : CodePipelineResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline DeleteCustomActionTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteCustomActionTypeResponsePrivate::DeleteCustomActionTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCustomActionTypeResponse"));
    /// @todo
}

} // namespace CodePipeline
} // namespace QtAws
