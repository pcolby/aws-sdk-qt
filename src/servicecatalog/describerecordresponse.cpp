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

#include "describerecordresponse.h"
#include "describerecordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  DescribeRecordResponse
 *
 * @brief  Handles ServiceCatalog DescribeRecord responses.
 *
 * @see    ServiceCatalogClient::describeRecord
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeRecordResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribeRecordResponsePrivate(this), parent)
{
    setRequest(new DescribeRecordRequest(request));
    setReply(reply);
}

const DescribeRecordRequest * DescribeRecordResponse::request() const
{
    Q_D(const DescribeRecordResponse);
    return static_cast<const DescribeRecordRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog DescribeRecord response.
 *
 * @param  response  Response to parse.
 */
void DescribeRecordResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeRecordResponsePrivate
 *
 * @brief  Private implementation for DescribeRecordResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRecordResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeRecordResponse instance.
 */
DescribeRecordResponsePrivate::DescribeRecordResponsePrivate(
    DescribeRecordQueueResponse * const q) : DescribeRecordPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog DescribeRecordResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeRecordResponsePrivate::DescribeRecordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRecordResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace AWS
