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

#include "describemaintenancewindowtargetsresponse.h"
#include "describemaintenancewindowtargetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeMaintenanceWindowTargetsResponse
 *
 * @brief  Handles SSM DescribeMaintenanceWindowTargets responses.
 *
 * @see    SSMClient::describeMaintenanceWindowTargets
 */

/**
 * @brief  Constructs a new DescribeMaintenanceWindowTargetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMaintenanceWindowTargetsResponse::DescribeMaintenanceWindowTargetsResponse(
        const DescribeMaintenanceWindowTargetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeMaintenanceWindowTargetsResponse(new DescribeMaintenanceWindowTargetsResponsePrivate(this), parent)
{
    setRequest(new DescribeMaintenanceWindowTargetsRequest(request));
    setReply(reply);
}

const DescribeMaintenanceWindowTargetsRequest * DescribeMaintenanceWindowTargetsResponse::request() const
{
    Q_D(const DescribeMaintenanceWindowTargetsResponse);
    return static_cast<const DescribeMaintenanceWindowTargetsRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribeMaintenanceWindowTargets response.
 *
 * @param  response  Response to parse.
 */
void DescribeMaintenanceWindowTargetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeMaintenanceWindowTargetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeMaintenanceWindowTargetsResponsePrivate
 *
 * @brief  Private implementation for DescribeMaintenanceWindowTargetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMaintenanceWindowTargetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeMaintenanceWindowTargetsResponse instance.
 */
DescribeMaintenanceWindowTargetsResponsePrivate::DescribeMaintenanceWindowTargetsResponsePrivate(
    DescribeMaintenanceWindowTargetsResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribeMaintenanceWindowTargetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeMaintenanceWindowTargetsResponsePrivate::parseDescribeMaintenanceWindowTargetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMaintenanceWindowTargetsResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
