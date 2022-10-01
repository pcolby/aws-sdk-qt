// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebuckettaggingresponse.h"
#include "deletebuckettaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketTaggingResponse
 * \brief The DeleteBucketTaggingResponse class provides an interace for S3 DeleteBucketTagging responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketTagging
 */

/*!
 * Constructs a DeleteBucketTaggingResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketTaggingResponse::DeleteBucketTaggingResponse(
        const DeleteBucketTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketTaggingResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketTaggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketTaggingRequest * DeleteBucketTaggingResponse::request() const
{
    Q_D(const DeleteBucketTaggingResponse);
    return static_cast<const DeleteBucketTaggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 DeleteBucketTagging \a response.
 */
void DeleteBucketTaggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBucketTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteBucketTaggingResponsePrivate
 * \brief The DeleteBucketTaggingResponsePrivate class provides private implementation for DeleteBucketTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketTaggingResponsePrivate object with public implementation \a q.
 */
DeleteBucketTaggingResponsePrivate::DeleteBucketTaggingResponsePrivate(
    DeleteBucketTaggingResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteBucketTagging response element from \a xml.
 */
void DeleteBucketTaggingResponsePrivate::parseDeleteBucketTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketTaggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
