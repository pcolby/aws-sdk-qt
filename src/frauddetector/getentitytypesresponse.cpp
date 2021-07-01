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

#include "getentitytypesresponse.h"
#include "getentitytypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetEntityTypesResponse
 * \brief The GetEntityTypesResponse class provides an interace for FraudDetector GetEntityTypes responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getEntityTypes
 */

/*!
 * Constructs a GetEntityTypesResponse object for \a reply to \a request, with parent \a parent.
 */
GetEntityTypesResponse::GetEntityTypesResponse(
        const GetEntityTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new GetEntityTypesResponsePrivate(this), parent)
{
    setRequest(new GetEntityTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEntityTypesRequest * GetEntityTypesResponse::request() const
{
    Q_D(const GetEntityTypesResponse);
    return static_cast<const GetEntityTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector GetEntityTypes \a response.
 */
void GetEntityTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEntityTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::GetEntityTypesResponsePrivate
 * \brief The GetEntityTypesResponsePrivate class provides private implementation for GetEntityTypesResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetEntityTypesResponsePrivate object with public implementation \a q.
 */
GetEntityTypesResponsePrivate::GetEntityTypesResponsePrivate(
    GetEntityTypesResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector GetEntityTypes response element from \a xml.
 */
void GetEntityTypesResponsePrivate::parseGetEntityTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEntityTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
