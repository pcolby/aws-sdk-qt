// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketversioningresponse.h"
#include "putbucketversioningresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketVersioningResponse
 * \brief The PutBucketVersioningResponse class provides an interace for S3 PutBucketVersioning responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketVersioning
 */

/*!
 * Constructs a PutBucketVersioningResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketVersioningResponse::PutBucketVersioningResponse(
        const PutBucketVersioningRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketVersioningResponsePrivate(this), parent)
{
    setRequest(new PutBucketVersioningRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketVersioningRequest * PutBucketVersioningResponse::request() const
{
    Q_D(const PutBucketVersioningResponse);
    return static_cast<const PutBucketVersioningRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketVersioning \a response.
 */
void PutBucketVersioningResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketVersioningResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketVersioningResponsePrivate
 * \brief The PutBucketVersioningResponsePrivate class provides private implementation for PutBucketVersioningResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketVersioningResponsePrivate object with public implementation \a q.
 */
PutBucketVersioningResponsePrivate::PutBucketVersioningResponsePrivate(
    PutBucketVersioningResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketVersioning response element from \a xml.
 */
void PutBucketVersioningResponsePrivate::parsePutBucketVersioningResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketVersioningResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
