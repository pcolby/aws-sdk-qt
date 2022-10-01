// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteobjecttaggingresponse.h"
#include "deleteobjecttaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteObjectTaggingResponse
 * \brief The DeleteObjectTaggingResponse class provides an interace for S3 DeleteObjectTagging responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteObjectTagging
 */

/*!
 * Constructs a DeleteObjectTaggingResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteObjectTaggingResponse::DeleteObjectTaggingResponse(
        const DeleteObjectTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteObjectTaggingResponsePrivate(this), parent)
{
    setRequest(new DeleteObjectTaggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteObjectTaggingRequest * DeleteObjectTaggingResponse::request() const
{
    Q_D(const DeleteObjectTaggingResponse);
    return static_cast<const DeleteObjectTaggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 DeleteObjectTagging \a response.
 */
void DeleteObjectTaggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteObjectTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteObjectTaggingResponsePrivate
 * \brief The DeleteObjectTaggingResponsePrivate class provides private implementation for DeleteObjectTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteObjectTaggingResponsePrivate object with public implementation \a q.
 */
DeleteObjectTaggingResponsePrivate::DeleteObjectTaggingResponsePrivate(
    DeleteObjectTaggingResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteObjectTagging response element from \a xml.
 */
void DeleteObjectTaggingResponsePrivate::parseDeleteObjectTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteObjectTaggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
