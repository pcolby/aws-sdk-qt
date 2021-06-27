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

#include "updatemodelversionresponse.h"
#include "updatemodelversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::UpdateModelVersionResponse
 * \brief The UpdateModelVersionResponse class provides an interace for FraudDetector UpdateModelVersion responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::updateModelVersion
 */

/*!
 * Constructs a UpdateModelVersionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateModelVersionResponse::UpdateModelVersionResponse(
        const UpdateModelVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new UpdateModelVersionResponsePrivate(this), parent)
{
    setRequest(new UpdateModelVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateModelVersionRequest * UpdateModelVersionResponse::request() const
{
    return static_cast<const UpdateModelVersionRequest *>(FraudDetectorResponse::request());
}

/*!
 * \reimp
 * Parses a successful FraudDetector UpdateModelVersion \a response.
 */
void UpdateModelVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateModelVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::UpdateModelVersionResponsePrivate
 * \brief The UpdateModelVersionResponsePrivate class provides private implementation for UpdateModelVersionResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a UpdateModelVersionResponsePrivate object with public implementation \a q.
 */
UpdateModelVersionResponsePrivate::UpdateModelVersionResponsePrivate(
    UpdateModelVersionResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector UpdateModelVersion response element from \a xml.
 */
void UpdateModelVersionResponsePrivate::parseUpdateModelVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateModelVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
