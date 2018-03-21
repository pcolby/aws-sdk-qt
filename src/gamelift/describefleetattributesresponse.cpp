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

#include "describefleetattributesresponse.h"
#include "describefleetattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  DescribeFleetAttributesResponse
 *
 * @brief  Handles GameLift DescribeFleetAttributes responses.
 *
 * @see    GameLiftClient::describeFleetAttributes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeFleetAttributesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DescribeFleetAttributesResponsePrivate(this), parent)
{
    setRequest(new DescribeFleetAttributesRequest(request));
    setReply(reply);
}

const DescribeFleetAttributesRequest * DescribeFleetAttributesResponse::request() const
{
    Q_D(const DescribeFleetAttributesResponse);
    return static_cast<const DescribeFleetAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DescribeFleetAttributes response.
 *
 * @param  response  Response to parse.
 */
void DescribeFleetAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeFleetAttributesResponsePrivate
 *
 * @brief  Private implementation for DescribeFleetAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFleetAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeFleetAttributesResponse instance.
 */
DescribeFleetAttributesResponsePrivate::DescribeFleetAttributesResponsePrivate(
    DescribeFleetAttributesQueueResponse * const q) : DescribeFleetAttributesPrivate(q)
{

}

/**
 * @brief  Parse an GameLift DescribeFleetAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeFleetAttributesResponsePrivate::DescribeFleetAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFleetAttributesResponse"));
    /// @todo
}
