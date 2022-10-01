// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "uploadpartresponse.h"
#include "uploadpartresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::UploadPartResponse
 * \brief The UploadPartResponse class provides an interace for S3 UploadPart responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::uploadPart
 */

/*!
 * Constructs a UploadPartResponse object for \a reply to \a request, with parent \a parent.
 */
UploadPartResponse::UploadPartResponse(
        const UploadPartRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new UploadPartResponsePrivate(this), parent)
{
    setRequest(new UploadPartRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UploadPartRequest * UploadPartResponse::request() const
{
    Q_D(const UploadPartResponse);
    return static_cast<const UploadPartRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 UploadPart \a response.
 */
void UploadPartResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UploadPartResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::UploadPartResponsePrivate
 * \brief The UploadPartResponsePrivate class provides private implementation for UploadPartResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a UploadPartResponsePrivate object with public implementation \a q.
 */
UploadPartResponsePrivate::UploadPartResponsePrivate(
    UploadPartResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 UploadPart response element from \a xml.
 */
void UploadPartResponsePrivate::parseUploadPartResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UploadPartResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
