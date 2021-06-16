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

#include "getdetectorsresponse.h"
#include "getdetectorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetDetectorsResponse
 * \brief The GetDetectorsResponse class provides an interace for FraudDetector GetDetectors responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getDetectors
 */

/*!
 * Constructs a GetDetectorsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDetectorsResponse::GetDetectorsResponse(
        const GetDetectorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new GetDetectorsResponsePrivate(this), parent)
{
    setRequest(new GetDetectorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDetectorsRequest * GetDetectorsResponse::request() const
{
    Q_D(const GetDetectorsResponse);
    return static_cast<const GetDetectorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector GetDetectors \a response.
 */
void GetDetectorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDetectorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::GetDetectorsResponsePrivate
 * \brief The GetDetectorsResponsePrivate class provides private implementation for GetDetectorsResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetDetectorsResponsePrivate object with public implementation \a q.
 */
GetDetectorsResponsePrivate::GetDetectorsResponsePrivate(
    GetDetectorsResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector GetDetectors response element from \a xml.
 */
void GetDetectorsResponsePrivate::parseGetDetectorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDetectorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
