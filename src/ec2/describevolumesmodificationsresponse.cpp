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

#include "describevolumesmodificationsresponse.h"
#include "describevolumesmodificationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeVolumesModificationsResponse
 *
 * @brief  Handles EC2 DescribeVolumesModifications responses.
 *
 * @see    EC2Client::describeVolumesModifications
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVolumesModificationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeVolumesModificationsResponsePrivate(this), parent)
{
    setRequest(new DescribeVolumesModificationsRequest(request));
    setReply(reply);
}

const DescribeVolumesModificationsRequest * DescribeVolumesModificationsResponse::request() const
{
    Q_D(const DescribeVolumesModificationsResponse);
    return static_cast<const DescribeVolumesModificationsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeVolumesModifications response.
 *
 * @param  response  Response to parse.
 */
void DescribeVolumesModificationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeVolumesModificationsResponsePrivate
 *
 * @brief  Private implementation for DescribeVolumesModificationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVolumesModificationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVolumesModificationsResponse instance.
 */
DescribeVolumesModificationsResponsePrivate::DescribeVolumesModificationsResponsePrivate(
    DescribeVolumesModificationsQueueResponse * const q) : DescribeVolumesModificationsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeVolumesModificationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVolumesModificationsResponsePrivate::DescribeVolumesModificationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVolumesModificationsResponse"));
    /// @todo
}
