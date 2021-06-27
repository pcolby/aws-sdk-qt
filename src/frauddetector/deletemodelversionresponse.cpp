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

#include "deletemodelversionresponse.h"
#include "deletemodelversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteModelVersionResponse
 * \brief The DeleteModelVersionResponse class provides an interace for FraudDetector DeleteModelVersion responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::deleteModelVersion
 */

/*!
 * Constructs a DeleteModelVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteModelVersionResponse::DeleteModelVersionResponse(
        const DeleteModelVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new DeleteModelVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteModelVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteModelVersionRequest * DeleteModelVersionResponse::request() const
{
    return static_cast<const DeleteModelVersionRequest *>(FraudDetectorResponse::request());
}

/*!
 * \reimp
 * Parses a successful FraudDetector DeleteModelVersion \a response.
 */
void DeleteModelVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteModelVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::DeleteModelVersionResponsePrivate
 * \brief The DeleteModelVersionResponsePrivate class provides private implementation for DeleteModelVersionResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteModelVersionResponsePrivate object with public implementation \a q.
 */
DeleteModelVersionResponsePrivate::DeleteModelVersionResponsePrivate(
    DeleteModelVersionResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector DeleteModelVersion response element from \a xml.
 */
void DeleteModelVersionResponsePrivate::parseDeleteModelVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteModelVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
