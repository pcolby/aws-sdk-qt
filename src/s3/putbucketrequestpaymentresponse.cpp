// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(PutBucketRequestPaymentResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
