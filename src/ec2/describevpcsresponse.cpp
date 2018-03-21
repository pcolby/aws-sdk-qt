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

#include "describevpcsresponse.h"
#include "describevpcsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeVpcsResponse
 *
 * @brief  Handles EC2 DescribeVpcs responses.
 *
 * @see    EC2Client::describeVpcs
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVpcsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeVpcsResponsePrivate(this), parent)
{
    setRequest(new DescribeVpcsRequest(request));
    setReply(reply);
}

const DescribeVpcsRequest * DescribeVpcsResponse::request() const
{
    Q_D(const DescribeVpcsResponse);
    return static_cast<const DescribeVpcsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeVpcs response.
 *
 * @param  response  Response to parse.
 */
void DescribeVpcsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeVpcsResponsePrivate
 *
 * @brief  Private implementation for DescribeVpcsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVpcsResponse instance.
 */
DescribeVpcsResponsePrivate::DescribeVpcsResponsePrivate(
    DescribeVpcsQueueResponse * const q) : DescribeVpcsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeVpcsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVpcsResponsePrivate::DescribeVpcsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpcsResponse"));
    /// @todo
}
