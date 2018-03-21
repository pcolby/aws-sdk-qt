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

#include "createstreamingdistributionresponse.h"
#include "createstreamingdistributionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFront {

/**
 * @class  CreateStreamingDistributionResponse
 *
 * @brief  Handles CloudFront CreateStreamingDistribution responses.
 *
 * @see    CloudFrontClient::createStreamingDistribution
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateStreamingDistributionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateStreamingDistributionResponsePrivate(this), parent)
{
    setRequest(new CreateStreamingDistributionRequest(request));
    setReply(reply);
}

const CreateStreamingDistributionRequest * CreateStreamingDistributionResponse::request() const
{
    Q_D(const CreateStreamingDistributionResponse);
    return static_cast<const CreateStreamingDistributionRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront CreateStreamingDistribution response.
 *
 * @param  response  Response to parse.
 */
void CreateStreamingDistributionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateStreamingDistributionResponsePrivate
 *
 * @brief  Private implementation for CreateStreamingDistributionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateStreamingDistributionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateStreamingDistributionResponse instance.
 */
CreateStreamingDistributionResponsePrivate::CreateStreamingDistributionResponsePrivate(
    CreateStreamingDistributionQueueResponse * const q) : CreateStreamingDistributionPrivate(q)
{

}

/**
 * @brief  Parse an CloudFront CreateStreamingDistributionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateStreamingDistributionResponsePrivate::CreateStreamingDistributionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStreamingDistributionResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace AWS
