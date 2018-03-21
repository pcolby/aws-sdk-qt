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

#include "describeimageattributeresponse.h"
#include "describeimageattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeImageAttributeResponse
 *
 * @brief  Handles EC2 DescribeImageAttribute responses.
 *
 * @see    EC2Client::describeImageAttribute
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeImageAttributeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeImageAttributeResponsePrivate(this), parent)
{
    setRequest(new DescribeImageAttributeRequest(request));
    setReply(reply);
}

const DescribeImageAttributeRequest * DescribeImageAttributeResponse::request() const
{
    Q_D(const DescribeImageAttributeResponse);
    return static_cast<const DescribeImageAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeImageAttribute response.
 *
 * @param  response  Response to parse.
 */
void DescribeImageAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeImageAttributeResponsePrivate
 *
 * @brief  Private implementation for DescribeImageAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeImageAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeImageAttributeResponse instance.
 */
DescribeImageAttributeResponsePrivate::DescribeImageAttributeResponsePrivate(
    DescribeImageAttributeQueueResponse * const q) : DescribeImageAttributePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeImageAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeImageAttributeResponsePrivate::DescribeImageAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeImageAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
