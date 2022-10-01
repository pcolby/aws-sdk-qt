// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketaclresponse.h"
#include "getbucketaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketAclResponse
 * \brief The GetBucketAclResponse class provides an interace for S3 GetBucketAcl responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketAcl
 */

/*!
 * Constructs a GetBucketAclResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketAclResponse::GetBucketAclResponse(
        const GetBucketAclRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketAclResponsePrivate(this), parent)
{
    setRequest(new GetBucketAclRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketAclRequest * GetBucketAclResponse::request() const
{
    Q_D(const GetBucketAclResponse);
    return static_cast<const GetBucketAclRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketAcl \a response.
 */
void GetBucketAclResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketAclResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketAclResponsePrivate
 * \brief The GetBucketAclResponsePrivate class provides private implementation for GetBucketAclResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketAclResponsePrivate object with public implementation \a q.
 */
GetBucketAclResponsePrivate::GetBucketAclResponsePrivate(
    GetBucketAclResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketAcl response element from \a xml.
 */
void GetBucketAclResponsePrivate::parseGetBucketAclResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketAclResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
