// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const CreateBatchPredictionResponse);
    return static_cast<const CreateBatchPredictionRequest *>(d->request);
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
