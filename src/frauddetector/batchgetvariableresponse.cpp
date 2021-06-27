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

#include "batchgetvariableresponse.h"
#include "batchgetvariableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::BatchGetVariableResponse
 * \brief The BatchGetVariableResponse class provides an interace for FraudDetector BatchGetVariable responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::batchGetVariable
 */

/*!
 * Constructs a BatchGetVariableResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetVariableResponse::BatchGetVariableResponse(
        const BatchGetVariableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new BatchGetVariableResponsePrivate(this), parent)
{
    setRequest(new BatchGetVariableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetVariableRequest * BatchGetVariableResponse::request() const
{
    return static_cast<const BatchGetVariableRequest *>(FraudDetectorResponse::request());
}

/*!
 * \reimp
 * Parses a successful FraudDetector BatchGetVariable \a response.
 */
void BatchGetVariableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetVariableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::BatchGetVariableResponsePrivate
 * \brief The BatchGetVariableResponsePrivate class provides private implementation for BatchGetVariableResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a BatchGetVariableResponsePrivate object with public implementation \a q.
 */
BatchGetVariableResponsePrivate::BatchGetVariableResponsePrivate(
    BatchGetVariableResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector BatchGetVariable response element from \a xml.
 */
void BatchGetVariableResponsePrivate::parseBatchGetVariableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetVariableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
