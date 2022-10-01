// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketaclresponse.h"
#include "putbucketaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketAclResponse
 * \brief The PutBucketAclResponse class provides an interace for S3 PutBucketAcl responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketAcl
 */

/*!
 * Constructs a PutBucketAclResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketAclResponse::PutBucketAclResponse(
        const PutBucketAclRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketAclResponsePrivate(this), parent)
{
    setRequest(new PutBucketAclRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketAclRequest * PutBucketAclResponse::request() const
{
    Q_D(const PutBucketAclResponse);
    return static_cast<const PutBucketAclRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketAcl \a response.
 */
void PutBucketAclResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketAclResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketAclResponsePrivate
 * \brief The PutBucketAclResponsePrivate class provides private implementation for PutBucketAclResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketAclResponsePrivate object with public implementation \a q.
 */
PutBucketAclResponsePrivate::PutBucketAclResponsePrivate(
    PutBucketAclResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketAcl response element from \a xml.
 */
void PutBucketAclResponsePrivate::parsePutBucketAclResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketAclResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
