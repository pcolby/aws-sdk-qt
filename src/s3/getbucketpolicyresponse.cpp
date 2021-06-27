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
    return static_cast<const GetBucketPolicyRequest *>(S3Response::request());
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
