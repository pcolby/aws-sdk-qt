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

#include "describealarmsresponse.h"
#include "describealarmsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/**
 * @class  DescribeAlarmsResponse
 *
 * @brief  Handles CloudWatch DescribeAlarms responses.
 *
 * @see    CloudWatchClient::describeAlarms
 */

/**
 * @brief  Constructs a new DescribeAlarmsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAlarmsResponse::DescribeAlarmsResponse(
        const DescribeAlarmsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new DescribeAlarmsResponsePrivate(this), parent)
{
    setRequest(new DescribeAlarmsRequest(request));
    setReply(reply);
}

const DescribeAlarmsRequest * DescribeAlarmsResponse::request() const
{
    Q_D(const DescribeAlarmsResponse);
    return static_cast<const DescribeAlarmsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatch DescribeAlarms response.
 *
 * @param  response  Response to parse.
 */
void DescribeAlarmsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeAlarmsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAlarmsResponsePrivate
 *
 * @brief  Private implementation for DescribeAlarmsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAlarmsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAlarmsResponse instance.
 */
DescribeAlarmsResponsePrivate::DescribeAlarmsResponsePrivate(
    DescribeAlarmsResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatch DescribeAlarmsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAlarmsResponsePrivate::DescribeAlarmsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAlarmsResponse"));
    /// @todo
}

} // namespace CloudWatch
} // namespace QtAws
