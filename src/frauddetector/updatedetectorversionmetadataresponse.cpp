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

#include "updatedetectorversionmetadataresponse.h"
#include "updatedetectorversionmetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::UpdateDetectorVersionMetadataResponse
 * \brief The UpdateDetectorVersionMetadataResponse class provides an interace for FraudDetector UpdateDetectorVersionMetadata responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::updateDetectorVersionMetadata
 */

/*!
 * Constructs a UpdateDetectorVersionMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDetectorVersionMetadataResponse::UpdateDetectorVersionMetadataResponse(
        const UpdateDetectorVersionMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new UpdateDetectorVersionMetadataResponsePrivate(this), parent)
{
    setRequest(new UpdateDetectorVersionMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDetectorVersionMetadataRequest * UpdateDetectorVersionMetadataResponse::request() const
{
    return static_cast<const UpdateDetectorVersionMetadataRequest *>(FraudDetectorResponse::request());
}

/*!
 * \reimp
 * Parses a successful FraudDetector UpdateDetectorVersionMetadata \a response.
 */
void UpdateDetectorVersionMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDetectorVersionMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::UpdateDetectorVersionMetadataResponsePrivate
 * \brief The UpdateDetectorVersionMetadataResponsePrivate class provides private implementation for UpdateDetectorVersionMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a UpdateDetectorVersionMetadataResponsePrivate object with public implementation \a q.
 */
UpdateDetectorVersionMetadataResponsePrivate::UpdateDetectorVersionMetadataResponsePrivate(
    UpdateDetectorVersionMetadataResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector UpdateDetectorVersionMetadata response element from \a xml.
 */
void UpdateDetectorVersionMetadataResponsePrivate::parseUpdateDetectorVersionMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDetectorVersionMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
