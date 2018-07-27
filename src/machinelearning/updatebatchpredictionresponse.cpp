/*
    Copyright 2013-2018 Paul Colby

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

#include "updatebatchpredictionresponse.h"
#include "updatebatchpredictionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::UpdateBatchPredictionResponse
 * \brief The UpdateBatchPredictionResponse class provides an interace for MachineLearning UpdateBatchPrediction responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::updateBatchPrediction
 */

/*!
 * Constructs a UpdateBatchPredictionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBatchPredictionResponse::UpdateBatchPredictionResponse(
        const UpdateBatchPredictionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new UpdateBatchPredictionResponsePrivate(this), parent)
{
    setRequest(new UpdateBatchPredictionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBatchPredictionRequest * UpdateBatchPredictionResponse::request() const
{
    Q_D(const UpdateBatchPredictionResponse);
    return static_cast<const UpdateBatchPredictionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning UpdateBatchPrediction \a response.
 */
void UpdateBatchPredictionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBatchPredictionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::UpdateBatchPredictionResponsePrivate
 * \brief The UpdateBatchPredictionResponsePrivate class provides private implementation for UpdateBatchPredictionResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a UpdateBatchPredictionResponsePrivate object with public implementation \a q.
 */
UpdateBatchPredictionResponsePrivate::UpdateBatchPredictionResponsePrivate(
    UpdateBatchPredictionResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning UpdateBatchPrediction response element from \a xml.
 */
void UpdateBatchPredictionResponsePrivate::parseUpdateBatchPredictionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBatchPredictionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
