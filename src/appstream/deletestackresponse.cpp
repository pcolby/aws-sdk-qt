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

#include "deletestackresponse.h"
#include "deletestackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppStream {

/**
 * @class  DeleteStackResponse
 *
 * @brief  Handles AppStream DeleteStack responses.
 *
 * @see    AppStreamClient::deleteStack
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteStackResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DeleteStackResponsePrivate(this), parent)
{
    setRequest(new DeleteStackRequest(request));
    setReply(reply);
}

const DeleteStackRequest * DeleteStackResponse::request() const
{
    Q_D(const DeleteStackResponse);
    return static_cast<const DeleteStackRequest *>(d->request);
}

/**
 * @brief  Parse a AppStream DeleteStack response.
 *
 * @param  response  Response to parse.
 */
void DeleteStackResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteStackResponsePrivate
 *
 * @brief  Private implementation for DeleteStackResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStackResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteStackResponse instance.
 */
DeleteStackResponsePrivate::DeleteStackResponsePrivate(
    DeleteStackQueueResponse * const q) : DeleteStackPrivate(q)
{

}

/**
 * @brief  Parse an AppStream DeleteStackResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteStackResponsePrivate::DeleteStackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStackResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace AWS
