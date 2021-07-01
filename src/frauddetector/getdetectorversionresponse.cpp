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

#include "getdetectorversionresponse.h"
#include "getdetectorversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetDetectorVersionResponse
 * \brief The GetDetectorVersionResponse class provides an interace for FraudDetector GetDetectorVersion responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getDetectorVersion
 */

/*!
 * Constructs a GetDetectorVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetDetectorVersionResponse::GetDetectorVersionResponse(
        const GetDetectorVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new GetDetectorVersionResponsePrivate(this), parent)
{
    setRequest(new GetDetectorVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDetectorVersionRequest * GetDetectorVersionResponse::request() const
{
    Q_D(const GetDetectorVersionResponse);
    return static_cast<const GetDetectorVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector GetDetectorVersion \a response.
 */
void GetDetectorVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDetectorVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::GetDetectorVersionResponsePrivate
 * \brief The GetDetectorVersionResponsePrivate class provides private implementation for GetDetectorVersionResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetDetectorVersionResponsePrivate object with public implementation \a q.
 */
GetDetectorVersionResponsePrivate::GetDetectorVersionResponsePrivate(
    GetDetectorVersionResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector GetDetectorVersion response element from \a xml.
 */
void GetDetectorVersionResponsePrivate::parseGetDetectorVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDetectorVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
