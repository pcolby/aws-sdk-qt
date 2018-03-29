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

#include "describeindexresponse.h"
#include "describeindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  DescribeIndexResponse
 *
 * @brief  Handles IoT DescribeIndex responses.
 *
 * @see    IoTClient::describeIndex
 */

/**
 * @brief  Constructs a new DescribeIndexResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeIndexResponse::DescribeIndexResponse(
        const DescribeIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DescribeIndexResponsePrivate(this), parent)
{
    setRequest(new DescribeIndexRequest(request));
    setReply(reply);
}

const DescribeIndexRequest * DescribeIndexResponse::request() const
{
    Q_D(const DescribeIndexResponse);
    return static_cast<const DescribeIndexRequest *>(d->request);
}

/**
 * @brief  Parse a IoT DescribeIndex response.
 *
 * @param  response  Response to parse.
 */
void DescribeIndexResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeIndexResponsePrivate
 *
 * @brief  Private implementation for DescribeIndexResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeIndexResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeIndexResponse instance.
 */
DescribeIndexResponsePrivate::DescribeIndexResponsePrivate(
    DescribeIndexQueueResponse * const q) : DescribeIndexPrivate(q)
{

}

/**
 * @brief  Parse an IoT DescribeIndexResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeIndexResponsePrivate::DescribeIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeIndexResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
