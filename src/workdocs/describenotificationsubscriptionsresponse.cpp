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

#include "describenotificationsubscriptionsresponse.h"
#include "describenotificationsubscriptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  DescribeNotificationSubscriptionsResponse
 *
 * @brief  Handles WorkDocs DescribeNotificationSubscriptions responses.
 *
 * @see    WorkDocsClient::describeNotificationSubscriptions
 */

/**
 * @brief  Constructs a new DescribeNotificationSubscriptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeNotificationSubscriptionsResponse::DescribeNotificationSubscriptionsResponse(
        const DescribeNotificationSubscriptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new DescribeNotificationSubscriptionsResponsePrivate(this), parent)
{
    setRequest(new DescribeNotificationSubscriptionsRequest(request));
    setReply(reply);
}

const DescribeNotificationSubscriptionsRequest * DescribeNotificationSubscriptionsResponse::request() const
{
    Q_D(const DescribeNotificationSubscriptionsResponse);
    return static_cast<const DescribeNotificationSubscriptionsRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs DescribeNotificationSubscriptions response.
 *
 * @param  response  Response to parse.
 */
void DescribeNotificationSubscriptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeNotificationSubscriptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeNotificationSubscriptionsResponsePrivate
 *
 * @brief  Private implementation for DescribeNotificationSubscriptionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNotificationSubscriptionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeNotificationSubscriptionsResponse instance.
 */
DescribeNotificationSubscriptionsResponsePrivate::DescribeNotificationSubscriptionsResponsePrivate(
    DescribeNotificationSubscriptionsResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs DescribeNotificationSubscriptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeNotificationSubscriptionsResponsePrivate::parseDescribeNotificationSubscriptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNotificationSubscriptionsResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws
