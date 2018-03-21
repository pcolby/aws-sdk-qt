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

#include "describeworkingstorageresponse.h"
#include "describeworkingstorageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  DescribeWorkingStorageResponse
 *
 * @brief  Handles StorageGateway DescribeWorkingStorage responses.
 *
 * @see    StorageGatewayClient::describeWorkingStorage
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeWorkingStorageResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new DescribeWorkingStorageResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkingStorageRequest(request));
    setReply(reply);
}

const DescribeWorkingStorageRequest * DescribeWorkingStorageResponse::request() const
{
    Q_D(const DescribeWorkingStorageResponse);
    return static_cast<const DescribeWorkingStorageRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DescribeWorkingStorage response.
 *
 * @param  response  Response to parse.
 */
void DescribeWorkingStorageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeWorkingStorageResponsePrivate
 *
 * @brief  Private implementation for DescribeWorkingStorageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeWorkingStorageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeWorkingStorageResponse instance.
 */
DescribeWorkingStorageResponsePrivate::DescribeWorkingStorageResponsePrivate(
    DescribeWorkingStorageQueueResponse * const q) : DescribeWorkingStoragePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DescribeWorkingStorageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeWorkingStorageResponsePrivate::DescribeWorkingStorageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkingStorageResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace AWS
