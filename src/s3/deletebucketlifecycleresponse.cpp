// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebucketlifecycleresponse.h"
#include "deletebucketlifecycleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketLifecycleResponse
 * \brief The DeleteBucketLifecycleResponse class provides an interace for S3 DeleteBucketLifecycle responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketLifecycle
 */

/*!
 * Constructs a DeleteBucketLifecycleResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketLifecycleResponse::DeleteBucketLifecycleResponse(
        const DeleteBucketLifecycleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketLifecycleResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketLifecycleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketLifecycleRequest * DeleteBucketLifecycleResponse::request() const
{
    Q_D(const DeleteBucketLifecycleResponse);
    return static_cast<const DeleteBucketLifecycleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 DeleteBucketLifecycle \a response.
 */
void DeleteBucketLifecycleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBucketLifecycleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteBucketLifecycleResponsePrivate
 * \brief The DeleteBucketLifecycleResponsePrivate class provides private implementation for DeleteBucketLifecycleResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketLifecycleResponsePrivate object with public implementation \a q.
 */
DeleteBucketLifecycleResponsePrivate::DeleteBucketLifecycleResponsePrivate(
    DeleteBucketLifecycleResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteBucketLifecycle response element from \a xml.
 */
void DeleteBucketLifecycleResponsePrivate::parseDeleteBucketLifecycleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketLifecycleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
