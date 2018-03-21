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

#include "describestackresourceresponse.h"
#include "describestackresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFormation {

/**
 * @class  DescribeStackResourceResponse
 *
 * @brief  Handles CloudFormation DescribeStackResource responses.
 *
 * @see    CloudFormationClient::describeStackResource
 */

/**
 * @brief  Constructs a new DescribeStackResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeStackResourceResponse::DescribeStackResourceResponse(
        const DescribeStackResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new DescribeStackResourceResponsePrivate(this), parent)
{
    setRequest(new DescribeStackResourceRequest(request));
    setReply(reply);
}

const DescribeStackResourceRequest * DescribeStackResourceResponse::request() const
{
    Q_D(const DescribeStackResourceResponse);
    return static_cast<const DescribeStackResourceRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation DescribeStackResource response.
 *
 * @param  response  Response to parse.
 */
void DescribeStackResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeStackResourceResponsePrivate
 *
 * @brief  Private implementation for DescribeStackResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeStackResourceResponse instance.
 */
DescribeStackResourceResponsePrivate::DescribeStackResourceResponsePrivate(
    DescribeStackResourceQueueResponse * const q) : DescribeStackResourcePrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation DescribeStackResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeStackResourceResponsePrivate::DescribeStackResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStackResourceResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace AWS
