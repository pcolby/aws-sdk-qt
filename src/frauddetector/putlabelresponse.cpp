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

#include "putlabelresponse.h"
#include "putlabelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::PutLabelResponse
 * \brief The PutLabelResponse class provides an interace for FraudDetector PutLabel responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::putLabel
 */

/*!
 * Constructs a PutLabelResponse object for \a reply to \a request, with parent \a parent.
 */
PutLabelResponse::PutLabelResponse(
        const PutLabelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new PutLabelResponsePrivate(this), parent)
{
    setRequest(new PutLabelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutLabelRequest * PutLabelResponse::request() const
{
    return static_cast<const PutLabelRequest *>(FraudDetectorResponse::request());
}

/*!
 * \reimp
 * Parses a successful FraudDetector PutLabel \a response.
 */
void PutLabelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutLabelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::PutLabelResponsePrivate
 * \brief The PutLabelResponsePrivate class provides private implementation for PutLabelResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a PutLabelResponsePrivate object with public implementation \a q.
 */
PutLabelResponsePrivate::PutLabelResponsePrivate(
    PutLabelResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector PutLabel response element from \a xml.
 */
void PutLabelResponsePrivate::parsePutLabelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutLabelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
