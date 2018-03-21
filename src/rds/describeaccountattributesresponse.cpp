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

#include "describeaccountattributesresponse.h"
#include "describeaccountattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  DescribeAccountAttributesResponse
 *
 * @brief  Handles RDS DescribeAccountAttributes responses.
 *
 * @see    RDSClient::describeAccountAttributes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAccountAttributesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeAccountAttributesResponsePrivate(this), parent)
{
    setRequest(new DescribeAccountAttributesRequest(request));
    setReply(reply);
}

const DescribeAccountAttributesRequest * DescribeAccountAttributesResponse::request() const
{
    Q_D(const DescribeAccountAttributesResponse);
    return static_cast<const DescribeAccountAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeAccountAttributes response.
 *
 * @param  response  Response to parse.
 */
void DescribeAccountAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAccountAttributesResponsePrivate
 *
 * @brief  Private implementation for DescribeAccountAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAccountAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAccountAttributesResponse instance.
 */
DescribeAccountAttributesResponsePrivate::DescribeAccountAttributesResponsePrivate(
    DescribeAccountAttributesQueueResponse * const q) : DescribeAccountAttributesPrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeAccountAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAccountAttributesResponsePrivate::DescribeAccountAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccountAttributesResponse"));
    /// @todo
}
