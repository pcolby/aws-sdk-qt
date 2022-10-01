// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "headbucketresponse.h"
#include "headbucketresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::HeadBucketResponse
 * \brief The HeadBucketResponse class provides an interace for S3 HeadBucket responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::headBucket
 */

/*!
 * Constructs a HeadBucketResponse object for \a reply to \a request, with parent \a parent.
 */
HeadBucketResponse::HeadBucketResponse(
        const HeadBucketRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new HeadBucketResponsePrivate(this), parent)
{
    setRequest(new HeadBucketRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const HeadBucketRequest * HeadBucketResponse::request() const
{
    Q_D(const HeadBucketResponse);
    return static_cast<const HeadBucketRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 HeadBucket \a response.
 */
void HeadBucketResponse::parseSuccess(QIODevice &response)
{
    //Q_D(HeadBucketResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::HeadBucketResponsePrivate
 * \brief The HeadBucketResponsePrivate class provides private implementation for HeadBucketResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a HeadBucketResponsePrivate object with public implementation \a q.
 */
HeadBucketResponsePrivate::HeadBucketResponsePrivate(
    HeadBucketResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 HeadBucket response element from \a xml.
 */
void HeadBucketResponsePrivate::parseHeadBucketResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("HeadBucketResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
