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

#include "getexternalmodelsresponse.h"
#include "getexternalmodelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetExternalModelsResponse
 * \brief The GetExternalModelsResponse class provides an interace for FraudDetector GetExternalModels responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getExternalModels
 */

/*!
 * Constructs a GetExternalModelsResponse object for \a reply to \a request, with parent \a parent.
 */
GetExternalModelsResponse::GetExternalModelsResponse(
        const GetExternalModelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new GetExternalModelsResponsePrivate(this), parent)
{
    setRequest(new GetExternalModelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetExternalModelsRequest * GetExternalModelsResponse::request() const
{
    Q_D(const GetExternalModelsResponse);
    return static_cast<const GetExternalModelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector GetExternalModels \a response.
 */
void GetExternalModelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetExternalModelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::GetExternalModelsResponsePrivate
 * \brief The GetExternalModelsResponsePrivate class provides private implementation for GetExternalModelsResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetExternalModelsResponsePrivate object with public implementation \a q.
 */
GetExternalModelsResponsePrivate::GetExternalModelsResponsePrivate(
    GetExternalModelsResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector GetExternalModels response element from \a xml.
 */
void GetExternalModelsResponsePrivate::parseGetExternalModelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExternalModelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
