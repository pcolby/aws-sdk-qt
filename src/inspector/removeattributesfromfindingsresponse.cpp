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

#include "removeattributesfromfindingsresponse.h"
#include "removeattributesfromfindingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Inspector {

/**
 * @class  RemoveAttributesFromFindingsResponse
 *
 * @brief  Handles Inspector RemoveAttributesFromFindings responses.
 *
 * @see    InspectorClient::removeAttributesFromFindings
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveAttributesFromFindingsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new RemoveAttributesFromFindingsResponsePrivate(this), parent)
{
    setRequest(new RemoveAttributesFromFindingsRequest(request));
    setReply(reply);
}

const RemoveAttributesFromFindingsRequest * RemoveAttributesFromFindingsResponse::request() const
{
    Q_D(const RemoveAttributesFromFindingsResponse);
    return static_cast<const RemoveAttributesFromFindingsRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector RemoveAttributesFromFindings response.
 *
 * @param  response  Response to parse.
 */
void RemoveAttributesFromFindingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RemoveAttributesFromFindingsResponsePrivate
 *
 * @brief  Private implementation for RemoveAttributesFromFindingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveAttributesFromFindingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RemoveAttributesFromFindingsResponse instance.
 */
RemoveAttributesFromFindingsResponsePrivate::RemoveAttributesFromFindingsResponsePrivate(
    RemoveAttributesFromFindingsQueueResponse * const q) : RemoveAttributesFromFindingsPrivate(q)
{

}

/**
 * @brief  Parse an Inspector RemoveAttributesFromFindingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RemoveAttributesFromFindingsResponsePrivate::RemoveAttributesFromFindingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveAttributesFromFindingsResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace AWS
