/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
