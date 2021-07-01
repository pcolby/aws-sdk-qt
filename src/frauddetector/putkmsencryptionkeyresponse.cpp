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

#include "putkmsencryptionkeyresponse.h"
#include "putkmsencryptionkeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::PutKMSEncryptionKeyResponse
 * \brief The PutKMSEncryptionKeyResponse class provides an interace for FraudDetector PutKMSEncryptionKey responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::putKMSEncryptionKey
 */

/*!
 * Constructs a PutKMSEncryptionKeyResponse object for \a reply to \a request, with parent \a parent.
 */
PutKMSEncryptionKeyResponse::PutKMSEncryptionKeyResponse(
        const PutKMSEncryptionKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new PutKMSEncryptionKeyResponsePrivate(this), parent)
{
    setRequest(new PutKMSEncryptionKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutKMSEncryptionKeyRequest * PutKMSEncryptionKeyResponse::request() const
{
    Q_D(const PutKMSEncryptionKeyResponse);
    return static_cast<const PutKMSEncryptionKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector PutKMSEncryptionKey \a response.
 */
void PutKMSEncryptionKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutKMSEncryptionKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::PutKMSEncryptionKeyResponsePrivate
 * \brief The PutKMSEncryptionKeyResponsePrivate class provides private implementation for PutKMSEncryptionKeyResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a PutKMSEncryptionKeyResponsePrivate object with public implementation \a q.
 */
PutKMSEncryptionKeyResponsePrivate::PutKMSEncryptionKeyResponsePrivate(
    PutKMSEncryptionKeyResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector PutKMSEncryptionKey response element from \a xml.
 */
void PutKMSEncryptionKeyResponsePrivate::parsePutKMSEncryptionKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutKMSEncryptionKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
