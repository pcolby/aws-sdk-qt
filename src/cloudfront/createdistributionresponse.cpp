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

#include "createdistributionresponse.h"
#include "createdistributionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFront {

/**
 * @class  CreateDistributionResponse
 *
 * @brief  Handles CloudFront CreateDistribution responses.
 *
 * @see    CloudFrontClient::createDistribution
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDistributionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateDistributionResponsePrivate(this), parent)
{
    setRequest(new CreateDistributionRequest(request));
    setReply(reply);
}

const CreateDistributionRequest * CreateDistributionResponse::request() const
{
    Q_D(const CreateDistributionResponse);
    return static_cast<const CreateDistributionRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront CreateDistribution response.
 *
 * @param  response  Response to parse.
 */
void CreateDistributionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDistributionResponsePrivate
 *
 * @brief  Private implementation for CreateDistributionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDistributionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDistributionResponse instance.
 */
CreateDistributionResponsePrivate::CreateDistributionResponsePrivate(
    CreateDistributionQueueResponse * const q) : CreateDistributionPrivate(q)
{

}

/**
 * @brief  Parse an CloudFront CreateDistributionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDistributionResponsePrivate::CreateDistributionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDistributionResponse"));
    /// @todo
}
