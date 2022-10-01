// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const GetBatchPredictionResponse);
    return static_cast<const GetBatchPredictionRequest *>(d->request);
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
