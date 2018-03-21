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

#include "describestreamprocessorresponse.h"
#include "describestreamprocessorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Rekognition {

/**
 * @class  DescribeStreamProcessorResponse
 *
 * @brief  Handles Rekognition DescribeStreamProcessor responses.
 *
 * @see    RekognitionClient::describeStreamProcessor
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeStreamProcessorResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new DescribeStreamProcessorResponsePrivate(this), parent)
{
    setRequest(new DescribeStreamProcessorRequest(request));
    setReply(reply);
}

const DescribeStreamProcessorRequest * DescribeStreamProcessorResponse::request() const
{
    Q_D(const DescribeStreamProcessorResponse);
    return static_cast<const DescribeStreamProcessorRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition DescribeStreamProcessor response.
 *
 * @param  response  Response to parse.
 */
void DescribeStreamProcessorResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeStreamProcessorResponsePrivate
 *
 * @brief  Private implementation for DescribeStreamProcessorResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStreamProcessorResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeStreamProcessorResponse instance.
 */
DescribeStreamProcessorResponsePrivate::DescribeStreamProcessorResponsePrivate(
    DescribeStreamProcessorQueueResponse * const q) : DescribeStreamProcessorPrivate(q)
{

}

/**
 * @brief  Parse an Rekognition DescribeStreamProcessorResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeStreamProcessorResponsePrivate::DescribeStreamProcessorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStreamProcessorResponse"));
    /// @todo
}
