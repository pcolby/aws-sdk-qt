// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketencryptionresponse.h"
#include "putbucketencryptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketEncryptionResponse
 * \brief The PutBucketEncryptionResponse class provides an interace for S3 PutBucketEncryption responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketEncryption
 */

/*!
 * Constructs a PutBucketEncryptionResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketEncryptionResponse::PutBucketEncryptionResponse(
        const PutBucketEncryptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketEncryptionResponsePrivate(this), parent)
{
    setRequest(new PutBucketEncryptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketEncryptionRequest * PutBucketEncryptionResponse::request() const
{
    Q_D(const PutBucketEncryptionResponse);
    return static_cast<const PutBucketEncryptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketEncryption \a response.
 */
void PutBucketEncryptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketEncryptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketEncryptionResponsePrivate
 * \brief The PutBucketEncryptionResponsePrivate class provides private implementation for PutBucketEncryptionResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketEncryptionResponsePrivate object with public implementation \a q.
 */
PutBucketEncryptionResponsePrivate::PutBucketEncryptionResponsePrivate(
    PutBucketEncryptionResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketEncryption response element from \a xml.
 */
void PutBucketEncryptionResponsePrivate::parsePutBucketEncryptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketEncryptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
