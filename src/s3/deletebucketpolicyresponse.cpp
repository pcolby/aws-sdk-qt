/*
    Copyright 2013-2019 Paul Colby

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
