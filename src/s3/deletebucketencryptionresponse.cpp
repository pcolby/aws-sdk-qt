// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebucketencryptionresponse.h"
#include "deletebucketencryptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketEncryptionResponse
 * \brief The DeleteBucketEncryptionResponse class provides an interace for S3 DeleteBucketEncryption responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketEncryption
 */

/*!
 * Constructs a DeleteBucketEncryptionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketEncryptionResponse::DeleteBucketEncryptionResponse(
        const DeleteBucketEncryptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketEncryptionResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketEncryptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketEncryptionRequest * DeleteBucketEncryptionResponse::request() const
{
    Q_D(const DeleteBucketEncryptionResponse);
    return static_cast<const DeleteBucketEncryptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 DeleteBucketEncryption \a response.
 */
void DeleteBucketEncryptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBucketEncryptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteBucketEncryptionResponsePrivate
 * \brief The DeleteBucketEncryptionResponsePrivate class provides private implementation for DeleteBucketEncryptionResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketEncryptionResponsePrivate object with public implementation \a q.
 */
DeleteBucketEncryptionResponsePrivate::DeleteBucketEncryptionResponsePrivate(
    DeleteBucketEncryptionResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteBucketEncryption response element from \a xml.
 */
void DeleteBucketEncryptionResponsePrivate::parseDeleteBucketEncryptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketEncryptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
