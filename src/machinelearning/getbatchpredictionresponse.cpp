/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getbatchpredictionresponse.h"
#include "getbatchpredictionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::GetBatchPredictionResponse
 * \brief The GetBatchPredictionResponse class provides an interace for MachineLearning GetBatchPrediction responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::getBatchPrediction
 */

/*!
 * Constructs a GetBatchPredictionResponse object for \a reply to \a request, with parent \a parent.
 */
GetBatchPredictionResponse::GetBatchPredictionResponse(
        const GetBatchPredictionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new GetBatchPredictionResponsePrivate(this), parent)
{
    setRequest(new GetBatchPredictionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBatchPredictionRequest * GetBatchPredictionResponse::request() const
{
    return static_cast<const GetBatchPredictionRequest *>(MachineLearningResponse::request());
}

/*!
 * \reimp
 * Parses a successful MachineLearning GetBatchPrediction \a response.
 */
void GetBatchPredictionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBatchPredictionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::GetBatchPredictionResponsePrivate
 * \brief The GetBatchPredictionResponsePrivate class provides private implementation for GetBatchPredictionResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a GetBatchPredictionResponsePrivate object with public implementation \a q.
 */
GetBatchPredictionResponsePrivate::GetBatchPredictionResponsePrivate(
    GetBatchPredictionResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning GetBatchPrediction response element from \a xml.
 */
void GetBatchPredictionResponsePrivate::parseGetBatchPredictionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBatchPredictionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
