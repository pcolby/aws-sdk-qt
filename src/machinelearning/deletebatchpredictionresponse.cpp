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

#include "deletebatchpredictionresponse.h"
#include "deletebatchpredictionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DeleteBatchPredictionResponse
 * \brief The DeleteBatchPredictionResponse class provides an interace for MachineLearning DeleteBatchPrediction responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::deleteBatchPrediction
 */

/*!
 * Constructs a DeleteBatchPredictionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBatchPredictionResponse::DeleteBatchPredictionResponse(
        const DeleteBatchPredictionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new DeleteBatchPredictionResponsePrivate(this), parent)
{
    setRequest(new DeleteBatchPredictionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBatchPredictionRequest * DeleteBatchPredictionResponse::request() const
{
    Q_D(const DeleteBatchPredictionResponse);
    return static_cast<const DeleteBatchPredictionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning DeleteBatchPrediction \a response.
 */
void DeleteBatchPredictionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBatchPredictionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::DeleteBatchPredictionResponsePrivate
 * \brief The DeleteBatchPredictionResponsePrivate class provides private implementation for DeleteBatchPredictionResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a DeleteBatchPredictionResponsePrivate object with public implementation \a q.
 */
DeleteBatchPredictionResponsePrivate::DeleteBatchPredictionResponsePrivate(
    DeleteBatchPredictionResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning DeleteBatchPrediction response element from \a xml.
 */
void DeleteBatchPredictionResponsePrivate::parseDeleteBatchPredictionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBatchPredictionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
