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

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DescribeAnalysisSchemesResponse
 *
 * \brief The DescribeAnalysisSchemesResponse class encapsulates CloudSearch DescribeAnalysisSchemes responses.
 *
 * \ingroup CloudSearch
 *
 *  <fullname>Amazon CloudSearch Configuration Service</fullname>
 * 
 *  You use the Amazon CloudSearch configuration service to create, configure, and manage search domains. Configuration
 *  service requests are submitted using the AWS Query protocol. AWS Query requests are HTTP or HTTPS requests submitted via
 *  HTTP GET or POST with a query parameter named
 * 
 *  Action>
 * 
 *  The endpoint for configuration service requests is region-specific: cloudsearch.<i>region</i>.amazonaws.com. For
 *  example, cloudsearch.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#cloudsearch_region" target="_blank">Regions and
 *
 * \sa CloudSearchClient::describeAnalysisSchemes
 */

/*!
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

/*!
 * @brief  Parse a CloudSearch DescribeAnalysisSchemes response.
 *
 * @param  response  Response to parse.
 */
void DescribeAnalysisSchemesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeAnalysisSchemesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeAnalysisSchemesResponsePrivate
 *
 * \brief Private implementation for DescribeAnalysisSchemesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeAnalysisSchemesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAnalysisSchemesResponse instance.
 */
DescribeAnalysisSchemesResponsePrivate::DescribeAnalysisSchemesResponsePrivate(
    DescribeAnalysisSchemesResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudSearch DescribeAnalysisSchemesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAnalysisSchemesResponsePrivate::parseDescribeAnalysisSchemesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAnalysisSchemesResponse"));
    /// @todo
}

} // namespace CloudSearch
} // namespace QtAws
