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

#include "getdistributionresponse.h"
#include "getdistributionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFront {

/**
 * @class  GetDistributionResponse
 *
 * @brief  Handles CloudFront GetDistribution responses.
 *
 * @see    CloudFrontClient::getDistribution
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDistributionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetDistributionResponsePrivate(this), parent)
{
    setRequest(new GetDistributionRequest(request));
    setReply(reply);
}

const GetDistributionRequest * GetDistributionResponse::request() const
{
    Q_D(const GetDistributionResponse);
    return static_cast<const GetDistributionRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront GetDistribution response.
 *
 * @param  response  Response to parse.
 */
void GetDistributionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDistributionResponsePrivate
 *
 * @brief  Private implementation for GetDistributionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDistributionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDistributionResponse instance.
 */
GetDistributionResponsePrivate::GetDistributionResponsePrivate(
    GetDistributionQueueResponse * const q) : GetDistributionPrivate(q)
{

}

/**
 * @brief  Parse an CloudFront GetDistributionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDistributionResponsePrivate::GetDistributionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDistributionResponse"));
    /// @todo
}
