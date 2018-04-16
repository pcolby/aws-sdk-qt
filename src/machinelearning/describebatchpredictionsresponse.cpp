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

#include "describebatchpredictionsresponse.h"
#include "describebatchpredictionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DescribeBatchPredictionsResponse
 *
 * \brief The DescribeBatchPredictionsResponse class encapsulates MachineLearning DescribeBatchPredictions responses.
 *
 * \ingroup MachineLearning
 *
 *
 * \sa MachineLearningClient::describeBatchPredictions
 */

/*!
 * @brief  Constructs a new DescribeBatchPredictionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeBatchPredictionsResponse::DescribeBatchPredictionsResponse(
        const DescribeBatchPredictionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new DescribeBatchPredictionsResponsePrivate(this), parent)
{
    setRequest(new DescribeBatchPredictionsRequest(request));
    setReply(reply);
}

const DescribeBatchPredictionsRequest * DescribeBatchPredictionsResponse::request() const
{
    Q_D(const DescribeBatchPredictionsResponse);
    return static_cast<const DescribeBatchPredictionsRequest *>(d->request);
}

/*!
 * @brief  Parse a MachineLearning DescribeBatchPredictions response.
 *
 * @param  response  Response to parse.
 */
void DescribeBatchPredictionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeBatchPredictionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeBatchPredictionsResponsePrivate
 *
 * \brief Private implementation for DescribeBatchPredictionsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeBatchPredictionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeBatchPredictionsResponse instance.
 */
DescribeBatchPredictionsResponsePrivate::DescribeBatchPredictionsResponsePrivate(
    DescribeBatchPredictionsResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MachineLearning DescribeBatchPredictionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeBatchPredictionsResponsePrivate::parseDescribeBatchPredictionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBatchPredictionsResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace QtAws
