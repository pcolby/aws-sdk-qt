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

#include "describeinstanceassociationsstatusresponse.h"
#include "describeinstanceassociationsstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  DescribeInstanceAssociationsStatusResponse
 *
 * @brief  Handles SSM DescribeInstanceAssociationsStatus responses.
 *
 * @see    SSMClient::describeInstanceAssociationsStatus
 */

/**
 * @brief  Constructs a new DescribeInstanceAssociationsStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeInstanceAssociationsStatusResponse::DescribeInstanceAssociationsStatusResponse(
        const DescribeInstanceAssociationsStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DescribeInstanceAssociationsStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeInstanceAssociationsStatusRequest(request));
    setReply(reply);
}

const DescribeInstanceAssociationsStatusRequest * DescribeInstanceAssociationsStatusResponse::request() const
{
    Q_D(const DescribeInstanceAssociationsStatusResponse);
    return static_cast<const DescribeInstanceAssociationsStatusRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribeInstanceAssociationsStatus response.
 *
 * @param  response  Response to parse.
 */
void DescribeInstanceAssociationsStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeInstanceAssociationsStatusResponsePrivate
 *
 * @brief  Private implementation for DescribeInstanceAssociationsStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstanceAssociationsStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeInstanceAssociationsStatusResponse instance.
 */
DescribeInstanceAssociationsStatusResponsePrivate::DescribeInstanceAssociationsStatusResponsePrivate(
    DescribeInstanceAssociationsStatusQueueResponse * const q) : DescribeInstanceAssociationsStatusPrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribeInstanceAssociationsStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeInstanceAssociationsStatusResponsePrivate::DescribeInstanceAssociationsStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInstanceAssociationsStatusResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
