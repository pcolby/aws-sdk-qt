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

#include "putoutcomeresponse.h"
#include "putoutcomeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::PutOutcomeResponse
 * \brief The PutOutcomeResponse class provides an interace for FraudDetector PutOutcome responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::putOutcome
 */

/*!
 * Constructs a PutOutcomeResponse object for \a reply to \a request, with parent \a parent.
 */
PutOutcomeResponse::PutOutcomeResponse(
        const PutOutcomeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new PutOutcomeResponsePrivate(this), parent)
{
    setRequest(new PutOutcomeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutOutcomeRequest * PutOutcomeResponse::request() const
{
    Q_D(const PutOutcomeResponse);
    return static_cast<const PutOutcomeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector PutOutcome \a response.
 */
void PutOutcomeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutOutcomeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::PutOutcomeResponsePrivate
 * \brief The PutOutcomeResponsePrivate class provides private implementation for PutOutcomeResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a PutOutcomeResponsePrivate object with public implementation \a q.
 */
PutOutcomeResponsePrivate::PutOutcomeResponsePrivate(
    PutOutcomeResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector PutOutcome response element from \a xml.
 */
void PutOutcomeResponsePrivate::parsePutOutcomeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutOutcomeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
