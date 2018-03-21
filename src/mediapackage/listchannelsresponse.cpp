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

#include "listchannelsresponse.h"
#include "listchannelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaPackage {

/**
 * @class  ListChannelsResponse
 *
 * @brief  Handles MediaPackage ListChannels responses.
 *
 * @see    MediaPackageClient::listChannels
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListChannelsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new ListChannelsResponsePrivate(this), parent)
{
    setRequest(new ListChannelsRequest(request));
    setReply(reply);
}

const ListChannelsRequest * ListChannelsResponse::request() const
{
    Q_D(const ListChannelsResponse);
    return static_cast<const ListChannelsRequest *>(d->request);
}

/**
 * @brief  Parse a MediaPackage ListChannels response.
 *
 * @param  response  Response to parse.
 */
void ListChannelsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListChannelsResponsePrivate
 *
 * @brief  Private implementation for ListChannelsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListChannelsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListChannelsResponse instance.
 */
ListChannelsResponsePrivate::ListChannelsResponsePrivate(
    ListChannelsQueueResponse * const q) : ListChannelsPrivate(q)
{

}

/**
 * @brief  Parse an MediaPackage ListChannelsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListChannelsResponsePrivate::ListChannelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListChannelsResponse"));
    /// @todo
}

} // namespace MediaPackage
} // namespace AWS
