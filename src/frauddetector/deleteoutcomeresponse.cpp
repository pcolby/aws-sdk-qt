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

#include "deleteoutcomeresponse.h"
#include "deleteoutcomeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteOutcomeResponse
 * \brief The DeleteOutcomeResponse class provides an interace for FraudDetector DeleteOutcome responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::deleteOutcome
 */

/*!
 * Constructs a DeleteOutcomeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteOutcomeResponse::DeleteOutcomeResponse(
        const DeleteOutcomeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new DeleteOutcomeResponsePrivate(this), parent)
{
    setRequest(new DeleteOutcomeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteOutcomeRequest * DeleteOutcomeResponse::request() const
{
    return static_cast<const DeleteOutcomeRequest *>(FraudDetectorResponse::request());
}

/*!
 * \reimp
 * Parses a successful FraudDetector DeleteOutcome \a response.
 */
void DeleteOutcomeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteOutcomeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::DeleteOutcomeResponsePrivate
 * \brief The DeleteOutcomeResponsePrivate class provides private implementation for DeleteOutcomeResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteOutcomeResponsePrivate object with public implementation \a q.
 */
DeleteOutcomeResponsePrivate::DeleteOutcomeResponsePrivate(
    DeleteOutcomeResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector DeleteOutcome response element from \a xml.
 */
void DeleteOutcomeResponsePrivate::parseDeleteOutcomeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteOutcomeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
