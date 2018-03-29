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

#include "describeassessmentrunsresponse.h"
#include "describeassessmentrunsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/**
 * @class  DescribeAssessmentRunsResponse
 *
 * @brief  Handles Inspector DescribeAssessmentRuns responses.
 *
 * @see    InspectorClient::describeAssessmentRuns
 */

/**
 * @brief  Constructs a new DescribeAssessmentRunsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAssessmentRunsResponse::DescribeAssessmentRunsResponse(
        const DescribeAssessmentRunsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DescribeAssessmentRunsResponsePrivate(this), parent)
{
    setRequest(new DescribeAssessmentRunsRequest(request));
    setReply(reply);
}

const DescribeAssessmentRunsRequest * DescribeAssessmentRunsResponse::request() const
{
    Q_D(const DescribeAssessmentRunsResponse);
    return static_cast<const DescribeAssessmentRunsRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector DescribeAssessmentRuns response.
 *
 * @param  response  Response to parse.
 */
void DescribeAssessmentRunsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeAssessmentRunsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAssessmentRunsResponsePrivate
 *
 * @brief  Private implementation for DescribeAssessmentRunsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAssessmentRunsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAssessmentRunsResponse instance.
 */
DescribeAssessmentRunsResponsePrivate::DescribeAssessmentRunsResponsePrivate(
    DescribeAssessmentRunsResponse * const q) : InspectorResponsePrivate(q)
{

}

/**
 * @brief  Parse an Inspector DescribeAssessmentRunsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAssessmentRunsResponsePrivate::parseDescribeAssessmentRunsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAssessmentRunsResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
