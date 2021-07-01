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

#include "createdetectorversionresponse.h"
#include "createdetectorversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::CreateDetectorVersionResponse
 * \brief The CreateDetectorVersionResponse class provides an interace for FraudDetector CreateDetectorVersion responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::createDetectorVersion
 */

/*!
 * Constructs a CreateDetectorVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDetectorVersionResponse::CreateDetectorVersionResponse(
        const CreateDetectorVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new CreateDetectorVersionResponsePrivate(this), parent)
{
    setRequest(new CreateDetectorVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDetectorVersionRequest * CreateDetectorVersionResponse::request() const
{
    Q_D(const CreateDetectorVersionResponse);
    return static_cast<const CreateDetectorVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector CreateDetectorVersion \a response.
 */
void CreateDetectorVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDetectorVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::CreateDetectorVersionResponsePrivate
 * \brief The CreateDetectorVersionResponsePrivate class provides private implementation for CreateDetectorVersionResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a CreateDetectorVersionResponsePrivate object with public implementation \a q.
 */
CreateDetectorVersionResponsePrivate::CreateDetectorVersionResponsePrivate(
    CreateDetectorVersionResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector CreateDetectorVersion response element from \a xml.
 */
void CreateDetectorVersionResponsePrivate::parseCreateDetectorVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDetectorVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
