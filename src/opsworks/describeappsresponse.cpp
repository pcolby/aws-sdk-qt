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

#include "describeappsresponse.h"
#include "describeappsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  DescribeAppsResponse
 *
 * @brief  Handles OpsWorks DescribeApps responses.
 *
 * @see    OpsWorksClient::describeApps
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAppsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DescribeAppsResponsePrivate(this), parent)
{
    setRequest(new DescribeAppsRequest(request));
    setReply(reply);
}

const DescribeAppsRequest * DescribeAppsResponse::request() const
{
    Q_D(const DescribeAppsResponse);
    return static_cast<const DescribeAppsRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DescribeApps response.
 *
 * @param  response  Response to parse.
 */
void DescribeAppsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAppsResponsePrivate
 *
 * @brief  Private implementation for DescribeAppsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAppsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAppsResponse instance.
 */
DescribeAppsResponsePrivate::DescribeAppsResponsePrivate(
    DescribeAppsQueueResponse * const q) : DescribeAppsPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DescribeAppsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAppsResponsePrivate::DescribeAppsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAppsResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
