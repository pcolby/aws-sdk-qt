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

#include "describeloggingstatusresponse.h"
#include "describeloggingstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  DescribeLoggingStatusResponse
 *
 * @brief  Handles Redshift DescribeLoggingStatus responses.
 *
 * @see    RedshiftClient::describeLoggingStatus
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLoggingStatusResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DescribeLoggingStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeLoggingStatusRequest(request));
    setReply(reply);
}

const DescribeLoggingStatusRequest * DescribeLoggingStatusResponse::request() const
{
    Q_D(const DescribeLoggingStatusResponse);
    return static_cast<const DescribeLoggingStatusRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DescribeLoggingStatus response.
 *
 * @param  response  Response to parse.
 */
void DescribeLoggingStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeLoggingStatusResponsePrivate
 *
 * @brief  Private implementation for DescribeLoggingStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLoggingStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeLoggingStatusResponse instance.
 */
DescribeLoggingStatusResponsePrivate::DescribeLoggingStatusResponsePrivate(
    DescribeLoggingStatusQueueResponse * const q) : DescribeLoggingStatusPrivate(q)
{

}

/**
 * @brief  Parse an Redshift DescribeLoggingStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeLoggingStatusResponsePrivate::DescribeLoggingStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLoggingStatusResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace AWS
