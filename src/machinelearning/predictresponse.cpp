// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "predictresponse.h"
#include "predictresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::PredictResponse
 * \brief The PredictResponse class provides an interace for MachineLearning Predict responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::predict
 */

/*!
 * Constructs a PredictResponse object for \a reply to \a request, with parent \a parent.
 */
PredictResponse::PredictResponse(
        const PredictRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new PredictResponsePrivate(this), parent)
{
    setRequest(new PredictRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PredictRequest * PredictResponse::request() const
{
    Q_D(const PredictResponse);
    return static_cast<const PredictRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning Predict \a response.
 */
void PredictResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PredictResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::PredictResponsePrivate
 * \brief The PredictResponsePrivate class provides private implementation for PredictResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a PredictResponsePrivate object with public implementation \a q.
 */
PredictResponsePrivate::PredictResponsePrivate(
    PredictResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning Predict response element from \a xml.
 */
void PredictResponsePrivate::parsePredictResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PredictResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
