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

#include "describeevaluationsresponse.h"
#include "describeevaluationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DescribeEvaluationsResponse
 *
 * \brief The DescribeEvaluationsResponse class encapsulates MachineLearning DescribeEvaluations responses.
 *
 * \ingroup MachineLearning
 *
 *
 * \sa MachineLearningClient::describeEvaluations
 */

/*!
 * @brief  Constructs a new DescribeEvaluationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEvaluationsResponse::DescribeEvaluationsResponse(
        const DescribeEvaluationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new DescribeEvaluationsResponsePrivate(this), parent)
{
    setRequest(new DescribeEvaluationsRequest(request));
    setReply(reply);
}

const DescribeEvaluationsRequest * DescribeEvaluationsResponse::request() const
{
    Q_D(const DescribeEvaluationsResponse);
    return static_cast<const DescribeEvaluationsRequest *>(d->request);
}

/*!
 * @brief  Parse a MachineLearning DescribeEvaluations response.
 *
 * @param  response  Response to parse.
 */
void DescribeEvaluationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeEvaluationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeEvaluationsResponsePrivate
 *
 * \brief Private implementation for DescribeEvaluationsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeEvaluationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEvaluationsResponse instance.
 */
DescribeEvaluationsResponsePrivate::DescribeEvaluationsResponsePrivate(
    DescribeEvaluationsResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MachineLearning DescribeEvaluationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEvaluationsResponsePrivate::parseDescribeEvaluationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEvaluationsResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace QtAws
