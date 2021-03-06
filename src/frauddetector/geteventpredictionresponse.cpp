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

#include "geteventpredictionresponse.h"
#include "geteventpredictionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetEventPredictionResponse
 * \brief The GetEventPredictionResponse class provides an interace for FraudDetector GetEventPrediction responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getEventPrediction
 */

/*!
 * Constructs a GetEventPredictionResponse object for \a reply to \a request, with parent \a parent.
 */
GetEventPredictionResponse::GetEventPredictionResponse(
        const GetEventPredictionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new GetEventPredictionResponsePrivate(this), parent)
{
    setRequest(new GetEventPredictionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEventPredictionRequest * GetEventPredictionResponse::request() const
{
    Q_D(const GetEventPredictionResponse);
    return static_cast<const GetEventPredictionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector GetEventPrediction \a response.
 */
void GetEventPredictionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEventPredictionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::GetEventPredictionResponsePrivate
 * \brief The GetEventPredictionResponsePrivate class provides private implementation for GetEventPredictionResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetEventPredictionResponsePrivate object with public implementation \a q.
 */
GetEventPredictionResponsePrivate::GetEventPredictionResponsePrivate(
    GetEventPredictionResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector GetEventPrediction response element from \a xml.
 */
void GetEventPredictionResponsePrivate::parseGetEventPredictionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEventPredictionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
