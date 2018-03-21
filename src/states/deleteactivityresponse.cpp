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

#include "deleteactivityresponse.h"
#include "deleteactivityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SFN {

/**
 * @class  DeleteActivityResponse
 *
 * @brief  Handles SFN DeleteActivity responses.
 *
 * @see    SFNClient::deleteActivity
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteActivityResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SFNResponse(new DeleteActivityResponsePrivate(this), parent)
{
    setRequest(new DeleteActivityRequest(request));
    setReply(reply);
}

const DeleteActivityRequest * DeleteActivityResponse::request() const
{
    Q_D(const DeleteActivityResponse);
    return static_cast<const DeleteActivityRequest *>(d->request);
}

/**
 * @brief  Parse a SFN DeleteActivity response.
 *
 * @param  response  Response to parse.
 */
void DeleteActivityResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteActivityResponsePrivate
 *
 * @brief  Private implementation for DeleteActivityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteActivityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteActivityResponse instance.
 */
DeleteActivityResponsePrivate::DeleteActivityResponsePrivate(
    DeleteActivityQueueResponse * const q) : DeleteActivityPrivate(q)
{

}

/**
 * @brief  Parse an SFN DeleteActivityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteActivityResponsePrivate::DeleteActivityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteActivityResponse"));
    /// @todo
}

} // namespace SFN
} // namespace AWS
