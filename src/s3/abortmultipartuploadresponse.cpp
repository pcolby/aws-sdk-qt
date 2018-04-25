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
    Q_D(AbortMultipartUploadResponse);
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
    /// @todo
}

} // namespace S3
} // namespace QtAws
