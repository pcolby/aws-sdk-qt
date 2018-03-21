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

#include "describevolumesresponse.h"
#include "describevolumesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  DescribeVolumesResponse
 *
 * @brief  Handles OpsWorks DescribeVolumes responses.
 *
 * @see    OpsWorksClient::describeVolumes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVolumesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DescribeVolumesResponsePrivate(this), parent)
{
    setRequest(new DescribeVolumesRequest(request));
    setReply(reply);
}

const DescribeVolumesRequest * DescribeVolumesResponse::request() const
{
    Q_D(const DescribeVolumesResponse);
    return static_cast<const DescribeVolumesRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DescribeVolumes response.
 *
 * @param  response  Response to parse.
 */
void DescribeVolumesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeVolumesResponsePrivate
 *
 * @brief  Private implementation for DescribeVolumesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVolumesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVolumesResponse instance.
 */
DescribeVolumesResponsePrivate::DescribeVolumesResponsePrivate(
    DescribeVolumesQueueResponse * const q) : DescribeVolumesPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DescribeVolumesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVolumesResponsePrivate::DescribeVolumesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVolumesResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
