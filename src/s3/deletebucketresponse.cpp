// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebucketresponse.h"
#include "deletebucketresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketResponse
 * \brief The DeleteBucketResponse class provides an interace for S3 DeleteBucket responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucket
 */

/*!
 * Constructs a DeleteBucketResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketResponse::DeleteBucketResponse(
        const DeleteBucketRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketRequest * DeleteBucketResponse::request() const
{
    Q_D(const DeleteBucketResponse);
    return static_cast<const DeleteBucketRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 DeleteBucket \a response.
 */
void DeleteBucketResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBucketResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteBucketResponsePrivate
 * \brief The DeleteBucketResponsePrivate class provides private implementation for DeleteBucketResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketResponsePrivate object with public implementation \a q.
 */
DeleteBucketResponsePrivate::DeleteBucketResponsePrivate(
    DeleteBucketResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteBucket response element from \a xml.
 */
void DeleteBucketResponsePrivate::parseDeleteBucketResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
