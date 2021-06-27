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

#include "putexternalmodelresponse.h"
#include "putexternalmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::PutExternalModelResponse
 * \brief The PutExternalModelResponse class provides an interace for FraudDetector PutExternalModel responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::putExternalModel
 */

/*!
 * Constructs a PutExternalModelResponse object for \a reply to \a request, with parent \a parent.
 */
PutExternalModelResponse::PutExternalModelResponse(
        const PutExternalModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new PutExternalModelResponsePrivate(this), parent)
{
    setRequest(new PutExternalModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutExternalModelRequest * PutExternalModelResponse::request() const
{
    return static_cast<const PutExternalModelRequest *>(FraudDetectorResponse::request());
}

/*!
 * \reimp
 * Parses a successful FraudDetector PutExternalModel \a response.
 */
void PutExternalModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutExternalModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::PutExternalModelResponsePrivate
 * \brief The PutExternalModelResponsePrivate class provides private implementation for PutExternalModelResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a PutExternalModelResponsePrivate object with public implementation \a q.
 */
PutExternalModelResponsePrivate::PutExternalModelResponsePrivate(
    PutExternalModelResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector PutExternalModel response element from \a xml.
 */
void PutExternalModelResponsePrivate::parsePutExternalModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutExternalModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
