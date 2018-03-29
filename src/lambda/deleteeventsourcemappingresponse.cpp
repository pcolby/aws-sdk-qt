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

#include "deleteeventsourcemappingresponse.h"
#include "deleteeventsourcemappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/**
 * @class  DeleteEventSourceMappingResponse
 *
 * @brief  Handles Lambda DeleteEventSourceMapping responses.
 *
 * @see    LambdaClient::deleteEventSourceMapping
 */

/**
 * @brief  Constructs a new DeleteEventSourceMappingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteEventSourceMappingResponse::DeleteEventSourceMappingResponse(
        const DeleteEventSourceMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new DeleteEventSourceMappingResponsePrivate(this), parent)
{
    setRequest(new DeleteEventSourceMappingRequest(request));
    setReply(reply);
}

const DeleteEventSourceMappingRequest * DeleteEventSourceMappingResponse::request() const
{
    Q_D(const DeleteEventSourceMappingResponse);
    return static_cast<const DeleteEventSourceMappingRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda DeleteEventSourceMapping response.
 *
 * @param  response  Response to parse.
 */
void DeleteEventSourceMappingResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteEventSourceMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteEventSourceMappingResponsePrivate
 *
 * @brief  Private implementation for DeleteEventSourceMappingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEventSourceMappingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteEventSourceMappingResponse instance.
 */
DeleteEventSourceMappingResponsePrivate::DeleteEventSourceMappingResponsePrivate(
    DeleteEventSourceMappingResponse * const q) : LambdaResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lambda DeleteEventSourceMappingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteEventSourceMappingResponsePrivate::parseDeleteEventSourceMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEventSourceMappingResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace QtAws
