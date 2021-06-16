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

#include "getmodelsresponse.h"
#include "getmodelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetModelsResponse
 * \brief The GetModelsResponse class provides an interace for FraudDetector GetModels responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getModels
 */

/*!
 * Constructs a GetModelsResponse object for \a reply to \a request, with parent \a parent.
 */
GetModelsResponse::GetModelsResponse(
        const GetModelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new GetModelsResponsePrivate(this), parent)
{
    setRequest(new GetModelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetModelsRequest * GetModelsResponse::request() const
{
    Q_D(const GetModelsResponse);
    return static_cast<const GetModelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector GetModels \a response.
 */
void GetModelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetModelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::GetModelsResponsePrivate
 * \brief The GetModelsResponsePrivate class provides private implementation for GetModelsResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetModelsResponsePrivate object with public implementation \a q.
 */
GetModelsResponsePrivate::GetModelsResponsePrivate(
    GetModelsResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector GetModels response element from \a xml.
 */
void GetModelsResponsePrivate::parseGetModelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetModelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
