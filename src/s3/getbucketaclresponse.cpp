/*
    Copyright 2013-2020 Paul Colby

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
