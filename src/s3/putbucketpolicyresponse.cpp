// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketpolicyresponse.h"
#include "putbucketpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketPolicyResponse
 * \brief The PutBucketPolicyResponse class provides an interace for S3 PutBucketPolicy responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketPolicy
 */

/*!
 * Constructs a PutBucketPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketPolicyResponse::PutBucketPolicyResponse(
        const PutBucketPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketPolicyResponsePrivate(this), parent)
{
    setRequest(new PutBucketPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketPolicyRequest * PutBucketPolicyResponse::request() const
{
    Q_D(const PutBucketPolicyResponse);
    return static_cast<const PutBucketPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketPolicy \a response.
 */
void PutBucketPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketPolicyResponsePrivate
 * \brief The PutBucketPolicyResponsePrivate class provides private implementation for PutBucketPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketPolicyResponsePrivate object with public implementation \a q.
 */
PutBucketPolicyResponsePrivate::PutBucketPolicyResponsePrivate(
    PutBucketPolicyResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketPolicy response element from \a xml.
 */
void PutBucketPolicyResponsePrivate::parsePutBucketPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
