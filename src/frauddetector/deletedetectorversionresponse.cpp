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

#include "deletedetectorversionresponse.h"
#include "deletedetectorversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteDetectorVersionResponse
 * \brief The DeleteDetectorVersionResponse class provides an interace for FraudDetector DeleteDetectorVersion responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::deleteDetectorVersion
 */

/*!
 * Constructs a DeleteDetectorVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDetectorVersionResponse::DeleteDetectorVersionResponse(
        const DeleteDetectorVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new DeleteDetectorVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteDetectorVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDetectorVersionRequest * DeleteDetectorVersionResponse::request() const
{
    return static_cast<const DeleteDetectorVersionRequest *>(FraudDetectorResponse::request());
}

/*!
 * \reimp
 * Parses a successful FraudDetector DeleteDetectorVersion \a response.
 */
void DeleteDetectorVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDetectorVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::DeleteDetectorVersionResponsePrivate
 * \brief The DeleteDetectorVersionResponsePrivate class provides private implementation for DeleteDetectorVersionResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteDetectorVersionResponsePrivate object with public implementation \a q.
 */
DeleteDetectorVersionResponsePrivate::DeleteDetectorVersionResponsePrivate(
    DeleteDetectorVersionResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector DeleteDetectorVersion response element from \a xml.
 */
void DeleteDetectorVersionResponsePrivate::parseDeleteDetectorVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDetectorVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
