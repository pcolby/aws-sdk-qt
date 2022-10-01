// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(DescribeBatchPredictionsResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
