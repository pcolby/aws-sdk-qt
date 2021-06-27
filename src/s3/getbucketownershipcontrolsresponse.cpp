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

#include "getbucketownershipcontrolsresponse.h"
#include "getbucketownershipcontrolsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketOwnershipControlsResponse
 * \brief The GetBucketOwnershipControlsResponse class provides an interace for S3 GetBucketOwnershipControls responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketOwnershipControls
 */

/*!
 * Constructs a GetBucketOwnershipControlsResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketOwnershipControlsResponse::GetBucketOwnershipControlsResponse(
        const GetBucketOwnershipControlsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketOwnershipControlsResponsePrivate(this), parent)
{
    setRequest(new GetBucketOwnershipControlsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketOwnershipControlsRequest * GetBucketOwnershipControlsResponse::request() const
{
    return static_cast<const GetBucketOwnershipControlsRequest *>(S3Response::request());
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketOwnershipControls \a response.
 */
void GetBucketOwnershipControlsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketOwnershipControlsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketOwnershipControlsResponsePrivate
 * \brief The GetBucketOwnershipControlsResponsePrivate class provides private implementation for GetBucketOwnershipControlsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketOwnershipControlsResponsePrivate object with public implementation \a q.
 */
GetBucketOwnershipControlsResponsePrivate::GetBucketOwnershipControlsResponsePrivate(
    GetBucketOwnershipControlsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketOwnershipControls response element from \a xml.
 */
void GetBucketOwnershipControlsResponsePrivate::parseGetBucketOwnershipControlsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketOwnershipControlsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
