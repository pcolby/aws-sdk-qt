// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketencryptionresponse.h"
#include "getbucketencryptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketEncryptionResponse
 * \brief The GetBucketEncryptionResponse class provides an interace for S3 GetBucketEncryption responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketEncryption
 */

/*!
 * Constructs a GetBucketEncryptionResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketEncryptionResponse::GetBucketEncryptionResponse(
        const GetBucketEncryptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketEncryptionResponsePrivate(this), parent)
{
    setRequest(new GetBucketEncryptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketEncryptionRequest * GetBucketEncryptionResponse::request() const
{
    Q_D(const GetBucketEncryptionResponse);
    return static_cast<const GetBucketEncryptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketEncryption \a response.
 */
void GetBucketEncryptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketEncryptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketEncryptionResponsePrivate
 * \brief The GetBucketEncryptionResponsePrivate class provides private implementation for GetBucketEncryptionResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketEncryptionResponsePrivate object with public implementation \a q.
 */
GetBucketEncryptionResponsePrivate::GetBucketEncryptionResponsePrivate(
    GetBucketEncryptionResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketEncryption response element from \a xml.
 */
void GetBucketEncryptionResponsePrivate::parseGetBucketEncryptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketEncryptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
