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

#include "deletelabelresponse.h"
#include "deletelabelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteLabelResponse
 * \brief The DeleteLabelResponse class provides an interace for FraudDetector DeleteLabel responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::deleteLabel
 */

/*!
 * Constructs a DeleteLabelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLabelResponse::DeleteLabelResponse(
        const DeleteLabelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new DeleteLabelResponsePrivate(this), parent)
{
    setRequest(new DeleteLabelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLabelRequest * DeleteLabelResponse::request() const
{
    return static_cast<const DeleteLabelRequest *>(FraudDetectorResponse::request());
}

/*!
 * \reimp
 * Parses a successful FraudDetector DeleteLabel \a response.
 */
void DeleteLabelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLabelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::DeleteLabelResponsePrivate
 * \brief The DeleteLabelResponsePrivate class provides private implementation for DeleteLabelResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteLabelResponsePrivate object with public implementation \a q.
 */
DeleteLabelResponsePrivate::DeleteLabelResponsePrivate(
    DeleteLabelResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector DeleteLabel response element from \a xml.
 */
void DeleteLabelResponsePrivate::parseDeleteLabelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLabelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
