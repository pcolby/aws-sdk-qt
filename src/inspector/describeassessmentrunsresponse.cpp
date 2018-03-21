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

#include "describeassessmentrunsresponse.h"
#include "describeassessmentrunsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Inspector {

/**
 * @class  DescribeAssessmentRunsResponse
 *
 * @brief  Handles Inspector DescribeAssessmentRuns responses.
 *
 * @see    InspectorClient::describeAssessmentRuns
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAssessmentRunsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
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
    Q_D(Response);
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
    DescribeAssessmentRunsQueueResponse * const q) : DescribeAssessmentRunsPrivate(q)
{

}

/**
 * @brief  Parse an Inspector DescribeAssessmentRunsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAssessmentRunsResponsePrivate::DescribeAssessmentRunsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAssessmentRunsResponse"));
    /// @todo
}
