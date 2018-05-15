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

#include "getbucketrequestpaymentresponse.h"
#include "getbucketrequestpaymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketRequestPaymentResponse
 * \brief The GetBucketRequestPaymentResponse class provides an interace for S3 GetBucketRequestPayment responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketRequestPayment
 */

/*!
 * Constructs a GetBucketRequestPaymentResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketRequestPaymentResponse::GetBucketRequestPaymentResponse(
        const GetBucketRequestPaymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketRequestPaymentResponsePrivate(this), parent)
{
    setRequest(new GetBucketRequestPaymentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketRequestPaymentRequest * GetBucketRequestPaymentResponse::request() const
{
    Q_D(const GetBucketRequestPaymentResponse);
    return static_cast<const GetBucketRequestPaymentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketRequestPayment \a response.
 */
void GetBucketRequestPaymentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketRequestPaymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketRequestPaymentResponsePrivate
 * \brief The GetBucketRequestPaymentResponsePrivate class provides private implementation for GetBucketRequestPaymentResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketRequestPaymentResponsePrivate object with public implementation \a q.
 */
GetBucketRequestPaymentResponsePrivate::GetBucketRequestPaymentResponsePrivate(
    GetBucketRequestPaymentResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketRequestPayment response element from \a xml.
 */
void GetBucketRequestPaymentResponsePrivate::parseGetBucketRequestPaymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketRequestPaymentResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
