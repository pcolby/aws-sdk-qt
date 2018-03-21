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

#include "stopimagebuilderresponse.h"
#include "stopimagebuilderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppStream {

/**
 * @class  StopImageBuilderResponse
 *
 * @brief  Handles AppStream StopImageBuilder responses.
 *
 * @see    AppStreamClient::stopImageBuilder
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopImageBuilderResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new StopImageBuilderResponsePrivate(this), parent)
{
    setRequest(new StopImageBuilderRequest(request));
    setReply(reply);
}

const StopImageBuilderRequest * StopImageBuilderResponse::request() const
{
    Q_D(const StopImageBuilderResponse);
    return static_cast<const StopImageBuilderRequest *>(d->request);
}

/**
 * @brief  Parse a AppStream StopImageBuilder response.
 *
 * @param  response  Response to parse.
 */
void StopImageBuilderResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopImageBuilderResponsePrivate
 *
 * @brief  Private implementation for StopImageBuilderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopImageBuilderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopImageBuilderResponse instance.
 */
StopImageBuilderResponsePrivate::StopImageBuilderResponsePrivate(
    StopImageBuilderQueueResponse * const q) : StopImageBuilderPrivate(q)
{

}

/**
 * @brief  Parse an AppStream StopImageBuilderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopImageBuilderResponsePrivate::StopImageBuilderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopImageBuilderResponse"));
    /// @todo
}
