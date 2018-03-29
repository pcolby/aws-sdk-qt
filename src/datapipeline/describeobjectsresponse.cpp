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

#include "describeobjectsresponse.h"
#include "describeobjectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataPipeline {

/**
 * @class  DescribeObjectsResponse
 *
 * @brief  Handles DataPipeline DescribeObjects responses.
 *
 * @see    DataPipelineClient::describeObjects
 */

/**
 * @brief  Constructs a new DescribeObjectsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeObjectsResponse::DescribeObjectsResponse(
        const DescribeObjectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataPipelineResponse(new DescribeObjectsResponsePrivate(this), parent)
{
    setRequest(new DescribeObjectsRequest(request));
    setReply(reply);
}

const DescribeObjectsRequest * DescribeObjectsResponse::request() const
{
    Q_D(const DescribeObjectsResponse);
    return static_cast<const DescribeObjectsRequest *>(d->request);
}

/**
 * @brief  Parse a DataPipeline DescribeObjects response.
 *
 * @param  response  Response to parse.
 */
void DescribeObjectsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeObjectsResponsePrivate
 *
 * @brief  Private implementation for DescribeObjectsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeObjectsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeObjectsResponse instance.
 */
DescribeObjectsResponsePrivate::DescribeObjectsResponsePrivate(
    DescribeObjectsResponse * const q) : DataPipelineResponsePrivate(q)
{

}

/**
 * @brief  Parse an DataPipeline DescribeObjectsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeObjectsResponsePrivate::DescribeObjectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeObjectsResponse"));
    /// @todo
}

} // namespace DataPipeline
} // namespace QtAws
