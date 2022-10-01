// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
