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

#include "getdistributionconfigresponse.h"
#include "getdistributionconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFront {

/**
 * @class  GetDistributionConfigResponse
 *
 * @brief  Handles CloudFront GetDistributionConfig responses.
 *
 * @see    CloudFrontClient::getDistributionConfig
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDistributionConfigResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetDistributionConfigResponsePrivate(this), parent)
{
    setRequest(new GetDistributionConfigRequest(request));
    setReply(reply);
}

const GetDistributionConfigRequest * GetDistributionConfigResponse::request() const
{
    Q_D(const GetDistributionConfigResponse);
    return static_cast<const GetDistributionConfigRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront GetDistributionConfig response.
 *
 * @param  response  Response to parse.
 */
void GetDistributionConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDistributionConfigResponsePrivate
 *
 * @brief  Private implementation for GetDistributionConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDistributionConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDistributionConfigResponse instance.
 */
GetDistributionConfigResponsePrivate::GetDistributionConfigResponsePrivate(
    GetDistributionConfigQueueResponse * const q) : GetDistributionConfigPrivate(q)
{

}

/**
 * @brief  Parse an CloudFront GetDistributionConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDistributionConfigResponsePrivate::GetDistributionConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDistributionConfigResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace AWS
