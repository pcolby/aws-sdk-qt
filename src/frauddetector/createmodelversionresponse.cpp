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

#include "createmodelversionresponse.h"
#include "createmodelversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::CreateModelVersionResponse
 * \brief The CreateModelVersionResponse class provides an interace for FraudDetector CreateModelVersion responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::createModelVersion
 */

/*!
 * Constructs a CreateModelVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateModelVersionResponse::CreateModelVersionResponse(
        const CreateModelVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new CreateModelVersionResponsePrivate(this), parent)
{
    setRequest(new CreateModelVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateModelVersionRequest * CreateModelVersionResponse::request() const
{
    Q_D(const CreateModelVersionResponse);
    return static_cast<const CreateModelVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector CreateModelVersion \a response.
 */
void CreateModelVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateModelVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::CreateModelVersionResponsePrivate
 * \brief The CreateModelVersionResponsePrivate class provides private implementation for CreateModelVersionResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a CreateModelVersionResponsePrivate object with public implementation \a q.
 */
CreateModelVersionResponsePrivate::CreateModelVersionResponsePrivate(
    CreateModelVersionResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector CreateModelVersion response element from \a xml.
 */
void CreateModelVersionResponsePrivate::parseCreateModelVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateModelVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
