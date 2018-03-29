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

#include "describeeventtopicsresponse.h"
#include "describeeventtopicsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectoryService {

/**
 * @class  DescribeEventTopicsResponse
 *
 * @brief  Handles DirectoryService DescribeEventTopics responses.
 *
 * @see    DirectoryServiceClient::describeEventTopics
 */

/**
 * @brief  Constructs a new DescribeEventTopicsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEventTopicsResponse::DescribeEventTopicsResponse(
        const DescribeEventTopicsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new DescribeEventTopicsResponsePrivate(this), parent)
{
    setRequest(new DescribeEventTopicsRequest(request));
    setReply(reply);
}

const DescribeEventTopicsRequest * DescribeEventTopicsResponse::request() const
{
    Q_D(const DescribeEventTopicsResponse);
    return static_cast<const DescribeEventTopicsRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService DescribeEventTopics response.
 *
 * @param  response  Response to parse.
 */
void DescribeEventTopicsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEventTopicsResponsePrivate
 *
 * @brief  Private implementation for DescribeEventTopicsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventTopicsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEventTopicsResponse instance.
 */
DescribeEventTopicsResponsePrivate::DescribeEventTopicsResponsePrivate(
    DescribeEventTopicsQueueResponse * const q) : DescribeEventTopicsPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService DescribeEventTopicsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEventTopicsResponsePrivate::DescribeEventTopicsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEventTopicsResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace AWS
