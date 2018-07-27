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

#include "completemultipartuploadresponse.h"
#include "completemultipartuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::CompleteMultipartUploadResponse
 * \brief The CompleteMultipartUploadResponse class provides an interace for S3 CompleteMultipartUpload responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::completeMultipartUpload
 */

/*!
 * Constructs a CompleteMultipartUploadResponse object for \a reply to \a request, with parent \a parent.
 */
CompleteMultipartUploadResponse::CompleteMultipartUploadResponse(
        const CompleteMultipartUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new CompleteMultipartUploadResponsePrivate(this), parent)
{
    setRequest(new CompleteMultipartUploadRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CompleteMultipartUploadRequest * CompleteMultipartUploadResponse::request() const
{
    Q_D(const CompleteMultipartUploadResponse);
    return static_cast<const CompleteMultipartUploadRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 CompleteMultipartUpload \a response.
 */
void CompleteMultipartUploadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CompleteMultipartUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::CompleteMultipartUploadResponsePrivate
 * \brief The CompleteMultipartUploadResponsePrivate class provides private implementation for CompleteMultipartUploadResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a CompleteMultipartUploadResponsePrivate object with public implementation \a q.
 */
CompleteMultipartUploadResponsePrivate::CompleteMultipartUploadResponsePrivate(
    CompleteMultipartUploadResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 CompleteMultipartUpload response element from \a xml.
 */
void CompleteMultipartUploadResponsePrivate::parseCompleteMultipartUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CompleteMultipartUploadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
