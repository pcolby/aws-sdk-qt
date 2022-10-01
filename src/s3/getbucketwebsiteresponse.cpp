// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketwebsiteresponse.h"
#include "getbucketwebsiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketWebsiteResponse
 * \brief The GetBucketWebsiteResponse class provides an interace for S3 GetBucketWebsite responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketWebsite
 */

/*!
 * Constructs a GetBucketWebsiteResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketWebsiteResponse::GetBucketWebsiteResponse(
        const GetBucketWebsiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketWebsiteResponsePrivate(this), parent)
{
    setRequest(new GetBucketWebsiteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketWebsiteRequest * GetBucketWebsiteResponse::request() const
{
    Q_D(const GetBucketWebsiteResponse);
    return static_cast<const GetBucketWebsiteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketWebsite \a response.
 */
void GetBucketWebsiteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketWebsiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketWebsiteResponsePrivate
 * \brief The GetBucketWebsiteResponsePrivate class provides private implementation for GetBucketWebsiteResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketWebsiteResponsePrivate object with public implementation \a q.
 */
GetBucketWebsiteResponsePrivate::GetBucketWebsiteResponsePrivate(
    GetBucketWebsiteResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketWebsite response element from \a xml.
 */
void GetBucketWebsiteResponsePrivate::parseGetBucketWebsiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketWebsiteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
