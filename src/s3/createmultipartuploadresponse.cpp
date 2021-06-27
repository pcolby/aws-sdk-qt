/*
    Copyright 2013-2021 Paul Colby

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

#include "createmultipartuploadresponse.h"
#include "createmultipartuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::CreateMultipartUploadResponse
 * \brief The CreateMultipartUploadResponse class provides an interace for S3 CreateMultipartUpload responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::createMultipartUpload
 */

/*!
 * Constructs a CreateMultipartUploadResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMultipartUploadResponse::CreateMultipartUploadResponse(
        const CreateMultipartUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new CreateMultipartUploadResponsePrivate(this), parent)
{
    setRequest(new CreateMultipartUploadRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMultipartUploadRequest * CreateMultipartUploadResponse::request() const
{
    return static_cast<const CreateMultipartUploadRequest *>(S3Response::request());
}

/*!
 * \reimp
 * Parses a successful S3 CreateMultipartUpload \a response.
 */
void CreateMultipartUploadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMultipartUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::CreateMultipartUploadResponsePrivate
 * \brief The CreateMultipartUploadResponsePrivate class provides private implementation for CreateMultipartUploadResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a CreateMultipartUploadResponsePrivate object with public implementation \a q.
 */
CreateMultipartUploadResponsePrivate::CreateMultipartUploadResponsePrivate(
    CreateMultipartUploadResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 CreateMultipartUpload response element from \a xml.
 */
void CreateMultipartUploadResponsePrivate::parseCreateMultipartUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMultipartUploadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
