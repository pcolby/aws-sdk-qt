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

#include "deletemodelresponse.h"
#include "deletemodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteModelResponse
 * \brief The DeleteModelResponse class provides an interace for FraudDetector DeleteModel responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::deleteModel
 */

/*!
 * Constructs a DeleteModelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteModelResponse::DeleteModelResponse(
        const DeleteModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new DeleteModelResponsePrivate(this), parent)
{
    setRequest(new DeleteModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteModelRequest * DeleteModelResponse::request() const
{
    Q_D(const DeleteModelResponse);
    return static_cast<const DeleteModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector DeleteModel \a response.
 */
void DeleteModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::DeleteModelResponsePrivate
 * \brief The DeleteModelResponsePrivate class provides private implementation for DeleteModelResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteModelResponsePrivate object with public implementation \a q.
 */
DeleteModelResponsePrivate::DeleteModelResponsePrivate(
    DeleteModelResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector DeleteModel response element from \a xml.
 */
void DeleteModelResponsePrivate::parseDeleteModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
