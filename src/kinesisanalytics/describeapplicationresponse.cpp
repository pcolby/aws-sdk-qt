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

#include "describeapplicationresponse.h"
#include "describeapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/**
 * @class  DescribeApplicationResponse
 *
 * @brief  Handles KinesisAnalytics DescribeApplication responses.
 *
 * @see    KinesisAnalyticsClient::describeApplication
 */

/**
 * @brief  Constructs a new DescribeApplicationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeApplicationResponse::DescribeApplicationResponse(
        const DescribeApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new DescribeApplicationResponsePrivate(this), parent)
{
    setRequest(new DescribeApplicationRequest(request));
    setReply(reply);
}

const DescribeApplicationRequest * DescribeApplicationResponse::request() const
{
    Q_D(const DescribeApplicationResponse);
    return static_cast<const DescribeApplicationRequest *>(d->request);
}

/**
 * @brief  Parse a KinesisAnalytics DescribeApplication response.
 *
 * @param  response  Response to parse.
 */
void DescribeApplicationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeApplicationResponsePrivate
 *
 * @brief  Private implementation for DescribeApplicationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeApplicationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeApplicationResponse instance.
 */
DescribeApplicationResponsePrivate::DescribeApplicationResponsePrivate(
    DescribeApplicationResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/**
 * @brief  Parse an KinesisAnalytics DescribeApplicationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeApplicationResponsePrivate::parseDescribeApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeApplicationResponse"));
    /// @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
