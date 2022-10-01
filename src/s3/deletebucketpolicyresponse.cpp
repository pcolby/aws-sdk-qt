// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebucketpolicyresponse.h"
#include "deletebucketpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketPolicyResponse
 * \brief The DeleteBucketPolicyResponse class provides an interace for S3 DeleteBucketPolicy responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketPolicy
 */

/*!
 * Constructs a DeleteBucketPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketPolicyResponse::DeleteBucketPolicyResponse(
        const DeleteBucketPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketPolicyRequest * DeleteBucketPolicyResponse::request() const
{
    Q_D(const DeleteBucketPolicyResponse);
    return static_cast<const DeleteBucketPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 DeleteBucketPolicy \a response.
 */
void DeleteBucketPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBucketPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteBucketPolicyResponsePrivate
 * \brief The DeleteBucketPolicyResponsePrivate class provides private implementation for DeleteBucketPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketPolicyResponsePrivate object with public implementation \a q.
 */
DeleteBucketPolicyResponsePrivate::DeleteBucketPolicyResponsePrivate(
    DeleteBucketPolicyResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteBucketPolicy response element from \a xml.
 */
void DeleteBucketPolicyResponsePrivate::parseDeleteBucketPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
