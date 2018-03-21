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

#include "listactiontypesresponse.h"
#include "listactiontypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodePipeline {

/**
 * @class  ListActionTypesResponse
 *
 * @brief  Handles CodePipeline ListActionTypes responses.
 *
 * @see    CodePipelineClient::listActionTypes
 */

/**
 * @brief  Constructs a new ListActionTypesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListActionTypesResponse::ListActionTypesResponse(
        const ListActionTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new ListActionTypesResponsePrivate(this), parent)
{
    setRequest(new ListActionTypesRequest(request));
    setReply(reply);
}

const ListActionTypesRequest * ListActionTypesResponse::request() const
{
    Q_D(const ListActionTypesResponse);
    return static_cast<const ListActionTypesRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline ListActionTypes response.
 *
 * @param  response  Response to parse.
 */
void ListActionTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListActionTypesResponsePrivate
 *
 * @brief  Private implementation for ListActionTypesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListActionTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListActionTypesResponse instance.
 */
ListActionTypesResponsePrivate::ListActionTypesResponsePrivate(
    ListActionTypesQueueResponse * const q) : ListActionTypesPrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline ListActionTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListActionTypesResponsePrivate::ListActionTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListActionTypesResponse"));
    /// @todo
}

} // namespace CodePipeline
} // namespace AWS
