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

#include "putthirdpartyjobfailureresultresponse.h"
#include "putthirdpartyjobfailureresultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodePipeline {

/**
 * @class  PutThirdPartyJobFailureResultResponse
 *
 * @brief  Handles CodePipeline PutThirdPartyJobFailureResult responses.
 *
 * @see    CodePipelineClient::putThirdPartyJobFailureResult
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutThirdPartyJobFailureResultResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new PutThirdPartyJobFailureResultResponsePrivate(this), parent)
{
    setRequest(new PutThirdPartyJobFailureResultRequest(request));
    setReply(reply);
}

const PutThirdPartyJobFailureResultRequest * PutThirdPartyJobFailureResultResponse::request() const
{
    Q_D(const PutThirdPartyJobFailureResultResponse);
    return static_cast<const PutThirdPartyJobFailureResultRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline PutThirdPartyJobFailureResult response.
 *
 * @param  response  Response to parse.
 */
void PutThirdPartyJobFailureResultResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutThirdPartyJobFailureResultResponsePrivate
 *
 * @brief  Private implementation for PutThirdPartyJobFailureResultResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutThirdPartyJobFailureResultResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutThirdPartyJobFailureResultResponse instance.
 */
PutThirdPartyJobFailureResultResponsePrivate::PutThirdPartyJobFailureResultResponsePrivate(
    PutThirdPartyJobFailureResultQueueResponse * const q) : PutThirdPartyJobFailureResultPrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline PutThirdPartyJobFailureResultResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutThirdPartyJobFailureResultResponsePrivate::PutThirdPartyJobFailureResultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutThirdPartyJobFailureResultResponse"));
    /// @todo
}
