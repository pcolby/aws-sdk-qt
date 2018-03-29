/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describegroupresponse.h"
#include "describegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkMail {

/**
 * @class  DescribeGroupResponse
 *
 * @brief  Handles WorkMail DescribeGroup responses.
 *
 * @see    WorkMailClient::describeGroup
 */

/**
 * @brief  Constructs a new DescribeGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeGroupResponse::DescribeGroupResponse(
        const DescribeGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new DescribeGroupResponsePrivate(this), parent)
{
    setRequest(new DescribeGroupRequest(request));
    setReply(reply);
}

const DescribeGroupRequest * DescribeGroupResponse::request() const
{
    Q_D(const DescribeGroupResponse);
    return static_cast<const DescribeGroupRequest *>(d->request);
}

/**
 * @brief  Parse a WorkMail DescribeGroup response.
 *
 * @param  response  Response to parse.
 */
void DescribeGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeGroupResponsePrivate
 *
 * @brief  Private implementation for DescribeGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeGroupResponse instance.
 */
DescribeGroupResponsePrivate::DescribeGroupResponsePrivate(
    DescribeGroupQueueResponse * const q) : DescribeGroupPrivate(q)
{

}

/**
 * @brief  Parse an WorkMail DescribeGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeGroupResponsePrivate::DescribeGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGroupResponse"));
    /// @todo
}

} // namespace WorkMail
} // namespace AWS
