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

#include "describehandshakeresponse.h"
#include "describehandshakeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Organizations {

/**
 * @class  DescribeHandshakeResponse
 *
 * @brief  Handles Organizations DescribeHandshake responses.
 *
 * @see    OrganizationsClient::describeHandshake
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeHandshakeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new DescribeHandshakeResponsePrivate(this), parent)
{
    setRequest(new DescribeHandshakeRequest(request));
    setReply(reply);
}

const DescribeHandshakeRequest * DescribeHandshakeResponse::request() const
{
    Q_D(const DescribeHandshakeResponse);
    return static_cast<const DescribeHandshakeRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations DescribeHandshake response.
 *
 * @param  response  Response to parse.
 */
void DescribeHandshakeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeHandshakeResponsePrivate
 *
 * @brief  Private implementation for DescribeHandshakeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHandshakeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeHandshakeResponse instance.
 */
DescribeHandshakeResponsePrivate::DescribeHandshakeResponsePrivate(
    DescribeHandshakeQueueResponse * const q) : DescribeHandshakePrivate(q)
{

}

/**
 * @brief  Parse an Organizations DescribeHandshakeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeHandshakeResponsePrivate::DescribeHandshakeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHandshakeResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace AWS
