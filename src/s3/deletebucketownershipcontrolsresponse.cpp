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

#include "deletebucketownershipcontrolsresponse.h"
#include "deletebucketownershipcontrolsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketOwnershipControlsResponse
 * \brief The DeleteBucketOwnershipControlsResponse class provides an interace for S3 DeleteBucketOwnershipControls responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketOwnershipControls
 */

/*!
 * Constructs a DeleteBucketOwnershipControlsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketOwnershipControlsResponse::DeleteBucketOwnershipControlsResponse(
        const DeleteBucketOwnershipControlsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketOwnershipControlsResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketOwnershipControlsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketOwnershipControlsRequest * DeleteBucketOwnershipControlsResponse::request() const
{
    Q_D(const DeleteBucketOwnershipControlsResponse);
    return static_cast<const DeleteBucketOwnershipControlsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 DeleteBucketOwnershipControls \a response.
 */
void DeleteBucketOwnershipControlsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBucketOwnershipControlsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteBucketOwnershipControlsResponsePrivate
 * \brief The DeleteBucketOwnershipControlsResponsePrivate class provides private implementation for DeleteBucketOwnershipControlsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketOwnershipControlsResponsePrivate object with public implementation \a q.
 */
DeleteBucketOwnershipControlsResponsePrivate::DeleteBucketOwnershipControlsResponsePrivate(
    DeleteBucketOwnershipControlsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteBucketOwnershipControls response element from \a xml.
 */
void DeleteBucketOwnershipControlsResponsePrivate::parseDeleteBucketOwnershipControlsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketOwnershipControlsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
