/*
    Copyright 2013-2018 Paul Colby

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

#include "deletebucketwebsiteresponse.h"
#include "deletebucketwebsiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketWebsiteResponse
 * \brief The DeleteBucketWebsiteResponse class provides an interace for S3 DeleteBucketWebsite responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketWebsite
 */

/*!
 * Constructs a DeleteBucketWebsiteResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketWebsiteResponse::DeleteBucketWebsiteResponse(
        const DeleteBucketWebsiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketWebsiteResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketWebsiteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketWebsiteRequest * DeleteBucketWebsiteResponse::request() const
{
    Q_D(const DeleteBucketWebsiteResponse);
    return static_cast<const DeleteBucketWebsiteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 DeleteBucketWebsite \a response.
 */
void DeleteBucketWebsiteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBucketWebsiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteBucketWebsiteResponsePrivate
 * \brief The DeleteBucketWebsiteResponsePrivate class provides private implementation for DeleteBucketWebsiteResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketWebsiteResponsePrivate object with public implementation \a q.
 */
DeleteBucketWebsiteResponsePrivate::DeleteBucketWebsiteResponsePrivate(
    DeleteBucketWebsiteResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteBucketWebsite response element from \a xml.
 */
void DeleteBucketWebsiteResponsePrivate::parseDeleteBucketWebsiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketWebsiteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
