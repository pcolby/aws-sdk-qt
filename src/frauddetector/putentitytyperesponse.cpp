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

#include "putentitytyperesponse.h"
#include "putentitytyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::PutEntityTypeResponse
 * \brief The PutEntityTypeResponse class provides an interace for FraudDetector PutEntityType responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::putEntityType
 */

/*!
 * Constructs a PutEntityTypeResponse object for \a reply to \a request, with parent \a parent.
 */
PutEntityTypeResponse::PutEntityTypeResponse(
        const PutEntityTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new PutEntityTypeResponsePrivate(this), parent)
{
    setRequest(new PutEntityTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutEntityTypeRequest * PutEntityTypeResponse::request() const
{
    Q_D(const PutEntityTypeResponse);
    return static_cast<const PutEntityTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector PutEntityType \a response.
 */
void PutEntityTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutEntityTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::PutEntityTypeResponsePrivate
 * \brief The PutEntityTypeResponsePrivate class provides private implementation for PutEntityTypeResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a PutEntityTypeResponsePrivate object with public implementation \a q.
 */
PutEntityTypeResponsePrivate::PutEntityTypeResponsePrivate(
    PutEntityTypeResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector PutEntityType response element from \a xml.
 */
void PutEntityTypeResponsePrivate::parsePutEntityTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutEntityTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
