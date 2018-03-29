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

#include "createstreamingdistributionwithtagsresponse.h"
#include "createstreamingdistributionwithtagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFront {

/**
 * @class  CreateStreamingDistributionWithTagsResponse
 *
 * @brief  Handles CloudFront CreateStreamingDistributionWithTags responses.
 *
 * @see    CloudFrontClient::createStreamingDistributionWithTags
 */

/**
 * @brief  Constructs a new CreateStreamingDistributionWithTagsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateStreamingDistributionWithTagsResponse::CreateStreamingDistributionWithTagsResponse(
        const CreateStreamingDistributionWithTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateStreamingDistributionWithTagsResponsePrivate(this), parent)
{
    setRequest(new CreateStreamingDistributionWithTagsRequest(request));
    setReply(reply);
}

const CreateStreamingDistributionWithTagsRequest * CreateStreamingDistributionWithTagsResponse::request() const
{
    Q_D(const CreateStreamingDistributionWithTagsResponse);
    return static_cast<const CreateStreamingDistributionWithTagsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront CreateStreamingDistributionWithTags response.
 *
 * @param  response  Response to parse.
 */
void CreateStreamingDistributionWithTagsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateStreamingDistributionWithTagsResponsePrivate
 *
 * @brief  Private implementation for CreateStreamingDistributionWithTagsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateStreamingDistributionWithTagsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateStreamingDistributionWithTagsResponse instance.
 */
CreateStreamingDistributionWithTagsResponsePrivate::CreateStreamingDistributionWithTagsResponsePrivate(
    CreateStreamingDistributionWithTagsQueueResponse * const q) : CreateStreamingDistributionWithTagsPrivate(q)
{

}

/**
 * @brief  Parse an CloudFront CreateStreamingDistributionWithTagsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateStreamingDistributionWithTagsResponsePrivate::CreateStreamingDistributionWithTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStreamingDistributionWithTagsResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace AWS
