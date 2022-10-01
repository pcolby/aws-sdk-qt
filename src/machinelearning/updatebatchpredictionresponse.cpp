// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
