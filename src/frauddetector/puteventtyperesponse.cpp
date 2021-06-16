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

#include "puteventtyperesponse.h"
#include "puteventtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::PutEventTypeResponse
 * \brief The PutEventTypeResponse class provides an interace for FraudDetector PutEventType responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::putEventType
 */

/*!
 * Constructs a PutEventTypeResponse object for \a reply to \a request, with parent \a parent.
 */
PutEventTypeResponse::PutEventTypeResponse(
        const PutEventTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new PutEventTypeResponsePrivate(this), parent)
{
    setRequest(new PutEventTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutEventTypeRequest * PutEventTypeResponse::request() const
{
    Q_D(const PutEventTypeResponse);
    return static_cast<const PutEventTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector PutEventType \a response.
 */
void PutEventTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutEventTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::PutEventTypeResponsePrivate
 * \brief The PutEventTypeResponsePrivate class provides private implementation for PutEventTypeResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a PutEventTypeResponsePrivate object with public implementation \a q.
 */
PutEventTypeResponsePrivate::PutEventTypeResponsePrivate(
    PutEventTypeResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector PutEventType response element from \a xml.
 */
void PutEventTypeResponsePrivate::parsePutEventTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutEventTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
