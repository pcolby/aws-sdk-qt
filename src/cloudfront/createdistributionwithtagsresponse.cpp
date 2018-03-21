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

#include "createdistributionwithtagsresponse.h"
#include "createdistributionwithtagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFront {

/**
 * @class  CreateDistributionWithTagsResponse
 *
 * @brief  Handles CloudFront CreateDistributionWithTags responses.
 *
 * @see    CloudFrontClient::createDistributionWithTags
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDistributionWithTagsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateDistributionWithTagsResponsePrivate(this), parent)
{
    setRequest(new CreateDistributionWithTagsRequest(request));
    setReply(reply);
}

const CreateDistributionWithTagsRequest * CreateDistributionWithTagsResponse::request() const
{
    Q_D(const CreateDistributionWithTagsResponse);
    return static_cast<const CreateDistributionWithTagsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront CreateDistributionWithTags response.
 *
 * @param  response  Response to parse.
 */
void CreateDistributionWithTagsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDistributionWithTagsResponsePrivate
 *
 * @brief  Private implementation for CreateDistributionWithTagsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDistributionWithTagsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDistributionWithTagsResponse instance.
 */
CreateDistributionWithTagsResponsePrivate::CreateDistributionWithTagsResponsePrivate(
    CreateDistributionWithTagsQueueResponse * const q) : CreateDistributionWithTagsPrivate(q)
{

}

/**
 * @brief  Parse an CloudFront CreateDistributionWithTagsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDistributionWithTagsResponsePrivate::CreateDistributionWithTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDistributionWithTagsResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace AWS
