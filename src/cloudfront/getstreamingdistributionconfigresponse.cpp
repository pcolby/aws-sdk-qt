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

#include "getstreamingdistributionconfigresponse.h"
#include "getstreamingdistributionconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/**
 * @class  GetStreamingDistributionConfigResponse
 *
 * @brief  Handles CloudFront GetStreamingDistributionConfig responses.
 *
 * @see    CloudFrontClient::getStreamingDistributionConfig
 */

/**
 * @brief  Constructs a new GetStreamingDistributionConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetStreamingDistributionConfigResponse::GetStreamingDistributionConfigResponse(
        const GetStreamingDistributionConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetStreamingDistributionConfigResponsePrivate(this), parent)
{
    setRequest(new GetStreamingDistributionConfigRequest(request));
    setReply(reply);
}

const GetStreamingDistributionConfigRequest * GetStreamingDistributionConfigResponse::request() const
{
    Q_D(const GetStreamingDistributionConfigResponse);
    return static_cast<const GetStreamingDistributionConfigRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront GetStreamingDistributionConfig response.
 *
 * @param  response  Response to parse.
 */
void GetStreamingDistributionConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetStreamingDistributionConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetStreamingDistributionConfigResponsePrivate
 *
 * @brief  Private implementation for GetStreamingDistributionConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetStreamingDistributionConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetStreamingDistributionConfigResponse instance.
 */
GetStreamingDistributionConfigResponsePrivate::GetStreamingDistributionConfigResponsePrivate(
    GetStreamingDistributionConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFront GetStreamingDistributionConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetStreamingDistributionConfigResponsePrivate::GetStreamingDistributionConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStreamingDistributionConfigResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
