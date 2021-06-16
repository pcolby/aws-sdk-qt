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

#include "batchcreatevariableresponse.h"
#include "batchcreatevariableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::BatchCreateVariableResponse
 * \brief The BatchCreateVariableResponse class provides an interace for FraudDetector BatchCreateVariable responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::batchCreateVariable
 */

/*!
 * Constructs a BatchCreateVariableResponse object for \a reply to \a request, with parent \a parent.
 */
BatchCreateVariableResponse::BatchCreateVariableResponse(
        const BatchCreateVariableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new BatchCreateVariableResponsePrivate(this), parent)
{
    setRequest(new BatchCreateVariableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchCreateVariableRequest * BatchCreateVariableResponse::request() const
{
    Q_D(const BatchCreateVariableResponse);
    return static_cast<const BatchCreateVariableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector BatchCreateVariable \a response.
 */
void BatchCreateVariableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchCreateVariableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::BatchCreateVariableResponsePrivate
 * \brief The BatchCreateVariableResponsePrivate class provides private implementation for BatchCreateVariableResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a BatchCreateVariableResponsePrivate object with public implementation \a q.
 */
BatchCreateVariableResponsePrivate::BatchCreateVariableResponsePrivate(
    BatchCreateVariableResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector BatchCreateVariable response element from \a xml.
 */
void BatchCreateVariableResponsePrivate::parseBatchCreateVariableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchCreateVariableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
