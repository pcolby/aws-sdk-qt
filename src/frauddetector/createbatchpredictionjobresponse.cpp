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

#include "createbatchpredictionjobresponse.h"
#include "createbatchpredictionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::CreateBatchPredictionJobResponse
 * \brief The CreateBatchPredictionJobResponse class provides an interace for FraudDetector CreateBatchPredictionJob responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::createBatchPredictionJob
 */

/*!
 * Constructs a CreateBatchPredictionJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBatchPredictionJobResponse::CreateBatchPredictionJobResponse(
        const CreateBatchPredictionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new CreateBatchPredictionJobResponsePrivate(this), parent)
{
    setRequest(new CreateBatchPredictionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBatchPredictionJobRequest * CreateBatchPredictionJobResponse::request() const
{
    Q_D(const CreateBatchPredictionJobResponse);
    return static_cast<const CreateBatchPredictionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector CreateBatchPredictionJob \a response.
 */
void CreateBatchPredictionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBatchPredictionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::CreateBatchPredictionJobResponsePrivate
 * \brief The CreateBatchPredictionJobResponsePrivate class provides private implementation for CreateBatchPredictionJobResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a CreateBatchPredictionJobResponsePrivate object with public implementation \a q.
 */
CreateBatchPredictionJobResponsePrivate::CreateBatchPredictionJobResponsePrivate(
    CreateBatchPredictionJobResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector CreateBatchPredictionJob response element from \a xml.
 */
void CreateBatchPredictionJobResponsePrivate::parseCreateBatchPredictionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBatchPredictionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
