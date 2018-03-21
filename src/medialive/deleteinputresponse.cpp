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

#include "deleteinputresponse.h"
#include "deleteinputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaLive {

/**
 * @class  DeleteInputResponse
 *
 * @brief  Handles MediaLive DeleteInput responses.
 *
 * @see    MediaLiveClient::deleteInput
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteInputResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DeleteInputResponsePrivate(this), parent)
{
    setRequest(new DeleteInputRequest(request));
    setReply(reply);
}

const DeleteInputRequest * DeleteInputResponse::request() const
{
    Q_D(const DeleteInputResponse);
    return static_cast<const DeleteInputRequest *>(d->request);
}

/**
 * @brief  Parse a MediaLive DeleteInput response.
 *
 * @param  response  Response to parse.
 */
void DeleteInputResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteInputResponsePrivate
 *
 * @brief  Private implementation for DeleteInputResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInputResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteInputResponse instance.
 */
DeleteInputResponsePrivate::DeleteInputResponsePrivate(
    DeleteInputQueueResponse * const q) : DeleteInputPrivate(q)
{

}

/**
 * @brief  Parse an MediaLive DeleteInputResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteInputResponsePrivate::DeleteInputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInputResponse"));
    /// @todo
}
