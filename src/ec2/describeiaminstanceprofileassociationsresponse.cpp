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

#include "describeiaminstanceprofileassociationsresponse.h"
#include "describeiaminstanceprofileassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeIamInstanceProfileAssociationsResponse
 *
 * @brief  Handles EC2 DescribeIamInstanceProfileAssociations responses.
 *
 * @see    EC2Client::describeIamInstanceProfileAssociations
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeIamInstanceProfileAssociationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeIamInstanceProfileAssociationsResponsePrivate(this), parent)
{
    setRequest(new DescribeIamInstanceProfileAssociationsRequest(request));
    setReply(reply);
}

const DescribeIamInstanceProfileAssociationsRequest * DescribeIamInstanceProfileAssociationsResponse::request() const
{
    Q_D(const DescribeIamInstanceProfileAssociationsResponse);
    return static_cast<const DescribeIamInstanceProfileAssociationsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeIamInstanceProfileAssociations response.
 *
 * @param  response  Response to parse.
 */
void DescribeIamInstanceProfileAssociationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeIamInstanceProfileAssociationsResponsePrivate
 *
 * @brief  Private implementation for DescribeIamInstanceProfileAssociationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeIamInstanceProfileAssociationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeIamInstanceProfileAssociationsResponse instance.
 */
DescribeIamInstanceProfileAssociationsResponsePrivate::DescribeIamInstanceProfileAssociationsResponsePrivate(
    DescribeIamInstanceProfileAssociationsQueueResponse * const q) : DescribeIamInstanceProfileAssociationsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeIamInstanceProfileAssociationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeIamInstanceProfileAssociationsResponsePrivate::DescribeIamInstanceProfileAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeIamInstanceProfileAssociationsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
