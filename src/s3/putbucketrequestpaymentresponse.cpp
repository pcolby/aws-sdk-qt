/*
    Copyright 2013-2018 Paul Colby

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

#include "putbucketrequestpaymentresponse.h"
#include "putbucketrequestpaymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketRequestPaymentResponse
 * \brief The PutBucketRequestPaymentResponse class provides an interace for S3 PutBucketRequestPayment responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketRequestPayment
 */

/*!
 * Constructs a PutBucketRequestPaymentResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketRequestPaymentResponse::PutBucketRequestPaymentResponse(
        const PutBucketRequestPaymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketRequestPaymentResponsePrivate(this), parent)
{
    setRequest(new PutBucketRequestPaymentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketRequestPaymentRequest * PutBucketRequestPaymentResponse::request() const
{
    Q_D(const PutBucketRequestPaymentResponse);
    return static_cast<const PutBucketRequestPaymentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketRequestPayment \a response.
 */
void PutBucketRequestPaymentResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutBucketRequestPaymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketRequestPaymentResponsePrivate
 * \brief The PutBucketRequestPaymentResponsePrivate class provides private implementation for PutBucketRequestPaymentResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketRequestPaymentResponsePrivate object with public implementation \a q.
 */
PutBucketRequestPaymentResponsePrivate::PutBucketRequestPaymentResponsePrivate(
    PutBucketRequestPaymentResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketRequestPayment response element from \a xml.
 */
void PutBucketRequestPaymentResponsePrivate::parsePutBucketRequestPaymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketRequestPaymentResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
