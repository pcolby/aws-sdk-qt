// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebucketcorsresponse.h"
#include "deletebucketcorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketCorsResponse
 * \brief The DeleteBucketCorsResponse class provides an interace for S3 DeleteBucketCors responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketCors
 */

/*!
 * Constructs a DeleteBucketCorsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketCorsResponse::DeleteBucketCorsResponse(
        const DeleteBucketCorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketCorsResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketCorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketCorsRequest * DeleteBucketCorsResponse::request() const
{
    Q_D(const DeleteBucketCorsResponse);
    return static_cast<const DeleteBucketCorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 DeleteBucketCors \a response.
 */
void DeleteBucketCorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBucketCorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteBucketCorsResponsePrivate
 * \brief The DeleteBucketCorsResponsePrivate class provides private implementation for DeleteBucketCorsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketCorsResponsePrivate object with public implementation \a q.
 */
DeleteBucketCorsResponsePrivate::DeleteBucketCorsResponsePrivate(
    DeleteBucketCorsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteBucketCors response element from \a xml.
 */
void DeleteBucketCorsResponsePrivate::parseDeleteBucketCorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketCorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
