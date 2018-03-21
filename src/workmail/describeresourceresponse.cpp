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

#include "describeresourceresponse.h"
#include "describeresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkMail {

/**
 * @class  DescribeResourceResponse
 *
 * @brief  Handles WorkMail DescribeResource responses.
 *
 * @see    WorkMailClient::describeResource
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeResourceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new DescribeResourceResponsePrivate(this), parent)
{
    setRequest(new DescribeResourceRequest(request));
    setReply(reply);
}

const DescribeResourceRequest * DescribeResourceResponse::request() const
{
    Q_D(const DescribeResourceResponse);
    return static_cast<const DescribeResourceRequest *>(d->request);
}

/**
 * @brief  Parse a WorkMail DescribeResource response.
 *
 * @param  response  Response to parse.
 */
void DescribeResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeResourceResponsePrivate
 *
 * @brief  Private implementation for DescribeResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeResourceResponse instance.
 */
DescribeResourceResponsePrivate::DescribeResourceResponsePrivate(
    DescribeResourceQueueResponse * const q) : DescribeResourcePrivate(q)
{

}

/**
 * @brief  Parse an WorkMail DescribeResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeResourceResponsePrivate::DescribeResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeResourceResponse"));
    /// @todo
}

} // namespace WorkMail
} // namespace AWS
