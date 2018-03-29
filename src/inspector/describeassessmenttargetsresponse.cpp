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

#include "describeassessmenttargetsresponse.h"
#include "describeassessmenttargetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Inspector {

/**
 * @class  DescribeAssessmentTargetsResponse
 *
 * @brief  Handles Inspector DescribeAssessmentTargets responses.
 *
 * @see    InspectorClient::describeAssessmentTargets
 */

/**
 * @brief  Constructs a new DescribeAssessmentTargetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAssessmentTargetsResponse::DescribeAssessmentTargetsResponse(
        const DescribeAssessmentTargetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DescribeAssessmentTargetsResponsePrivate(this), parent)
{
    setRequest(new DescribeAssessmentTargetsRequest(request));
    setReply(reply);
}

const DescribeAssessmentTargetsRequest * DescribeAssessmentTargetsResponse::request() const
{
    Q_D(const DescribeAssessmentTargetsResponse);
    return static_cast<const DescribeAssessmentTargetsRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector DescribeAssessmentTargets response.
 *
 * @param  response  Response to parse.
 */
void DescribeAssessmentTargetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAssessmentTargetsResponsePrivate
 *
 * @brief  Private implementation for DescribeAssessmentTargetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAssessmentTargetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAssessmentTargetsResponse instance.
 */
DescribeAssessmentTargetsResponsePrivate::DescribeAssessmentTargetsResponsePrivate(
    DescribeAssessmentTargetsQueueResponse * const q) : DescribeAssessmentTargetsPrivate(q)
{

}

/**
 * @brief  Parse an Inspector DescribeAssessmentTargetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAssessmentTargetsResponsePrivate::DescribeAssessmentTargetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAssessmentTargetsResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace AWS
