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

#include "deletebatchpredictionjobresponse.h"
#include "deletebatchpredictionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteBatchPredictionJobResponse
 * \brief The DeleteBatchPredictionJobResponse class provides an interace for FraudDetector DeleteBatchPredictionJob responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::deleteBatchPredictionJob
 */

/*!
 * Constructs a DeleteBatchPredictionJobResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBatchPredictionJobResponse::DeleteBatchPredictionJobResponse(
        const DeleteBatchPredictionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new DeleteBatchPredictionJobResponsePrivate(this), parent)
{
    setRequest(new DeleteBatchPredictionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBatchPredictionJobRequest * DeleteBatchPredictionJobResponse::request() const
{
    return static_cast<const DeleteBatchPredictionJobRequest *>(FraudDetectorResponse::request());
}

/*!
 * \reimp
 * Parses a successful FraudDetector DeleteBatchPredictionJob \a response.
 */
void DeleteBatchPredictionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBatchPredictionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::DeleteBatchPredictionJobResponsePrivate
 * \brief The DeleteBatchPredictionJobResponsePrivate class provides private implementation for DeleteBatchPredictionJobResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteBatchPredictionJobResponsePrivate object with public implementation \a q.
 */
DeleteBatchPredictionJobResponsePrivate::DeleteBatchPredictionJobResponsePrivate(
    DeleteBatchPredictionJobResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector DeleteBatchPredictionJob response element from \a xml.
 */
void DeleteBatchPredictionJobResponsePrivate::parseDeleteBatchPredictionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBatchPredictionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
