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

#include "updatedetectorversionstatusresponse.h"
#include "updatedetectorversionstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::UpdateDetectorVersionStatusResponse
 * \brief The UpdateDetectorVersionStatusResponse class provides an interace for FraudDetector UpdateDetectorVersionStatus responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::updateDetectorVersionStatus
 */

/*!
 * Constructs a UpdateDetectorVersionStatusResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDetectorVersionStatusResponse::UpdateDetectorVersionStatusResponse(
        const UpdateDetectorVersionStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new UpdateDetectorVersionStatusResponsePrivate(this), parent)
{
    setRequest(new UpdateDetectorVersionStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDetectorVersionStatusRequest * UpdateDetectorVersionStatusResponse::request() const
{
    return static_cast<const UpdateDetectorVersionStatusRequest *>(FraudDetectorResponse::request());
}

/*!
 * \reimp
 * Parses a successful FraudDetector UpdateDetectorVersionStatus \a response.
 */
void UpdateDetectorVersionStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDetectorVersionStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::UpdateDetectorVersionStatusResponsePrivate
 * \brief The UpdateDetectorVersionStatusResponsePrivate class provides private implementation for UpdateDetectorVersionStatusResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a UpdateDetectorVersionStatusResponsePrivate object with public implementation \a q.
 */
UpdateDetectorVersionStatusResponsePrivate::UpdateDetectorVersionStatusResponsePrivate(
    UpdateDetectorVersionStatusResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector UpdateDetectorVersionStatus response element from \a xml.
 */
void UpdateDetectorVersionStatusResponsePrivate::parseUpdateDetectorVersionStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDetectorVersionStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
