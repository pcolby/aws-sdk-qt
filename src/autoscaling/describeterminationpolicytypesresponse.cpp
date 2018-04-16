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

#include "describeterminationpolicytypesresponse.h"
#include "describeterminationpolicytypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeTerminationPolicyTypesResponse
 *
 * \brief The DescribeTerminationPolicyTypesResponse class provides an interace for AutoScaling DescribeTerminationPolicyTypes responses.
 *
 * \ingroup AutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::describeTerminationPolicyTypes
 */

/*!
 * @brief  Constructs a new DescribeTerminationPolicyTypesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTerminationPolicyTypesResponse::DescribeTerminationPolicyTypesResponse(
        const DescribeTerminationPolicyTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeTerminationPolicyTypesResponsePrivate(this), parent)
{
    setRequest(new DescribeTerminationPolicyTypesRequest(request));
    setReply(reply);
}

const DescribeTerminationPolicyTypesRequest * DescribeTerminationPolicyTypesResponse::request() const
{
    Q_D(const DescribeTerminationPolicyTypesResponse);
    return static_cast<const DescribeTerminationPolicyTypesRequest *>(d->request);
}

/*!
 * @brief  Parse a AutoScaling DescribeTerminationPolicyTypes response.
 *
 * @param  response  Response to parse.
 */
void DescribeTerminationPolicyTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeTerminationPolicyTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeTerminationPolicyTypesResponsePrivate
 *
 * \brief Private implementation for DescribeTerminationPolicyTypesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeTerminationPolicyTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTerminationPolicyTypesResponse instance.
 */
DescribeTerminationPolicyTypesResponsePrivate::DescribeTerminationPolicyTypesResponsePrivate(
    DescribeTerminationPolicyTypesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AutoScaling DescribeTerminationPolicyTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTerminationPolicyTypesResponsePrivate::parseDescribeTerminationPolicyTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTerminationPolicyTypesResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
