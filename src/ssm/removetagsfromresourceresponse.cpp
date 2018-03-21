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

#include "removetagsfromresourceresponse.h"
#include "removetagsfromresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  RemoveTagsFromResourceResponse
 *
 * @brief  Handles SSM RemoveTagsFromResource responses.
 *
 * @see    SSMClient::removeTagsFromResource
 */

/**
 * @brief  Constructs a new RemoveTagsFromResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveTagsFromResourceResponse::RemoveTagsFromResourceResponse(
        const RemoveTagsFromResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new RemoveTagsFromResourceResponsePrivate(this), parent)
{
    setRequest(new RemoveTagsFromResourceRequest(request));
    setReply(reply);
}

const RemoveTagsFromResourceRequest * RemoveTagsFromResourceResponse::request() const
{
    Q_D(const RemoveTagsFromResourceResponse);
    return static_cast<const RemoveTagsFromResourceRequest *>(d->request);
}

/**
 * @brief  Parse a SSM RemoveTagsFromResource response.
 *
 * @param  response  Response to parse.
 */
void RemoveTagsFromResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RemoveTagsFromResourceResponsePrivate
 *
 * @brief  Private implementation for RemoveTagsFromResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTagsFromResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RemoveTagsFromResourceResponse instance.
 */
RemoveTagsFromResourceResponsePrivate::RemoveTagsFromResourceResponsePrivate(
    RemoveTagsFromResourceQueueResponse * const q) : RemoveTagsFromResourcePrivate(q)
{

}

/**
 * @brief  Parse an SSM RemoveTagsFromResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RemoveTagsFromResourceResponsePrivate::RemoveTagsFromResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveTagsFromResourceResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
