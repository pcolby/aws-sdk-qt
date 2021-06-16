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

#include "updatevariableresponse.h"
#include "updatevariableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::UpdateVariableResponse
 * \brief The UpdateVariableResponse class provides an interace for FraudDetector UpdateVariable responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::updateVariable
 */

/*!
 * Constructs a UpdateVariableResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateVariableResponse::UpdateVariableResponse(
        const UpdateVariableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new UpdateVariableResponsePrivate(this), parent)
{
    setRequest(new UpdateVariableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateVariableRequest * UpdateVariableResponse::request() const
{
    Q_D(const UpdateVariableResponse);
    return static_cast<const UpdateVariableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector UpdateVariable \a response.
 */
void UpdateVariableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateVariableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::UpdateVariableResponsePrivate
 * \brief The UpdateVariableResponsePrivate class provides private implementation for UpdateVariableResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a UpdateVariableResponsePrivate object with public implementation \a q.
 */
UpdateVariableResponsePrivate::UpdateVariableResponsePrivate(
    UpdateVariableResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector UpdateVariable response element from \a xml.
 */
void UpdateVariableResponsePrivate::parseUpdateVariableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateVariableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
