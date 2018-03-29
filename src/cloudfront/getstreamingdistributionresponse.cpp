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

#include "getstreamingdistributionresponse.h"
#include "getstreamingdistributionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/**
 * @class  GetStreamingDistributionResponse
 *
 * @brief  Handles CloudFront GetStreamingDistribution responses.
 *
 * @see    CloudFrontClient::getStreamingDistribution
 */

/**
 * @brief  Constructs a new GetStreamingDistributionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetStreamingDistributionResponse::GetStreamingDistributionResponse(
        const GetStreamingDistributionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetStreamingDistributionResponsePrivate(this), parent)
{
    setRequest(new GetStreamingDistributionRequest(request));
    setReply(reply);
}

const GetStreamingDistributionRequest * GetStreamingDistributionResponse::request() const
{
    Q_D(const GetStreamingDistributionResponse);
    return static_cast<const GetStreamingDistributionRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront GetStreamingDistribution response.
 *
 * @param  response  Response to parse.
 */
void GetStreamingDistributionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetStreamingDistributionResponsePrivate
 *
 * @brief  Private implementation for GetStreamingDistributionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetStreamingDistributionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetStreamingDistributionResponse instance.
 */
GetStreamingDistributionResponsePrivate::GetStreamingDistributionResponsePrivate(
    GetStreamingDistributionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFront GetStreamingDistributionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetStreamingDistributionResponsePrivate::GetStreamingDistributionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStreamingDistributionResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
