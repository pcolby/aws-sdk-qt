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

#include "deletestreamingdistributionresponse.h"
#include "deletestreamingdistributionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/**
 * @class  DeleteStreamingDistributionResponse
 *
 * @brief  Handles CloudFront DeleteStreamingDistribution responses.
 *
 * @see    CloudFrontClient::deleteStreamingDistribution
 */

/**
 * @brief  Constructs a new DeleteStreamingDistributionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteStreamingDistributionResponse::DeleteStreamingDistributionResponse(
        const DeleteStreamingDistributionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeleteStreamingDistributionResponsePrivate(this), parent)
{
    setRequest(new DeleteStreamingDistributionRequest(request));
    setReply(reply);
}

const DeleteStreamingDistributionRequest * DeleteStreamingDistributionResponse::request() const
{
    Q_D(const DeleteStreamingDistributionResponse);
    return static_cast<const DeleteStreamingDistributionRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront DeleteStreamingDistribution response.
 *
 * @param  response  Response to parse.
 */
void DeleteStreamingDistributionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteStreamingDistributionResponsePrivate
 *
 * @brief  Private implementation for DeleteStreamingDistributionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStreamingDistributionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteStreamingDistributionResponse instance.
 */
DeleteStreamingDistributionResponsePrivate::DeleteStreamingDistributionResponsePrivate(
    DeleteStreamingDistributionQueueResponse * const q) : DeleteStreamingDistributionPrivate(q)
{

}

/**
 * @brief  Parse an CloudFront DeleteStreamingDistributionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteStreamingDistributionResponsePrivate::DeleteStreamingDistributionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStreamingDistributionResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
