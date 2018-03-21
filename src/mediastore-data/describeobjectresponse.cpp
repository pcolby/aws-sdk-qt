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

#include "describeobjectresponse.h"
#include "describeobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaStoreData {

/**
 * @class  DescribeObjectResponse
 *
 * @brief  Handles MediaStoreData DescribeObject responses.
 *
 * @see    MediaStoreDataClient::describeObject
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeObjectResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreDataResponse(new DescribeObjectResponsePrivate(this), parent)
{
    setRequest(new DescribeObjectRequest(request));
    setReply(reply);
}

const DescribeObjectRequest * DescribeObjectResponse::request() const
{
    Q_D(const DescribeObjectResponse);
    return static_cast<const DescribeObjectRequest *>(d->request);
}

/**
 * @brief  Parse a MediaStoreData DescribeObject response.
 *
 * @param  response  Response to parse.
 */
void DescribeObjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeObjectResponsePrivate
 *
 * @brief  Private implementation for DescribeObjectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeObjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeObjectResponse instance.
 */
DescribeObjectResponsePrivate::DescribeObjectResponsePrivate(
    DescribeObjectQueueResponse * const q) : DescribeObjectPrivate(q)
{

}

/**
 * @brief  Parse an MediaStoreData DescribeObjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeObjectResponsePrivate::DescribeObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeObjectResponse"));
    /// @todo
}

} // namespace MediaStoreData
} // namespace AWS
