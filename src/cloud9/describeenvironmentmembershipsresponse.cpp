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

#include "describeenvironmentmembershipsresponse.h"
#include "describeenvironmentmembershipsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Cloud9 {

/**
 * @class  DescribeEnvironmentMembershipsResponse
 *
 * @brief  Handles Cloud9 DescribeEnvironmentMemberships responses.
 *
 * @see    Cloud9Client::describeEnvironmentMemberships
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEnvironmentMembershipsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Cloud9Response(new DescribeEnvironmentMembershipsResponsePrivate(this), parent)
{
    setRequest(new DescribeEnvironmentMembershipsRequest(request));
    setReply(reply);
}

const DescribeEnvironmentMembershipsRequest * DescribeEnvironmentMembershipsResponse::request() const
{
    Q_D(const DescribeEnvironmentMembershipsResponse);
    return static_cast<const DescribeEnvironmentMembershipsRequest *>(d->request);
}

/**
 * @brief  Parse a Cloud9 DescribeEnvironmentMemberships response.
 *
 * @param  response  Response to parse.
 */
void DescribeEnvironmentMembershipsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEnvironmentMembershipsResponsePrivate
 *
 * @brief  Private implementation for DescribeEnvironmentMembershipsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEnvironmentMembershipsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEnvironmentMembershipsResponse instance.
 */
DescribeEnvironmentMembershipsResponsePrivate::DescribeEnvironmentMembershipsResponsePrivate(
    DescribeEnvironmentMembershipsQueueResponse * const q) : DescribeEnvironmentMembershipsPrivate(q)
{

}

/**
 * @brief  Parse an Cloud9 DescribeEnvironmentMembershipsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEnvironmentMembershipsResponsePrivate::DescribeEnvironmentMembershipsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEnvironmentMembershipsResponse"));
    /// @todo
}

} // namespace Cloud9
} // namespace AWS
