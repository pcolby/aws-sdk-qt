// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "abortmultipartuploadresponse.h"
#include "abortmultipartuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::AbortMultipartUploadResponse
 * \brief The AbortMultipartUploadResponse class provides an interace for S3 AbortMultipartUpload responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::abortMultipartUpload
 */

/*!
 * Constructs a AbortMultipartUploadResponse object for \a reply to \a request, with parent \a parent.
 */
AbortMultipartUploadResponse::AbortMultipartUploadResponse(
        const AbortMultipartUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new AbortMultipartUploadResponsePrivate(this), parent)
{
    setRequest(new AbortMultipartUploadRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AbortMultipartUploadRequest * AbortMultipartUploadResponse::request() const
{
    Q_D(const AbortMultipartUploadResponse);
    return static_cast<const AbortMultipartUploadRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 AbortMultipartUpload \a response.
 */
void AbortMultipartUploadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AbortMultipartUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::AbortMultipartUploadResponsePrivate
 * \brief The AbortMultipartUploadResponsePrivate class provides private implementation for AbortMultipartUploadResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a AbortMultipartUploadResponsePrivate object with public implementation \a q.
 */
AbortMultipartUploadResponsePrivate::AbortMultipartUploadResponsePrivate(
    AbortMultipartUploadResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 AbortMultipartUpload response element from \a xml.
 */
void AbortMultipartUploadResponsePrivate::parseAbortMultipartUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AbortMultipartUploadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
