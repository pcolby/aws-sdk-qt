// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketwebsiteresponse.h"
#include "putbucketwebsiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketWebsiteResponse
 * \brief The PutBucketWebsiteResponse class provides an interace for S3 PutBucketWebsite responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketWebsite
 */

/*!
 * Constructs a PutBucketWebsiteResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketWebsiteResponse::PutBucketWebsiteResponse(
        const PutBucketWebsiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketWebsiteResponsePrivate(this), parent)
{
    setRequest(new PutBucketWebsiteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketWebsiteRequest * PutBucketWebsiteResponse::request() const
{
    Q_D(const PutBucketWebsiteResponse);
    return static_cast<const PutBucketWebsiteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketWebsite \a response.
 */
void PutBucketWebsiteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketWebsiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketWebsiteResponsePrivate
 * \brief The PutBucketWebsiteResponsePrivate class provides private implementation for PutBucketWebsiteResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketWebsiteResponsePrivate object with public implementation \a q.
 */
PutBucketWebsiteResponsePrivate::PutBucketWebsiteResponsePrivate(
    PutBucketWebsiteResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketWebsite response element from \a xml.
 */
void PutBucketWebsiteResponsePrivate::parsePutBucketWebsiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketWebsiteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
