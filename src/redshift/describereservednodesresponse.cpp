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

#include "describereservednodesresponse.h"
#include "describereservednodesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  DescribeReservedNodesResponse
 *
 * @brief  Handles Redshift DescribeReservedNodes responses.
 *
 * @see    RedshiftClient::describeReservedNodes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReservedNodesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DescribeReservedNodesResponsePrivate(this), parent)
{
    setRequest(new DescribeReservedNodesRequest(request));
    setReply(reply);
}

const DescribeReservedNodesRequest * DescribeReservedNodesResponse::request() const
{
    Q_D(const DescribeReservedNodesResponse);
    return static_cast<const DescribeReservedNodesRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DescribeReservedNodes response.
 *
 * @param  response  Response to parse.
 */
void DescribeReservedNodesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeReservedNodesResponsePrivate
 *
 * @brief  Private implementation for DescribeReservedNodesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedNodesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeReservedNodesResponse instance.
 */
DescribeReservedNodesResponsePrivate::DescribeReservedNodesResponsePrivate(
    DescribeReservedNodesQueueResponse * const q) : DescribeReservedNodesPrivate(q)
{

}

/**
 * @brief  Parse an Redshift DescribeReservedNodesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeReservedNodesResponsePrivate::DescribeReservedNodesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReservedNodesResponse"));
    /// @todo
}
