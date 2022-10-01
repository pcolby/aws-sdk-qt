// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketcorsresponse.h"
#include "getbucketcorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketCorsResponse
 * \brief The GetBucketCorsResponse class provides an interace for S3 GetBucketCors responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketCors
 */

/*!
 * Constructs a GetBucketCorsResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketCorsResponse::GetBucketCorsResponse(
        const GetBucketCorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketCorsResponsePrivate(this), parent)
{
    setRequest(new GetBucketCorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketCorsRequest * GetBucketCorsResponse::request() const
{
    Q_D(const GetBucketCorsResponse);
    return static_cast<const GetBucketCorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketCors \a response.
 */
void GetBucketCorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketCorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketCorsResponsePrivate
 * \brief The GetBucketCorsResponsePrivate class provides private implementation for GetBucketCorsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketCorsResponsePrivate object with public implementation \a q.
 */
GetBucketCorsResponsePrivate::GetBucketCorsResponsePrivate(
    GetBucketCorsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketCors response element from \a xml.
 */
void GetBucketCorsResponsePrivate::parseGetBucketCorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketCorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
