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

#include "describeanalysisschemesresponse.h"
#include "describeanalysisschemesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudSearch {

/**
 * @class  DescribeAnalysisSchemesResponse
 *
 * @brief  Handles CloudSearch DescribeAnalysisSchemes responses.
 *
 * @see    CloudSearchClient::describeAnalysisSchemes
 */

/**
 * @brief  Constructs a new DescribeAnalysisSchemesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAnalysisSchemesResponse::DescribeAnalysisSchemesResponse(
        const DescribeAnalysisSchemesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DescribeAnalysisSchemesResponsePrivate(this), parent)
{
    setRequest(new DescribeAnalysisSchemesRequest(request));
    setReply(reply);
}

const DescribeAnalysisSchemesRequest * DescribeAnalysisSchemesResponse::request() const
{
    Q_D(const DescribeAnalysisSchemesResponse);
    return static_cast<const DescribeAnalysisSchemesRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearch DescribeAnalysisSchemes response.
 *
 * @param  response  Response to parse.
 */
void DescribeAnalysisSchemesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAnalysisSchemesResponsePrivate
 *
 * @brief  Private implementation for DescribeAnalysisSchemesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAnalysisSchemesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAnalysisSchemesResponse instance.
 */
DescribeAnalysisSchemesResponsePrivate::DescribeAnalysisSchemesResponsePrivate(
    DescribeAnalysisSchemesQueueResponse * const q) : DescribeAnalysisSchemesPrivate(q)
{

}

/**
 * @brief  Parse an CloudSearch DescribeAnalysisSchemesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAnalysisSchemesResponsePrivate::DescribeAnalysisSchemesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAnalysisSchemesResponse"));
    /// @todo
}

} // namespace CloudSearch
} // namespace AWS
