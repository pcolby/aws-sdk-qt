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

#include "putapprovalresultresponse.h"
#include "putapprovalresultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodePipeline {

/**
 * @class  PutApprovalResultResponse
 *
 * @brief  Handles CodePipeline PutApprovalResult responses.
 *
 * @see    CodePipelineClient::putApprovalResult
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutApprovalResultResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new PutApprovalResultResponsePrivate(this), parent)
{
    setRequest(new PutApprovalResultRequest(request));
    setReply(reply);
}

const PutApprovalResultRequest * PutApprovalResultResponse::request() const
{
    Q_D(const PutApprovalResultResponse);
    return static_cast<const PutApprovalResultRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline PutApprovalResult response.
 *
 * @param  response  Response to parse.
 */
void PutApprovalResultResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutApprovalResultResponsePrivate
 *
 * @brief  Private implementation for PutApprovalResultResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutApprovalResultResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutApprovalResultResponse instance.
 */
PutApprovalResultResponsePrivate::PutApprovalResultResponsePrivate(
    PutApprovalResultQueueResponse * const q) : PutApprovalResultPrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline PutApprovalResultResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutApprovalResultResponsePrivate::PutApprovalResultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutApprovalResultResponse"));
    /// @todo
}

} // namespace CodePipeline
} // namespace AWS
