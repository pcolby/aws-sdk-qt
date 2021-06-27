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
    return static_cast<const PutBucketAclRequest *>(S3Response::request());
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
