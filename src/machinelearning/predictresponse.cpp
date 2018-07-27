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
