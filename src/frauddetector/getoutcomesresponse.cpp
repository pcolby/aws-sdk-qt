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

#include "getoutcomesresponse.h"
#include "getoutcomesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetOutcomesResponse
 * \brief The GetOutcomesResponse class provides an interace for FraudDetector GetOutcomes responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getOutcomes
 */

/*!
 * Constructs a GetOutcomesResponse object for \a reply to \a request, with parent \a parent.
 */
GetOutcomesResponse::GetOutcomesResponse(
        const GetOutcomesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new GetOutcomesResponsePrivate(this), parent)
{
    setRequest(new GetOutcomesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetOutcomesRequest * GetOutcomesResponse::request() const
{
    return static_cast<const GetOutcomesRequest *>(FraudDetectorResponse::request());
}

/*!
 * \reimp
 * Parses a successful FraudDetector GetOutcomes \a response.
 */
void GetOutcomesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetOutcomesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::GetOutcomesResponsePrivate
 * \brief The GetOutcomesResponsePrivate class provides private implementation for GetOutcomesResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetOutcomesResponsePrivate object with public implementation \a q.
 */
GetOutcomesResponsePrivate::GetOutcomesResponsePrivate(
    GetOutcomesResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector GetOutcomes response element from \a xml.
 */
void GetOutcomesResponsePrivate::parseGetOutcomesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOutcomesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
