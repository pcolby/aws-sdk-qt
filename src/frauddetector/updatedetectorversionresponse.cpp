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

#include "updatedetectorversionresponse.h"
#include "updatedetectorversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::UpdateDetectorVersionResponse
 * \brief The UpdateDetectorVersionResponse class provides an interace for FraudDetector UpdateDetectorVersion responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::updateDetectorVersion
 */

/*!
 * Constructs a UpdateDetectorVersionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDetectorVersionResponse::UpdateDetectorVersionResponse(
        const UpdateDetectorVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new UpdateDetectorVersionResponsePrivate(this), parent)
{
    setRequest(new UpdateDetectorVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDetectorVersionRequest * UpdateDetectorVersionResponse::request() const
{
    return static_cast<const UpdateDetectorVersionRequest *>(FraudDetectorResponse::request());
}

/*!
 * \reimp
 * Parses a successful FraudDetector UpdateDetectorVersion \a response.
 */
void UpdateDetectorVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDetectorVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::UpdateDetectorVersionResponsePrivate
 * \brief The UpdateDetectorVersionResponsePrivate class provides private implementation for UpdateDetectorVersionResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a UpdateDetectorVersionResponsePrivate object with public implementation \a q.
 */
UpdateDetectorVersionResponsePrivate::UpdateDetectorVersionResponsePrivate(
    UpdateDetectorVersionResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector UpdateDetectorVersion response element from \a xml.
 */
void UpdateDetectorVersionResponsePrivate::parseUpdateDetectorVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDetectorVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
