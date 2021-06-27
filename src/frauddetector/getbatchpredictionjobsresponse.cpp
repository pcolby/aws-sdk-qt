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

#include "getbatchpredictionjobsresponse.h"
#include "getbatchpredictionjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetBatchPredictionJobsResponse
 * \brief The GetBatchPredictionJobsResponse class provides an interace for FraudDetector GetBatchPredictionJobs responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getBatchPredictionJobs
 */

/*!
 * Constructs a GetBatchPredictionJobsResponse object for \a reply to \a request, with parent \a parent.
 */
GetBatchPredictionJobsResponse::GetBatchPredictionJobsResponse(
        const GetBatchPredictionJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new GetBatchPredictionJobsResponsePrivate(this), parent)
{
    setRequest(new GetBatchPredictionJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBatchPredictionJobsRequest * GetBatchPredictionJobsResponse::request() const
{
    return static_cast<const GetBatchPredictionJobsRequest *>(FraudDetectorResponse::request());
}

/*!
 * \reimp
 * Parses a successful FraudDetector GetBatchPredictionJobs \a response.
 */
void GetBatchPredictionJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBatchPredictionJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::GetBatchPredictionJobsResponsePrivate
 * \brief The GetBatchPredictionJobsResponsePrivate class provides private implementation for GetBatchPredictionJobsResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetBatchPredictionJobsResponsePrivate object with public implementation \a q.
 */
GetBatchPredictionJobsResponsePrivate::GetBatchPredictionJobsResponsePrivate(
    GetBatchPredictionJobsResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector GetBatchPredictionJobs response element from \a xml.
 */
void GetBatchPredictionJobsResponsePrivate::parseGetBatchPredictionJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBatchPredictionJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
