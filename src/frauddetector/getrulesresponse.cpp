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

#include "getrulesresponse.h"
#include "getrulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetRulesResponse
 * \brief The GetRulesResponse class provides an interace for FraudDetector GetRules responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getRules
 */

/*!
 * Constructs a GetRulesResponse object for \a reply to \a request, with parent \a parent.
 */
GetRulesResponse::GetRulesResponse(
        const GetRulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new GetRulesResponsePrivate(this), parent)
{
    setRequest(new GetRulesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRulesRequest * GetRulesResponse::request() const
{
    return static_cast<const GetRulesRequest *>(FraudDetectorResponse::request());
}

/*!
 * \reimp
 * Parses a successful FraudDetector GetRules \a response.
 */
void GetRulesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::GetRulesResponsePrivate
 * \brief The GetRulesResponsePrivate class provides private implementation for GetRulesResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetRulesResponsePrivate object with public implementation \a q.
 */
GetRulesResponsePrivate::GetRulesResponsePrivate(
    GetRulesResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector GetRules response element from \a xml.
 */
void GetRulesResponsePrivate::parseGetRulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRulesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
