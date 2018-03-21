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

#include "deletestreamprocessorresponse.h"
#include "deletestreamprocessorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Rekognition {

/**
 * @class  DeleteStreamProcessorResponse
 *
 * @brief  Handles Rekognition DeleteStreamProcessor responses.
 *
 * @see    RekognitionClient::deleteStreamProcessor
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteStreamProcessorResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new DeleteStreamProcessorResponsePrivate(this), parent)
{
    setRequest(new DeleteStreamProcessorRequest(request));
    setReply(reply);
}

const DeleteStreamProcessorRequest * DeleteStreamProcessorResponse::request() const
{
    Q_D(const DeleteStreamProcessorResponse);
    return static_cast<const DeleteStreamProcessorRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition DeleteStreamProcessor response.
 *
 * @param  response  Response to parse.
 */
void DeleteStreamProcessorResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteStreamProcessorResponsePrivate
 *
 * @brief  Private implementation for DeleteStreamProcessorResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStreamProcessorResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteStreamProcessorResponse instance.
 */
DeleteStreamProcessorResponsePrivate::DeleteStreamProcessorResponsePrivate(
    DeleteStreamProcessorQueueResponse * const q) : DeleteStreamProcessorPrivate(q)
{

}

/**
 * @brief  Parse an Rekognition DeleteStreamProcessorResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteStreamProcessorResponsePrivate::DeleteStreamProcessorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStreamProcessorResponse"));
    /// @todo
}
