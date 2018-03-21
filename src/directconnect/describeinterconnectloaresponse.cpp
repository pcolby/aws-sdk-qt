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

#include "describeinterconnectloaresponse.h"
#include "describeinterconnectloaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectConnect {

/**
 * @class  DescribeInterconnectLoaResponse
 *
 * @brief  Handles DirectConnect DescribeInterconnectLoa responses.
 *
 * @see    DirectConnectClient::describeInterconnectLoa
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeInterconnectLoaResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeInterconnectLoaResponsePrivate(this), parent)
{
    setRequest(new DescribeInterconnectLoaRequest(request));
    setReply(reply);
}

const DescribeInterconnectLoaRequest * DescribeInterconnectLoaResponse::request() const
{
    Q_D(const DescribeInterconnectLoaResponse);
    return static_cast<const DescribeInterconnectLoaRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect DescribeInterconnectLoa response.
 *
 * @param  response  Response to parse.
 */
void DescribeInterconnectLoaResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeInterconnectLoaResponsePrivate
 *
 * @brief  Private implementation for DescribeInterconnectLoaResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInterconnectLoaResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeInterconnectLoaResponse instance.
 */
DescribeInterconnectLoaResponsePrivate::DescribeInterconnectLoaResponsePrivate(
    DescribeInterconnectLoaQueueResponse * const q) : DescribeInterconnectLoaPrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect DescribeInterconnectLoaResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeInterconnectLoaResponsePrivate::DescribeInterconnectLoaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInterconnectLoaResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace AWS
