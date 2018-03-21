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

#include "putjobfailureresultresponse.h"
#include "putjobfailureresultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodePipeline {

/**
 * @class  PutJobFailureResultResponse
 *
 * @brief  Handles CodePipeline PutJobFailureResult responses.
 *
 * @see    CodePipelineClient::putJobFailureResult
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutJobFailureResultResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new PutJobFailureResultResponsePrivate(this), parent)
{
    setRequest(new PutJobFailureResultRequest(request));
    setReply(reply);
}

const PutJobFailureResultRequest * PutJobFailureResultResponse::request() const
{
    Q_D(const PutJobFailureResultResponse);
    return static_cast<const PutJobFailureResultRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline PutJobFailureResult response.
 *
 * @param  response  Response to parse.
 */
void PutJobFailureResultResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutJobFailureResultResponsePrivate
 *
 * @brief  Private implementation for PutJobFailureResultResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutJobFailureResultResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutJobFailureResultResponse instance.
 */
PutJobFailureResultResponsePrivate::PutJobFailureResultResponsePrivate(
    PutJobFailureResultQueueResponse * const q) : PutJobFailureResultPrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline PutJobFailureResultResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutJobFailureResultResponsePrivate::PutJobFailureResultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutJobFailureResultResponse"));
    /// @todo
}
