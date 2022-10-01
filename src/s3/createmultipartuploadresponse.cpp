// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const CreateMultipartUploadResponse);
    return static_cast<const CreateMultipartUploadRequest *>(d->request);
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
