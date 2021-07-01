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

#include "geteventtypesresponse.h"
#include "geteventtypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetEventTypesResponse
 * \brief The GetEventTypesResponse class provides an interace for FraudDetector GetEventTypes responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getEventTypes
 */

/*!
 * Constructs a GetEventTypesResponse object for \a reply to \a request, with parent \a parent.
 */
GetEventTypesResponse::GetEventTypesResponse(
        const GetEventTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new GetEventTypesResponsePrivate(this), parent)
{
    setRequest(new GetEventTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEventTypesRequest * GetEventTypesResponse::request() const
{
    Q_D(const GetEventTypesResponse);
    return static_cast<const GetEventTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector GetEventTypes \a response.
 */
void GetEventTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEventTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::GetEventTypesResponsePrivate
 * \brief The GetEventTypesResponsePrivate class provides private implementation for GetEventTypesResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetEventTypesResponsePrivate object with public implementation \a q.
 */
GetEventTypesResponsePrivate::GetEventTypesResponsePrivate(
    GetEventTypesResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector GetEventTypes response element from \a xml.
 */
void GetEventTypesResponsePrivate::parseGetEventTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEventTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
