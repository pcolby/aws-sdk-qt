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

#include "describeeventsubscriptionsresponse.h"
#include "describeeventsubscriptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  DescribeEventSubscriptionsResponse
 *
 * @brief  Handles DatabaseMigrationService DescribeEventSubscriptions responses.
 *
 * @see    DatabaseMigrationServiceClient::describeEventSubscriptions
 */

/**
 * @brief  Constructs a new DescribeEventSubscriptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEventSubscriptionsResponse::DescribeEventSubscriptionsResponse(
        const DescribeEventSubscriptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DescribeEventSubscriptionsResponsePrivate(this), parent)
{
    setRequest(new DescribeEventSubscriptionsRequest(request));
    setReply(reply);
}

const DescribeEventSubscriptionsRequest * DescribeEventSubscriptionsResponse::request() const
{
    Q_D(const DescribeEventSubscriptionsResponse);
    return static_cast<const DescribeEventSubscriptionsRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService DescribeEventSubscriptions response.
 *
 * @param  response  Response to parse.
 */
void DescribeEventSubscriptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEventSubscriptionsResponsePrivate
 *
 * @brief  Private implementation for DescribeEventSubscriptionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventSubscriptionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEventSubscriptionsResponse instance.
 */
DescribeEventSubscriptionsResponsePrivate::DescribeEventSubscriptionsResponsePrivate(
    DescribeEventSubscriptionsResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService DescribeEventSubscriptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEventSubscriptionsResponsePrivate::DescribeEventSubscriptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEventSubscriptionsResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
