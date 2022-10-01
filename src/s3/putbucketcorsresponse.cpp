// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketcorsresponse.h"
#include "putbucketcorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketCorsResponse
 * \brief The PutBucketCorsResponse class provides an interace for S3 PutBucketCors responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketCors
 */

/*!
 * Constructs a PutBucketCorsResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketCorsResponse::PutBucketCorsResponse(
        const PutBucketCorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketCorsResponsePrivate(this), parent)
{
    setRequest(new PutBucketCorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketCorsRequest * PutBucketCorsResponse::request() const
{
    Q_D(const PutBucketCorsResponse);
    return static_cast<const PutBucketCorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketCors \a response.
 */
void PutBucketCorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketCorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketCorsResponsePrivate
 * \brief The PutBucketCorsResponsePrivate class provides private implementation for PutBucketCorsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketCorsResponsePrivate object with public implementation \a q.
 */
PutBucketCorsResponsePrivate::PutBucketCorsResponsePrivate(
    PutBucketCorsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketCors response element from \a xml.
 */
void PutBucketCorsResponsePrivate::parsePutBucketCorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketCorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
