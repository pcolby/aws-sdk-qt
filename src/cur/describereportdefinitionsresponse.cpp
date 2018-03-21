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

#include "describereportdefinitionsresponse.h"
#include "describereportdefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CostandUsageReportService {

/**
 * @class  DescribeReportDefinitionsResponse
 *
 * @brief  Handles CostandUsageReportService DescribeReportDefinitions responses.
 *
 * @see    CostandUsageReportServiceClient::describeReportDefinitions
 */

/**
 * @brief  Constructs a new DescribeReportDefinitionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReportDefinitionsResponse::DescribeReportDefinitionsResponse(
        const DescribeReportDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostandUsageReportServiceResponse(new DescribeReportDefinitionsResponsePrivate(this), parent)
{
    setRequest(new DescribeReportDefinitionsRequest(request));
    setReply(reply);
}

const DescribeReportDefinitionsRequest * DescribeReportDefinitionsResponse::request() const
{
    Q_D(const DescribeReportDefinitionsResponse);
    return static_cast<const DescribeReportDefinitionsRequest *>(d->request);
}

/**
 * @brief  Parse a CostandUsageReportService DescribeReportDefinitions response.
 *
 * @param  response  Response to parse.
 */
void DescribeReportDefinitionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeReportDefinitionsResponsePrivate
 *
 * @brief  Private implementation for DescribeReportDefinitionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReportDefinitionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeReportDefinitionsResponse instance.
 */
DescribeReportDefinitionsResponsePrivate::DescribeReportDefinitionsResponsePrivate(
    DescribeReportDefinitionsQueueResponse * const q) : DescribeReportDefinitionsPrivate(q)
{

}

/**
 * @brief  Parse an CostandUsageReportService DescribeReportDefinitionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeReportDefinitionsResponsePrivate::DescribeReportDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReportDefinitionsResponse"));
    /// @todo
}

} // namespace CostandUsageReportService
} // namespace AWS
