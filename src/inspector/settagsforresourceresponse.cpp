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

#include "settagsforresourceresponse.h"
#include "settagsforresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Inspector {

/**
 * @class  SetTagsForResourceResponse
 *
 * @brief  Handles Inspector SetTagsForResource responses.
 *
 * @see    InspectorClient::setTagsForResource
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetTagsForResourceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new SetTagsForResourceResponsePrivate(this), parent)
{
    setRequest(new SetTagsForResourceRequest(request));
    setReply(reply);
}

const SetTagsForResourceRequest * SetTagsForResourceResponse::request() const
{
    Q_D(const SetTagsForResourceResponse);
    return static_cast<const SetTagsForResourceRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector SetTagsForResource response.
 *
 * @param  response  Response to parse.
 */
void SetTagsForResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetTagsForResourceResponsePrivate
 *
 * @brief  Private implementation for SetTagsForResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetTagsForResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetTagsForResourceResponse instance.
 */
SetTagsForResourceResponsePrivate::SetTagsForResourceResponsePrivate(
    SetTagsForResourceQueueResponse * const q) : SetTagsForResourcePrivate(q)
{

}

/**
 * @brief  Parse an Inspector SetTagsForResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetTagsForResourceResponsePrivate::SetTagsForResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetTagsForResourceResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace AWS
