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

#include "createbatchpredictionresponse.h"
#include "createbatchpredictionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::CreateBatchPredictionResponse
 * \brief The CreateBatchPredictionResponse class provides an interace for MachineLearning CreateBatchPrediction responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::createBatchPrediction
 */

/*!
 * Constructs a CreateBatchPredictionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBatchPredictionResponse::CreateBatchPredictionResponse(
        const CreateBatchPredictionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new CreateBatchPredictionResponsePrivate(this), parent)
{
    setRequest(new CreateBatchPredictionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBatchPredictionRequest * CreateBatchPredictionResponse::request() const
{
    return static_cast<const CreateBatchPredictionRequest *>(MachineLearningResponse::request());
}

/*!
 * \reimp
 * Parses a successful MachineLearning CreateBatchPrediction \a response.
 */
void CreateBatchPredictionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBatchPredictionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::CreateBatchPredictionResponsePrivate
 * \brief The CreateBatchPredictionResponsePrivate class provides private implementation for CreateBatchPredictionResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a CreateBatchPredictionResponsePrivate object with public implementation \a q.
 */
CreateBatchPredictionResponsePrivate::CreateBatchPredictionResponsePrivate(
    CreateBatchPredictionResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning CreateBatchPrediction response element from \a xml.
 */
void CreateBatchPredictionResponsePrivate::parseCreateBatchPredictionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBatchPredictionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
