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

#include "describeassessmenttemplatesresponse.h"
#include "describeassessmenttemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/**
 * @class  DescribeAssessmentTemplatesResponse
 *
 * @brief  Handles Inspector DescribeAssessmentTemplates responses.
 *
 * @see    InspectorClient::describeAssessmentTemplates
 */

/**
 * @brief  Constructs a new DescribeAssessmentTemplatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAssessmentTemplatesResponse::DescribeAssessmentTemplatesResponse(
        const DescribeAssessmentTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeAssessmentTemplatesResponse(new DescribeAssessmentTemplatesResponsePrivate(this), parent)
{
    setRequest(new DescribeAssessmentTemplatesRequest(request));
    setReply(reply);
}

const DescribeAssessmentTemplatesRequest * DescribeAssessmentTemplatesResponse::request() const
{
    Q_D(const DescribeAssessmentTemplatesResponse);
    return static_cast<const DescribeAssessmentTemplatesRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector DescribeAssessmentTemplates response.
 *
 * @param  response  Response to parse.
 */
void DescribeAssessmentTemplatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeAssessmentTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAssessmentTemplatesResponsePrivate
 *
 * @brief  Private implementation for DescribeAssessmentTemplatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAssessmentTemplatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAssessmentTemplatesResponse instance.
 */
DescribeAssessmentTemplatesResponsePrivate::DescribeAssessmentTemplatesResponsePrivate(
    DescribeAssessmentTemplatesResponse * const q) : InspectorResponsePrivate(q)
{

}

/**
 * @brief  Parse an Inspector DescribeAssessmentTemplatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAssessmentTemplatesResponsePrivate::parseDescribeAssessmentTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAssessmentTemplatesResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
