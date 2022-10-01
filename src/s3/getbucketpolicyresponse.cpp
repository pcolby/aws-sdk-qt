// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketpolicyresponse.h"
#include "getbucketpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketPolicyResponse
 * \brief The GetBucketPolicyResponse class provides an interace for S3 GetBucketPolicy responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketPolicy
 */

/*!
 * Constructs a GetBucketPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketPolicyResponse::GetBucketPolicyResponse(
        const GetBucketPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketPolicyResponsePrivate(this), parent)
{
    setRequest(new GetBucketPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketPolicyRequest * GetBucketPolicyResponse::request() const
{
    Q_D(const GetBucketPolicyResponse);
    return static_cast<const GetBucketPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketPolicy \a response.
 */
void GetBucketPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketPolicyResponsePrivate
 * \brief The GetBucketPolicyResponsePrivate class provides private implementation for GetBucketPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketPolicyResponsePrivate object with public implementation \a q.
 */
GetBucketPolicyResponsePrivate::GetBucketPolicyResponsePrivate(
    GetBucketPolicyResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketPolicy response element from \a xml.
 */
void GetBucketPolicyResponsePrivate::parseGetBucketPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
