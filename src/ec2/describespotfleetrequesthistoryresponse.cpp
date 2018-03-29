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

#include "describespotfleetrequesthistoryresponse.h"
#include "describespotfleetrequesthistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeSpotFleetRequestHistoryResponse
 *
 * @brief  Handles EC2 DescribeSpotFleetRequestHistory responses.
 *
 * @see    EC2Client::describeSpotFleetRequestHistory
 */

/**
 * @brief  Constructs a new DescribeSpotFleetRequestHistoryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSpotFleetRequestHistoryResponse::DescribeSpotFleetRequestHistoryResponse(
        const DescribeSpotFleetRequestHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeSpotFleetRequestHistoryResponsePrivate(this), parent)
{
    setRequest(new DescribeSpotFleetRequestHistoryRequest(request));
    setReply(reply);
}

const DescribeSpotFleetRequestHistoryRequest * DescribeSpotFleetRequestHistoryResponse::request() const
{
    Q_D(const DescribeSpotFleetRequestHistoryResponse);
    return static_cast<const DescribeSpotFleetRequestHistoryRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeSpotFleetRequestHistory response.
 *
 * @param  response  Response to parse.
 */
void DescribeSpotFleetRequestHistoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeSpotFleetRequestHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeSpotFleetRequestHistoryResponsePrivate
 *
 * @brief  Private implementation for DescribeSpotFleetRequestHistoryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSpotFleetRequestHistoryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeSpotFleetRequestHistoryResponse instance.
 */
DescribeSpotFleetRequestHistoryResponsePrivate::DescribeSpotFleetRequestHistoryResponsePrivate(
    DescribeSpotFleetRequestHistoryResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeSpotFleetRequestHistoryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeSpotFleetRequestHistoryResponsePrivate::DescribeSpotFleetRequestHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSpotFleetRequestHistoryResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
