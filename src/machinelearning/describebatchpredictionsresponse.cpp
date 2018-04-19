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
 * \brief The DescribeBatchPredictionsResponse class provides an interace for MachineLearning DescribeBatchPredictions responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::describeBatchPredictions
 */

/*!
 * Constructs a DescribeBatchPredictionsResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const DescribeBatchPredictionsRequest * DescribeBatchPredictionsResponse::request() const
{
    Q_D(const DescribeBatchPredictionsResponse);
    return static_cast<const DescribeBatchPredictionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning DescribeBatchPredictions \a response.
 */
void DescribeBatchPredictionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeBatchPredictionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::DescribeBatchPredictionsResponsePrivate
 * \brief The DescribeBatchPredictionsResponsePrivate class provides private implementation for DescribeBatchPredictionsResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a DescribeBatchPredictionsResponsePrivate object with public implementation \a q.
 */
DescribeBatchPredictionsResponsePrivate::DescribeBatchPredictionsResponsePrivate(
    DescribeBatchPredictionsResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning DescribeBatchPredictions response element from \a xml.
 */
void DescribeBatchPredictionsResponsePrivate::parseDescribeBatchPredictionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBatchPredictionsResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace QtAws
