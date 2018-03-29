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
namespace Redshift {

/**
 * @class  DescribeEventSubscriptionsResponse
 *
 * @brief  Handles Redshift DescribeEventSubscriptions responses.
 *
 * @see    RedshiftClient::describeEventSubscriptions
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
    : DescribeEventSubscriptionsResponse(new DescribeEventSubscriptionsResponsePrivate(this), parent)
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
 * @brief  Parse a Redshift DescribeEventSubscriptions response.
 *
 * @param  response  Response to parse.
 */
void DescribeEventSubscriptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeEventSubscriptionsResponse);
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
    DescribeEventSubscriptionsResponse * const q) : RedshiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an Redshift DescribeEventSubscriptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEventSubscriptionsResponsePrivate::parseDescribeEventSubscriptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEventSubscriptionsResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
