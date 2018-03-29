/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putbucketrequestpaymentresponse.h"
#include "putbucketrequestpaymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  PutBucketRequestPaymentResponse
 *
 * @brief  Handles S3 PutBucketRequestPayment responses.
 *
 * @see    S3Client::putBucketRequestPayment
 */

/**
 * @brief  Constructs a new PutBucketRequestPaymentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const PutBucketRequestPaymentRequest * PutBucketRequestPaymentResponse::request() const
{
    Q_D(const PutBucketRequestPaymentResponse);
    return static_cast<const PutBucketRequestPaymentRequest *>(d->request);
}

/**
 * @brief  Parse a S3 PutBucketRequestPayment response.
 *
 * @param  response  Response to parse.
 */
void PutBucketRequestPaymentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutBucketRequestPaymentResponsePrivate
 *
 * @brief  Private implementation for PutBucketRequestPaymentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketRequestPaymentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutBucketRequestPaymentResponse instance.
 */
PutBucketRequestPaymentResponsePrivate::PutBucketRequestPaymentResponsePrivate(
    PutBucketRequestPaymentResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 PutBucketRequestPaymentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutBucketRequestPaymentResponsePrivate::PutBucketRequestPaymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketRequestPaymentResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
